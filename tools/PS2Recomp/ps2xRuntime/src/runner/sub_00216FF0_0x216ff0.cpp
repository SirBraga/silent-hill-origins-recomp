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

// Function: sub_00216FF0
// Address: 0x216ff0 - 0x217170
void sub_00216FF0_0x216ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216FF0_0x216ff0");
#endif

    switch (ctx->pc) {
        case 0x217018u: goto label_217018;
        case 0x217040u: goto label_217040;
        case 0x217074u: goto label_217074;
        case 0x217090u: goto label_217090;
        case 0x2170d8u: goto label_2170d8;
        case 0x217134u: goto label_217134;
        case 0x217154u: goto label_217154;
        default: break;
    }

    ctx->pc = 0x216ff0u;

    // 0x216ff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x216ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x216ff4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x216ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x216ff8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x216ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216ffc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x216ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x217000: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x217000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217008: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x217008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21700c: 0x26070058  addiu       $a3, $s0, 0x58
    ctx->pc = 0x21700cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x217010: 0xc085e6c  jal         func_2179B0
    ctx->pc = 0x217010u;
    SET_GPR_U32(ctx, 31, 0x217018u);
    ctx->pc = 0x217014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217010u;
    // 0x217014: 0x26060054  addiu       $a2, $s0, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2179B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2179B0u, 0x217010u, 0x217018u)) {
        return;
    }
    ctx->pc = 0x217018u;
label_217018:
    // 0x217018: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x217018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x21701c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21701cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217020: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x217020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x217024: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x217024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217028: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x217028u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x21702c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x21702cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x217030: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x217030u;
    {
        const bool branch_taken_0x217030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x217034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217030u;
        // 0x217034: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217030) {
            ctx->pc = 0x21706Cu;
            goto label_21706c;
        }
    }
    ctx->pc = 0x217038u;
    // 0x217038: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x217038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x21703c: 0x0  nop
    ctx->pc = 0x21703cu;
    // NOP
label_217040:
    // 0x217040: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x217040u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x217044: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x217044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x217048: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x217048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21704c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x21704cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x217050: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x217050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x217054: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x217054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x217058: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x217058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x21705c: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x21705cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x217060: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x217060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x217064: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x217064u;
    {
        const bool branch_taken_0x217064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217064) {
            ctx->pc = 0x217068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217064u;
            // 0x217068: 0x8e030058  lw          $v1, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217040;
        }
    }
    ctx->pc = 0x21706Cu;
label_21706c:
    // 0x21706c: 0xc08599e  jal         func_216678
    ctx->pc = 0x21706Cu;
    SET_GPR_U32(ctx, 31, 0x217074u);
    ctx->pc = 0x217070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21706Cu;
    // 0x217070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216678u, 0x21706Cu, 0x217074u)) {
        return;
    }
    ctx->pc = 0x217074u;
label_217074:
    // 0x217074: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x217074u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217078: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x217078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21707c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21707cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217084: 0x3e00008  jr          $ra
    ctx->pc = 0x217084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217084u;
        // 0x217088: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21708Cu;
    // 0x21708c: 0x0  nop
    ctx->pc = 0x21708cu;
    // NOP
label_217090:
    // 0x217090: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x217090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x217094: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x217094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x217098: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x217098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x21709c: 0x24426518  addiu       $v0, $v0, 0x6518
    ctx->pc = 0x21709cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25880));
    // 0x2170a0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2170a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2170a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2170a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2170a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2170a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2170ac: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x2170acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x2170b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2170b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2170b4: 0x24712d30  addiu       $s1, $v1, 0x2D30
    ctx->pc = 0x2170b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 11568));
    // 0x2170b8: 0xae020298  sw          $v0, 0x298($s0)
    ctx->pc = 0x2170b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 2));
    // 0x2170bc: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x2170bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x2170c0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2170c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x702D34u));
    // 0x2170c4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2170C4u;
    {
        const bool branch_taken_0x2170c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2170C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170C4u;
        // 0x2170c8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2170c4) {
            ctx->pc = 0x2170F0u;
            goto label_2170f0;
        }
    }
    ctx->pc = 0x2170CCu;
    // 0x2170cc: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x2170ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2170d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2170d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2170d4: 0x0  nop
    ctx->pc = 0x2170d4u;
    // NOP
label_2170d8:
    // 0x2170d8: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2170D8u;
    {
        const bool branch_taken_0x2170d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2170d8) {
            ctx->pc = 0x2170F4u;
            goto label_2170f4;
        }
    }
    ctx->pc = 0x2170E0u;
    // 0x2170e0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2170e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2170e4: 0x0  nop
    ctx->pc = 0x2170e4u;
    // NOP
    // 0x2170e8: 0x5480fffb  bnel        $a0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2170E8u;
    {
        const bool branch_taken_0x2170e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2170e8) {
            ctx->pc = 0x2170ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2170E8u;
            // 0x2170ec: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2170D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2170d8;
        }
    }
    ctx->pc = 0x2170F0u;
label_2170f0:
    // 0x2170f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2170f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2170f4:
    // 0x2170f4: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2170F4u;
    {
        const bool branch_taken_0x2170f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2170F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170F4u;
        // 0x2170f8: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2170f4) {
            ctx->pc = 0x217144u;
            goto label_217144;
        }
    }
    ctx->pc = 0x2170FCu;
    // 0x2170fc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2170fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x217100: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x217100u;
    {
        const bool branch_taken_0x217100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x217104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217100u;
        // 0x217104: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217100) {
            ctx->pc = 0x217110u;
            goto label_217110;
        }
    }
    ctx->pc = 0x217108u;
    // 0x217108: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x217108u;
    {
        const bool branch_taken_0x217108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217108u;
        // 0x21710c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217108) {
            ctx->pc = 0x217114u;
            goto label_217114;
        }
    }
    ctx->pc = 0x217110u;
label_217110:
    // 0x217110: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x217110u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_217114:
    // 0x217114: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x217114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x217118: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x217118u;
    {
        const bool branch_taken_0x217118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217118u;
        // 0x21711c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217118) {
            ctx->pc = 0x217128u;
            goto label_217128;
        }
    }
    ctx->pc = 0x217120u;
    // 0x217120: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x217120u;
    {
        const bool branch_taken_0x217120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217120u;
        // 0x217124: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217120) {
            ctx->pc = 0x21712Cu;
            goto label_21712c;
        }
    }
    ctx->pc = 0x217128u;
label_217128:
    // 0x217128: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x217128u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_21712c:
    // 0x21712c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x21712Cu;
    SET_GPR_U32(ctx, 31, 0x217134u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x21712Cu, 0x217134u)) {
        return;
    }
    ctx->pc = 0x217134u;
label_217134:
    // 0x217134: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x217134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x217138: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x217138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21713c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21713cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x217140: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x217140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_217144:
    // 0x217144: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x217144u;
    {
        const bool branch_taken_0x217144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217144) {
            ctx->pc = 0x217148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217144u;
            // 0x217148: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217158u;
            goto label_217158;
        }
    }
    ctx->pc = 0x21714Cu;
    // 0x21714c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x21714Cu;
    SET_GPR_U32(ctx, 31, 0x217154u);
    ctx->pc = 0x217150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21714Cu;
    // 0x217150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x21714Cu, 0x217154u)) {
        return;
    }
    ctx->pc = 0x217154u;
label_217154:
    // 0x217154: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x217154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_217158:
    // 0x217158: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x217158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21715c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21715cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217160: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x217160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217164: 0x3e00008  jr          $ra
    ctx->pc = 0x217164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217164u;
        // 0x217168: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21716Cu;
    // 0x21716c: 0x0  nop
    ctx->pc = 0x21716cu;
    // NOP
    ctx->pc = 0x217170u;
}
