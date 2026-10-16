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

// Function: sub_001F0F90
// Address: 0x1f0f90 - 0x1f1078
void sub_001F0F90_0x1f0f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0F90_0x1f0f90");
#endif

    switch (ctx->pc) {
        case 0x1f0fb4u: goto label_1f0fb4;
        case 0x1f0fbcu: goto label_1f0fbc;
        case 0x1f0fc8u: goto label_1f0fc8;
        case 0x1f0fd4u: goto label_1f0fd4;
        case 0x1f0fe0u: goto label_1f0fe0;
        case 0x1f0fecu: goto label_1f0fec;
        case 0x1f0ff4u: goto label_1f0ff4;
        case 0x1f0ffcu: goto label_1f0ffc;
        case 0x1f1004u: goto label_1f1004;
        case 0x1f100cu: goto label_1f100c;
        case 0x1f1028u: goto label_1f1028;
        case 0x1f1058u: goto label_1f1058;
        default: break;
    }

    ctx->pc = 0x1f0f90u;

    // 0x1f0f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f0f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f0f94: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f0f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f0f98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f0f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f0f9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f0f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0fa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f0fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f0fa4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f0fa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0fa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f0fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0fac: 0xc091c52  jal         func_247148
    ctx->pc = 0x1F0FACu;
    SET_GPR_U32(ctx, 31, 0x1F0FB4u);
    ctx->pc = 0x1F0FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0FACu;
    // 0x1f0fb0: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247148u, 0x1F0FACu, 0x1F0FB4u)) {
        return;
    }
    ctx->pc = 0x1F0FB4u;
label_1f0fb4:
    // 0x1f0fb4: 0xc08a0e2  jal         func_228388
    ctx->pc = 0x1F0FB4u;
    SET_GPR_U32(ctx, 31, 0x1F0FBCu);
    ctx->pc = 0x1F0FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0FB4u;
    // 0x1f0fb8: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228388u, 0x1F0FB4u, 0x1F0FBCu)) {
        return;
    }
    ctx->pc = 0x1F0FBCu;
label_1f0fbc:
    // 0x1f0fbc: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x1f0fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1f0fc0: 0xc097a26  jal         func_25E898
    ctx->pc = 0x1F0FC0u;
    SET_GPR_U32(ctx, 31, 0x1F0FC8u);
    ctx->pc = 0x1F0FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0FC0u;
    // 0x1f0fc4: 0x8e050070  lw          $a1, 0x70($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E898u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E898u, 0x1F0FC0u, 0x1F0FC8u)) {
        return;
    }
    ctx->pc = 0x1F0FC8u;
label_1f0fc8:
    // 0x1f0fc8: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x1f0fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1f0fcc: 0xc097922  jal         func_25E488
    ctx->pc = 0x1F0FCCu;
    SET_GPR_U32(ctx, 31, 0x1F0FD4u);
    ctx->pc = 0x1F0FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0FCCu;
    // 0x1f0fd0: 0x8e050074  lw          $a1, 0x74($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E488u, 0x1F0FCCu, 0x1F0FD4u)) {
        return;
    }
    ctx->pc = 0x1F0FD4u;
label_1f0fd4:
    // 0x1f0fd4: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x1f0fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1f0fd8: 0xc08ad6a  jal         func_22B5A8
    ctx->pc = 0x1F0FD8u;
    SET_GPR_U32(ctx, 31, 0x1F0FE0u);
    ctx->pc = 0x1F0FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0FD8u;
    // 0x1f0fdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x1F0FD8u, 0x1F0FE0u)) {
        return;
    }
    ctx->pc = 0x1F0FE0u;
label_1f0fe0:
    // 0x1f0fe0: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x1f0fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1f0fe4: 0xc08ad6a  jal         func_22B5A8
    ctx->pc = 0x1F0FE4u;
    SET_GPR_U32(ctx, 31, 0x1F0FECu);
    ctx->pc = 0x1F0FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0FE4u;
    // 0x1f0fe8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x1F0FE4u, 0x1F0FECu)) {
        return;
    }
    ctx->pc = 0x1F0FECu;
label_1f0fec:
    // 0x1f0fec: 0xc0971cc  jal         func_25C730
    ctx->pc = 0x1F0FECu;
    SET_GPR_U32(ctx, 31, 0x1F0FF4u);
    ctx->pc = 0x1F0FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0FECu;
    // 0x1f0ff0: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C730u, 0x1F0FECu, 0x1F0FF4u)) {
        return;
    }
    ctx->pc = 0x1F0FF4u;
label_1f0ff4:
    // 0x1f0ff4: 0xc0898d2  jal         func_226348
    ctx->pc = 0x1F0FF4u;
    SET_GPR_U32(ctx, 31, 0x1F0FFCu);
    ctx->pc = 0x1F0FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0FF4u;
    // 0x1f0ff8: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226348u, 0x1F0FF4u, 0x1F0FFCu)) {
        return;
    }
    ctx->pc = 0x1F0FFCu;
label_1f0ffc:
    // 0x1f0ffc: 0xc089484  jal         func_225210
    ctx->pc = 0x1F0FFCu;
    SET_GPR_U32(ctx, 31, 0x1F1004u);
    ctx->pc = 0x1F1000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0FFCu;
    // 0x1f1000: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225210u, 0x1F0FFCu, 0x1F1004u)) {
        return;
    }
    ctx->pc = 0x1F1004u;
label_1f1004:
    // 0x1f1004: 0xc095df4  jal         func_2577D0
    ctx->pc = 0x1F1004u;
    SET_GPR_U32(ctx, 31, 0x1F100Cu);
    ctx->pc = 0x1F1008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1004u;
    // 0x1f1008: 0x8e040070  lw          $a0, 0x70($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2577D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2577D0u, 0x1F1004u, 0x1F100Cu)) {
        return;
    }
    ctx->pc = 0x1F100Cu;
label_1f100c:
    // 0x1f100c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1f100cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1f1010: 0x8c44e950  lw          $a0, -0x16B0($v0)
    ctx->pc = 0x1f1010u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33E950u));
    // 0x1f1014: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F1014u;
    {
        const bool branch_taken_0x1f1014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1014u;
        // 0x1f1018: 0xac40e950  sw          $zero, -0x16B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961488), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1014) {
            ctx->pc = 0x1F1044u;
            goto label_1f1044;
        }
    }
    ctx->pc = 0x1F101Cu;
    // 0x1f101c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f101cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1020: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1f1020u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1024: 0x0  nop
    ctx->pc = 0x1f1024u;
    // NOP
label_1f1028:
    // 0x1f1028: 0x10700004  beq         $v1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1028u;
    {
        const bool branch_taken_0x1f1028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1F102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1028u;
        // 0x1f102c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1028) {
            ctx->pc = 0x1F103Cu;
            goto label_1f103c;
        }
    }
    ctx->pc = 0x1F1030u;
    // 0x1f1030: 0x8ca2e950  lw          $v0, -0x16B0($a1)
    ctx->pc = 0x1f1030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294961488)));
    // 0x1f1034: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1f1034u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1f1038: 0xaca3e950  sw          $v1, -0x16B0($a1)
    ctx->pc = 0x1f1038u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294961488), GPR_U32(ctx, 3));
label_1f103c:
    // 0x1f103c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F103Cu;
    {
        const bool branch_taken_0x1f103c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F103Cu;
        // 0x1f1040: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f103c) {
            ctx->pc = 0x1F1028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1028;
        }
    }
    ctx->pc = 0x1F1044u;
label_1f1044:
    // 0x1f1044: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1f1044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1f1048: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1048u;
    {
        const bool branch_taken_0x1f1048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1048) {
            ctx->pc = 0x1F104Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1048u;
            // 0x1f104c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F105Cu;
            goto label_1f105c;
        }
    }
    ctx->pc = 0x1F1050u;
    // 0x1f1050: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1F1050u;
    SET_GPR_U32(ctx, 31, 0x1F1058u);
    ctx->pc = 0x1F1054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1050u;
    // 0x1f1054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1F1050u, 0x1F1058u)) {
        return;
    }
    ctx->pc = 0x1F1058u;
label_1f1058:
    // 0x1f1058: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f1058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f105c:
    // 0x1f105c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f105cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f1060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f1060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f1064: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1064u;
        // 0x1f1068: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F106Cu;
    // 0x1f106c: 0x0  nop
    ctx->pc = 0x1f106cu;
    // NOP
    // 0x1f1070: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1f1070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f1074: 0x0  nop
    ctx->pc = 0x1f1074u;
    // NOP
    ctx->pc = 0x1f1078u;
}
