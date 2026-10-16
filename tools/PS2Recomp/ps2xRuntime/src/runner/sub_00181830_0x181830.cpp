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

// Function: sub_00181830
// Address: 0x181830 - 0x181978
void sub_00181830_0x181830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181830_0x181830");
#endif

    switch (ctx->pc) {
        case 0x1818bcu: goto label_1818bc;
        case 0x1818ccu: goto label_1818cc;
        case 0x1818e0u: goto label_1818e0;
        case 0x181900u: goto label_181900;
        case 0x181910u: goto label_181910;
        case 0x181924u: goto label_181924;
        case 0x181938u: goto label_181938;
        case 0x181948u: goto label_181948;
        default: break;
    }

    ctx->pc = 0x181830u;

    // 0x181830: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x181830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x181834: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x181834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x181838: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x181838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x18183c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x18183cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181840: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x181840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x181844: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x181844u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181848: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x181848u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18184c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18184cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x181850: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x181850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x181854: 0x2272821  addu        $a1, $s1, $a3
    ctx->pc = 0x181854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x181858: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x181858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x18185c: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x18185cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x181860: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x181860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x181864: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x181864u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181868: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x181868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x18186c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x18186cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181870: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x181874: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x181874u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181878: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x181878u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18187c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18187Cu;
    {
        const bool branch_taken_0x18187c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18187Cu;
        // 0x181880: 0x140b02d  daddu       $s6, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18187c) {
            ctx->pc = 0x1818A0u;
            goto label_1818a0;
        }
    }
    ctx->pc = 0x181884u;
    // 0x181884: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x181884u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x181888: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x181888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x18188c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18188Cu;
    {
        const bool branch_taken_0x18188c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18188c) {
            ctx->pc = 0x181890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18188Cu;
            // 0x181890: 0x2439023  subu        $s2, $s2, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1818A0u;
            goto label_1818a0;
        }
    }
    ctx->pc = 0x181894u;
    // 0x181894: 0x721023  subu        $v0, $v1, $s2
    ctx->pc = 0x181894u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x181898: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x181898u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x18189c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18189cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1818a0:
    // 0x1818a0: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x1818a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1818a4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1818A4u;
    {
        const bool branch_taken_0x1818a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1818A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1818A4u;
        // 0x1818a8: 0x2309823  subu        $s3, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1818a4) {
            ctx->pc = 0x1818E8u;
            goto label_1818e8;
        }
    }
    ctx->pc = 0x1818ACu;
    // 0x1818ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1818acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1818b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1818b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1818b4: 0xc06065e  jal         func_181978
    ctx->pc = 0x1818B4u;
    SET_GPR_U32(ctx, 31, 0x1818BCu);
    ctx->pc = 0x1818B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1818B4u;
    // 0x1818b8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181978u, 0x1818B4u, 0x1818BCu)) {
        return;
    }
    ctx->pc = 0x1818BCu;
label_1818bc:
    // 0x1818bc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1818bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1818c0: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x1818c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1818c4: 0xc06065e  jal         func_181978
    ctx->pc = 0x1818C4u;
    SET_GPR_U32(ctx, 31, 0x1818CCu);
    ctx->pc = 0x1818C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1818C4u;
    // 0x1818c8: 0x2113023  subu        $a2, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181978u, 0x1818C4u, 0x1818CCu)) {
        return;
    }
    ctx->pc = 0x1818CCu;
label_1818cc:
    // 0x1818cc: 0x2f02021  addu        $a0, $s7, $s0
    ctx->pc = 0x1818ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x1818d0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1818d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1818d4: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x1818d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1818d8: 0xc06065e  jal         func_181978
    ctx->pc = 0x1818D8u;
    SET_GPR_U32(ctx, 31, 0x1818E0u);
    ctx->pc = 0x1818DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1818D8u;
    // 0x1818dc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181978u, 0x1818D8u, 0x1818E0u)) {
        return;
    }
    ctx->pc = 0x1818E0u;
label_1818e0:
    // 0x1818e0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1818E0u;
    {
        const bool branch_taken_0x1818e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1818E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1818E0u;
        // 0x1818e4: 0x2121021  addu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1818e0) {
            ctx->pc = 0x18194Cu;
            goto label_18194c;
        }
    }
    ctx->pc = 0x1818E8u;
label_1818e8:
    // 0x1818e8: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x1818e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1818ec: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1818ECu;
    {
        const bool branch_taken_0x1818ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1818F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1818ECu;
        // 0x1818f0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1818ec) {
            ctx->pc = 0x18192Cu;
            goto label_18192c;
        }
    }
    ctx->pc = 0x1818F4u;
    // 0x1818f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1818f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1818f8: 0xc06065e  jal         func_181978
    ctx->pc = 0x1818F8u;
    SET_GPR_U32(ctx, 31, 0x181900u);
    ctx->pc = 0x1818FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1818F8u;
    // 0x1818fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181978u, 0x1818F8u, 0x181900u)) {
        return;
    }
    ctx->pc = 0x181900u;
label_181900:
    // 0x181900: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x181900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181904: 0x2b02021  addu        $a0, $s5, $s0
    ctx->pc = 0x181904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x181908: 0xc06065e  jal         func_181978
    ctx->pc = 0x181908u;
    SET_GPR_U32(ctx, 31, 0x181910u);
    ctx->pc = 0x18190Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181908u;
    // 0x18190c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181978u, 0x181908u, 0x181910u)) {
        return;
    }
    ctx->pc = 0x181910u;
label_181910:
    // 0x181910: 0x2d12821  addu        $a1, $s6, $s1
    ctx->pc = 0x181910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x181914: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x181914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181918: 0xb02823  subu        $a1, $a1, $s0
    ctx->pc = 0x181918u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x18191c: 0xc06065e  jal         func_181978
    ctx->pc = 0x18191Cu;
    SET_GPR_U32(ctx, 31, 0x181924u);
    ctx->pc = 0x181920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18191Cu;
    // 0x181920: 0x2533023  subu        $a2, $s2, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181978u, 0x18191Cu, 0x181924u)) {
        return;
    }
    ctx->pc = 0x181924u;
label_181924:
    // 0x181924: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x181924u;
    {
        const bool branch_taken_0x181924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181924u;
        // 0x181928: 0x2121021  addu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181924) {
            ctx->pc = 0x18194Cu;
            goto label_18194c;
        }
    }
    ctx->pc = 0x18192Cu;
label_18192c:
    // 0x18192c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18192cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181930: 0xc06065e  jal         func_181978
    ctx->pc = 0x181930u;
    SET_GPR_U32(ctx, 31, 0x181938u);
    ctx->pc = 0x181934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181930u;
    // 0x181934: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181978u, 0x181930u, 0x181938u)) {
        return;
    }
    ctx->pc = 0x181938u;
label_181938:
    // 0x181938: 0x2b02021  addu        $a0, $s5, $s0
    ctx->pc = 0x181938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x18193c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x18193cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181940: 0xc06065e  jal         func_181978
    ctx->pc = 0x181940u;
    SET_GPR_U32(ctx, 31, 0x181948u);
    ctx->pc = 0x181944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181940u;
    // 0x181944: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181978u, 0x181940u, 0x181948u)) {
        return;
    }
    ctx->pc = 0x181948u;
label_181948:
    // 0x181948: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x181948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_18194c:
    // 0x18194c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x18194cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x181950: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x181950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x181954: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x181954u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x181958: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x181958u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18195c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18195cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x181960: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x181960u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x181964: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x181964u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181968: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x181968u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18196c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18196cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181970: 0x3e00008  jr          $ra
    ctx->pc = 0x181970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181970u;
        // 0x181974: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181978u;
}
