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

// Function: sub_00305908
// Address: 0x305908 - 0x305b38
void sub_00305908_0x305908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305908_0x305908");
#endif

    switch (ctx->pc) {
        case 0x305948u: goto label_305948;
        case 0x305968u: goto label_305968;
        case 0x305988u: goto label_305988;
        case 0x30599cu: goto label_30599c;
        case 0x3059a8u: goto label_3059a8;
        case 0x3059bcu: goto label_3059bc;
        case 0x305a00u: goto label_305a00;
        case 0x305a50u: goto label_305a50;
        case 0x305a7cu: goto label_305a7c;
        case 0x305ab0u: goto label_305ab0;
        case 0x305ac4u: goto label_305ac4;
        default: break;
    }

    ctx->pc = 0x305908u;

    // 0x305908: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x305908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x30590c: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x30590cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x305910: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x305910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x305914: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x305914u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305918: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x305918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x30591c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x30591cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x305920: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x305920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x305924: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x305924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x305928: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x305928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x30592c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x30592cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x305930: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x305930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x305934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x305934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x305938: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x305938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x30593c: 0x8c930004  lw          $s3, 0x4($a0)
    ctx->pc = 0x30593cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x305940: 0x8c940008  lw          $s4, 0x8($a0)
    ctx->pc = 0x305940u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x305944: 0x0  nop
    ctx->pc = 0x305944u;
    // NOP
label_305948:
    // 0x305948: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x305948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x30594c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x30594cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x305950: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x305950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x305954: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x305954u;
    {
        const bool branch_taken_0x305954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x305958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305954u;
        // 0x305958: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305954) {
            ctx->pc = 0x3059D8u;
            goto label_3059d8;
        }
    }
    ctx->pc = 0x30595Cu;
    // 0x30595c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x30595cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305960: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x305960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305964: 0x0  nop
    ctx->pc = 0x305964u;
    // NOP
label_305968:
    // 0x305968: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x305968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x30596c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x30596cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x305970: 0x718021  addu        $s0, $v1, $s1
    ctx->pc = 0x305970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x305974: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x305974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x305978: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x305978u;
    {
        const bool branch_taken_0x305978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305978) {
            ctx->pc = 0x30597Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305978u;
            // 0x30597c: 0x8e82001c  lw          $v0, 0x1C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3059C0u;
            goto label_3059c0;
        }
    }
    ctx->pc = 0x305980u;
    // 0x305980: 0xc0c146c  jal         func_3051B0
    ctx->pc = 0x305980u;
    SET_GPR_U32(ctx, 31, 0x305988u);
    ctx->pc = 0x305984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305980u;
    // 0x305984: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3051B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3051B0u, 0x305980u, 0x305988u)) {
        return;
    }
    ctx->pc = 0x305988u;
label_305988:
    // 0x305988: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x305988u;
    {
        const bool branch_taken_0x305988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305988u;
        // 0x30598c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305988) {
            ctx->pc = 0x3059B0u;
            goto label_3059b0;
        }
    }
    ctx->pc = 0x305990u;
    // 0x305990: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x305990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x305994: 0xc092848  jal         func_24A120
    ctx->pc = 0x305994u;
    SET_GPR_U32(ctx, 31, 0x30599Cu);
    ctx->pc = 0x305998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305994u;
    // 0x305998: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x305994u, 0x30599Cu)) {
        return;
    }
    ctx->pc = 0x30599Cu;
label_30599c:
    // 0x30599c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x30599cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3059a0: 0xc09281a  jal         func_24A068
    ctx->pc = 0x3059A0u;
    SET_GPR_U32(ctx, 31, 0x3059A8u);
    ctx->pc = 0x3059A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3059A0u;
    // 0x3059a4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x3059A0u, 0x3059A8u)) {
        return;
    }
    ctx->pc = 0x3059A8u;
label_3059a8:
    // 0x3059a8: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x3059A8u;
    {
        const bool branch_taken_0x3059a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3059ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3059A8u;
        // 0x3059ac: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3059a8) {
            ctx->pc = 0x305B04u;
            goto label_305b04;
        }
    }
    ctx->pc = 0x3059B0u;
label_3059b0:
    // 0x3059b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3059b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3059b4: 0xc0c1482  jal         func_305208
    ctx->pc = 0x3059B4u;
    SET_GPR_U32(ctx, 31, 0x3059BCu);
    ctx->pc = 0x3059B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3059B4u;
    // 0x3059b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305208u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x305208u, 0x3059B4u, 0x3059BCu)) {
        return;
    }
    ctx->pc = 0x3059BCu;
label_3059bc:
    // 0x3059bc: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x3059bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_3059c0:
    // 0x3059c0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3059c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3059c4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3059c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3059c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3059c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3059cc: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x3059ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3059d0: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x3059D0u;
    {
        const bool branch_taken_0x3059d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3059D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3059D0u;
        // 0x3059d4: 0x26310024  addiu       $s1, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3059d0) {
            ctx->pc = 0x305968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305968;
        }
    }
    ctx->pc = 0x3059D8u;
label_3059d8:
    // 0x3059d8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x3059d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3059dc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3059dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x3059e0: 0x26830028  addiu       $v1, $s4, 0x28
    ctx->pc = 0x3059e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
    // 0x3059e4: 0xafb30014  sw          $s3, 0x14($sp)
    ctx->pc = 0x3059e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 19));
    // 0x3059e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3059e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3059ec: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x3059ECu;
    {
        const bool branch_taken_0x3059ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3059F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3059ECu;
        // 0x3059f0: 0xafa3001c  sw          $v1, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3059ec) {
            ctx->pc = 0x305AF4u;
            goto label_305af4;
        }
    }
    ctx->pc = 0x3059F4u;
    // 0x3059f4: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x3059f4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
    // 0x3059f8: 0x36d6ffff  ori         $s6, $s6, 0xFFFF
    ctx->pc = 0x3059f8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x3059fc: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x3059fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_305a00:
    // 0x305a00: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x305a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x305a04: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x305a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x305a08: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x305a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x305a0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x305a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x305a10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x305a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x305a14: 0x10560032  beq         $v0, $s6, . + 4 + (0x32 << 2)
    ctx->pc = 0x305A14u;
    {
        const bool branch_taken_0x305a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x305A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305A14u;
        // 0x305a18: 0x24030028  addiu       $v1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305a14) {
            ctx->pc = 0x305AE0u;
            goto label_305ae0;
        }
    }
    ctx->pc = 0x305A1Cu;
    // 0x305a1c: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x305a1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x305a20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x305a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x305a24: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x305a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x305a28: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x305a28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x305a2c: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x305a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x305a30: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x305a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x305a34: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x305a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x305a38: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x305A38u;
    {
        const bool branch_taken_0x305a38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x305A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305A38u;
        // 0x305a3c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305a38) {
            ctx->pc = 0x305AE0u;
            goto label_305ae0;
        }
    }
    ctx->pc = 0x305A40u;
    // 0x305a40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305a44: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x305a44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305a48: 0xa3b804  sllv        $s7, $v1, $a1
    ctx->pc = 0x305a48u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x305a4c: 0x0  nop
    ctx->pc = 0x305a4cu;
    // NOP
label_305a50:
    // 0x305a50: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x305a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x305a54: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x305a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x305a58: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x305a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x305a5c: 0x958821  addu        $s1, $a0, $s5
    ctx->pc = 0x305a5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x305a60: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x305a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x305a64: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x305A64u;
    {
        const bool branch_taken_0x305a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305a64) {
            ctx->pc = 0x305A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305A64u;
            // 0x305a68: 0x8e64001c  lw          $a0, 0x1C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305AC8u;
            goto label_305ac8;
        }
    }
    ctx->pc = 0x305A6Cu;
    // 0x305a6c: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x305a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x305a70: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x305a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x305a74: 0xc0c13a8  jal         func_304EA0
    ctx->pc = 0x305A74u;
    SET_GPR_U32(ctx, 31, 0x305A7Cu);
    ctx->pc = 0x305A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305A74u;
    // 0x305a78: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304EA0u, 0x305A74u, 0x305A7Cu)) {
        return;
    }
    ctx->pc = 0x305A7Cu;
label_305a7c:
    // 0x305a7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x305a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305a80: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x305A80u;
    {
        const bool branch_taken_0x305a80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x305a80) {
            ctx->pc = 0x305A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305A80u;
            // 0x305a84: 0x8e64001c  lw          $a0, 0x1C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305AC8u;
            goto label_305ac8;
        }
    }
    ctx->pc = 0x305A88u;
    // 0x305a88: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x305a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x305a8c: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x305a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x305a90: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x305A90u;
    {
        const bool branch_taken_0x305a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305a90) {
            ctx->pc = 0x305A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305A90u;
            // 0x305a94: 0x8e64001c  lw          $a0, 0x1C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305AC8u;
            goto label_305ac8;
        }
    }
    ctx->pc = 0x305A98u;
    // 0x305a98: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x305a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x305a9c: 0x54a00007  bnel        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x305A9Cu;
    {
        const bool branch_taken_0x305a9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x305a9c) {
            ctx->pc = 0x305AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305A9Cu;
            // 0x305aa0: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305ABCu;
            goto label_305abc;
        }
    }
    ctx->pc = 0x305AA4u;
    // 0x305aa4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x305aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x305aa8: 0xc0c1482  jal         func_305208
    ctx->pc = 0x305AA8u;
    SET_GPR_U32(ctx, 31, 0x305AB0u);
    ctx->pc = 0x305AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305AA8u;
    // 0x305aac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305208u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x305208u, 0x305AA8u, 0x305AB0u)) {
        return;
    }
    ctx->pc = 0x305AB0u;
label_305ab0:
    // 0x305ab0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x305ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x305ab4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x305AB4u;
    {
        const bool branch_taken_0x305ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305AB4u;
        // 0x305ab8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305ab4) {
            ctx->pc = 0x305AC4u;
            goto label_305ac4;
        }
    }
    ctx->pc = 0x305ABCu;
label_305abc:
    // 0x305abc: 0xc0c1486  jal         func_305218
    ctx->pc = 0x305ABCu;
    SET_GPR_U32(ctx, 31, 0x305AC4u);
    ctx->pc = 0x305AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305ABCu;
    // 0x305ac0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x305218u, 0x305ABCu, 0x305AC4u)) {
        return;
    }
    ctx->pc = 0x305AC4u;
label_305ac4:
    // 0x305ac4: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x305ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_305ac8:
    // 0x305ac8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x305ac8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x305acc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x305accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x305ad0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x305ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x305ad4: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x305ad4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x305ad8: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x305AD8u;
    {
        const bool branch_taken_0x305ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305AD8u;
        // 0x305adc: 0x26b50024  addiu       $s5, $s5, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305ad8) {
            ctx->pc = 0x305A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305a50;
        }
    }
    ctx->pc = 0x305AE0u;
label_305ae0:
    // 0x305ae0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x305ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x305ae4: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x305ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x305ae8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x305ae8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x305aec: 0x5440ffc4  bnel        $v0, $zero, . + 4 + (-0x3C << 2)
    ctx->pc = 0x305AECu;
    {
        const bool branch_taken_0x305aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305aec) {
            ctx->pc = 0x305AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305AECu;
            // 0x305af0: 0x8e830008  lw          $v1, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305a00;
        }
    }
    ctx->pc = 0x305AF4u;
label_305af4:
    // 0x305af4: 0x8fb30014  lw          $s3, 0x14($sp)
    ctx->pc = 0x305af4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x305af8: 0x1660ff93  bnez        $s3, . + 4 + (-0x6D << 2)
    ctx->pc = 0x305AF8u;
    {
        const bool branch_taken_0x305af8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x305AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305AF8u;
        // 0x305afc: 0x8fb4001c  lw          $s4, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305af8) {
            ctx->pc = 0x305948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305948;
        }
    }
    ctx->pc = 0x305B00u;
    // 0x305b00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x305b00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305b04:
    // 0x305b04: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x305b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x305b08: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x305b08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x305b0c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x305b0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x305b10: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x305b10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x305b14: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x305b14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x305b18: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x305b18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x305b1c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x305b1cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x305b20: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x305b20u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x305b24: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x305b24u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x305b28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x305b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x305b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x305B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B2Cu;
        // 0x305b30: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305B34u;
    // 0x305b34: 0x0  nop
    ctx->pc = 0x305b34u;
    // NOP
    ctx->pc = 0x305b38u;
}
