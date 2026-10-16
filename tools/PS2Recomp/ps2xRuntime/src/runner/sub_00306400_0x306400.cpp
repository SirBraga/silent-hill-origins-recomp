#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00306400
// Address: 0x306400 - 0x306568
void sub_00306400_0x306400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306400_0x306400");
#endif

    switch (ctx->pc) {
        case 0x306468u: goto label_306468;
        case 0x306484u: goto label_306484;
        case 0x3064d0u: goto label_3064d0;
        case 0x306510u: goto label_306510;
        case 0x306548u: goto label_306548;
        default: break;
    }

    ctx->pc = 0x306400u;

    // 0x306400: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x306400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x306404: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x306404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x306408: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x306408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x30640c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30640cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306410: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x306410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x306414: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x306414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306418: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x306418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x30641c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x30641cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306420: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x306420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x306424: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x306424u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306428: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x306428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30642c: 0x12400046  beqz        $s2, . + 4 + (0x46 << 2)
    ctx->pc = 0x30642Cu;
    {
        const bool branch_taken_0x30642c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x306430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30642Cu;
        // 0x306430: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30642c) {
            ctx->pc = 0x306548u;
            goto label_306548;
        }
    }
    ctx->pc = 0x306434u;
    // 0x306434: 0x26820004  addiu       $v0, $s4, 0x4
    ctx->pc = 0x306434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x306438: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x306438u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30643c: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x30643Cu;
    {
        const bool branch_taken_0x30643c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30643Cu;
        // 0x306440: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30643c) {
            ctx->pc = 0x30654Cu;
            goto label_30654c;
        }
    }
    ctx->pc = 0x306444u;
    // 0x306444: 0x104102b  sltu        $v0, $t0, $a0
    ctx->pc = 0x306444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x306448: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x306448u;
    {
        const bool branch_taken_0x306448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306448u;
        // 0x30644c: 0x2e620006  sltiu       $v0, $s3, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x306448) {
            ctx->pc = 0x30654Cu;
            goto label_30654c;
        }
    }
    ctx->pc = 0x306450u;
    // 0x306450: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x306450u;
    {
        const bool branch_taken_0x306450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306450u;
        // 0x306454: 0x2e620002  sltiu       $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x306450) {
            ctx->pc = 0x306488u;
            goto label_306488;
        }
    }
    ctx->pc = 0x306458u;
    // 0x306458: 0x2670ffff  addiu       $s0, $s3, -0x1
    ctx->pc = 0x306458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x30645c: 0x2111018  mult        $v0, $s0, $s1
    ctx->pc = 0x30645cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x306460: 0xc0c187c  jal         func_3061F0
    ctx->pc = 0x306460u;
    SET_GPR_U32(ctx, 31, 0x306468u);
    ctx->pc = 0x306464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306460u;
    // 0x306464: 0x528021  addu        $s0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3061F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3061F0u, 0x306460u, 0x306468u)) {
        return;
    }
    ctx->pc = 0x306468u;
label_306468:
    // 0x306468: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x306468u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30646c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30646cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306470: 0x484004  sllv        $t0, $t0, $v0
    ctx->pc = 0x306470u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x306474: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x306474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306478: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x306478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30647c: 0xc0c188c  jal         func_306230
    ctx->pc = 0x30647Cu;
    SET_GPR_U32(ctx, 31, 0x306484u);
    ctx->pc = 0x306480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30647Cu;
    // 0x306480: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306230u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x306230u, 0x30647Cu, 0x306484u)) {
        return;
    }
    ctx->pc = 0x306484u;
label_306484:
    // 0x306484: 0x2e620002  sltiu       $v0, $s3, 0x2
    ctx->pc = 0x306484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_306488:
    // 0x306488: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x306488u;
    {
        const bool branch_taken_0x306488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306488u;
        // 0x30648c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306488) {
            ctx->pc = 0x30654Cu;
            goto label_30654c;
        }
    }
    ctx->pc = 0x306490u;
    // 0x306490: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x306490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x306494: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x306494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x306498: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x306498u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x30649c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x30649cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x3064a0: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x3064a0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
    // 0x3064a4: 0x2542021  addu        $a0, $s2, $s4
    ctx->pc = 0x3064a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x3064a8: 0xb11818  mult        $v1, $a1, $s1
    ctx->pc = 0x3064a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3064ac: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3064acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3064b0: 0x2505ffff  addiu       $a1, $t0, -0x1
    ctx->pc = 0x3064b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3064b4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x3064b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x3064b8: 0x114823  negu        $t1, $s1
    ctx->pc = 0x3064b8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x3064bc: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x3064bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3064c0: 0xb11818  mult        $v1, $a1, $s1
    ctx->pc = 0x3064c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3064c4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x3064c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3064c8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3064c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3064cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3064ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3064d0:
    // 0x3064d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3064d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3064d4: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x3064d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3064d8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3064D8u;
    {
        const bool branch_taken_0x3064d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3064d8) {
            ctx->pc = 0x3064DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3064D8u;
            // 0x3064dc: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3064ECu;
            goto label_3064ec;
        }
    }
    ctx->pc = 0x3064E0u;
    // 0x3064e0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3064e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3064e4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3064e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3064e8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3064e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_3064ec:
    // 0x3064ec: 0x14a7fff8  bne         $a1, $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3064ECu;
    {
        const bool branch_taken_0x3064ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x3064F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3064ECu;
        // 0x3064f0: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3064ec) {
            ctx->pc = 0x3064D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3064d0;
        }
    }
    ctx->pc = 0x3064F4u;
    // 0x3064f4: 0x1100000f  beqz        $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x3064F4u;
    {
        const bool branch_taken_0x3064f4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3064F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3064F4u;
        // 0x3064f8: 0x1111818  mult        $v1, $t0, $s1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3064f4) {
            ctx->pc = 0x306534u;
            goto label_306534;
        }
    }
    ctx->pc = 0x3064FCu;
    // 0x3064fc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3064fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306500: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x306500u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306504: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x306504u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x306508: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x306508u;
    {
        const bool branch_taken_0x306508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306508u;
        // 0x30650c: 0x722821  addu        $a1, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306508) {
            ctx->pc = 0x306534u;
            goto label_306534;
        }
    }
    ctx->pc = 0x306510u;
label_306510:
    // 0x306510: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x306510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x306514: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x306514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x306518: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x306518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30651c: 0x2ce40004  sltiu       $a0, $a3, 0x4
    ctx->pc = 0x30651cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x306520: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x306520u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x306524: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x306524u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x306528: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x306528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x30652c: 0x1080fff8  beqz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x30652Cu;
    {
        const bool branch_taken_0x30652c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x306530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30652Cu;
        // 0x306530: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30652c) {
            ctx->pc = 0x306510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306510;
        }
    }
    ctx->pc = 0x306534u;
label_306534:
    // 0x306534: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306538: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x306538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30653c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x30653cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306540: 0xc0c18d8  jal         func_306360
    ctx->pc = 0x306540u;
    SET_GPR_U32(ctx, 31, 0x306548u);
    ctx->pc = 0x306544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306540u;
    // 0x306544: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x306360u, 0x306540u, 0x306548u)) {
        return;
    }
    ctx->pc = 0x306548u;
label_306548:
    // 0x306548: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x306548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_30654c:
    // 0x30654c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x30654cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x306550: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x306550u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x306554: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x306554u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x306558: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x306558u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30655c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30655cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x306560: 0x3e00008  jr          $ra
    ctx->pc = 0x306560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306560u;
        // 0x306564: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306568u;
}
