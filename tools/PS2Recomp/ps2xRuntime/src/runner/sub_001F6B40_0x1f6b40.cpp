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

// Function: sub_001F6B40
// Address: 0x1f6b40 - 0x1f6c20
void sub_001F6B40_0x1f6b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6B40_0x1f6b40");
#endif

    switch (ctx->pc) {
        case 0x1f6ba4u: goto label_1f6ba4;
        case 0x1f6bb0u: goto label_1f6bb0;
        case 0x1f6bbcu: goto label_1f6bbc;
        case 0x1f6bdcu: goto label_1f6bdc;
        case 0x1f6bf4u: goto label_1f6bf4;
        case 0x1f6c00u: goto label_1f6c00;
        case 0x1f6c08u: goto label_1f6c08;
        default: break;
    }

    ctx->pc = 0x1f6b40u;

    // 0x1f6b40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f6b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f6b44: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f6b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f6b48: 0x31afa  dsrl        $v1, $v1, 11
    ctx->pc = 0x1f6b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 11);
    // 0x1f6b4c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f6b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f6b50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f6b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f6b54: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x1f6b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x1f6b58: 0x212ba  dsrl        $v0, $v0, 10
    ctx->pc = 0x1f6b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 10);
    // 0x1f6b5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f6b5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6b60: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f6b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f6b64: 0x223182d  daddu       $v1, $s1, $v1
    ctx->pc = 0x1f6b64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1f6b68: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f6b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f6b6c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1f6b6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f6b70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F6B70u;
    {
        const bool branch_taken_0x1f6b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B70u;
        // 0x1f6b74: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6b70) {
            ctx->pc = 0x1F6B90u;
            goto label_1f6b90;
        }
    }
    ctx->pc = 0x1F6B78u;
    // 0x1f6b78: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1f6b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1f6b7c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1f6b7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1f6b80: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x1f6b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x1f6b84: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F6B84u;
    {
        const bool branch_taken_0x1f6b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B84u;
        // 0x1f6b88: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6b84) {
            ctx->pc = 0x1F6B90u;
            goto label_1f6b90;
        }
    }
    ctx->pc = 0x1F6B8Cu;
    // 0x1f6b8c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x1f6b8cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_1f6b90:
    // 0x1f6b90: 0x341081e0  ori         $s0, $zero, 0x81E0
    ctx->pc = 0x1f6b90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x1f6b94: 0x1083fc  dsll32      $s0, $s0, 15
    ctx->pc = 0x1f6b94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 15));
    // 0x1f6b98: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x1f6b98u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x1f6b9c: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x1F6B9Cu;
    SET_GPR_U32(ctx, 31, 0x1F6BA4u);
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x1F6B9Cu, 0x1F6BA4u)) {
        return;
    }
    ctx->pc = 0x1F6BA4u;
label_1f6ba4:
    // 0x1f6ba4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f6ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ba8: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x1F6BA8u;
    SET_GPR_U32(ctx, 31, 0x1F6BB0u);
    ctx->pc = 0x1F6BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6BA8u;
    // 0x1f6bac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x1F6BA8u, 0x1F6BB0u)) {
        return;
    }
    ctx->pc = 0x1F6BB0u;
label_1f6bb0:
    // 0x1f6bb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f6bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6bb4: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x1F6BB4u;
    SET_GPR_U32(ctx, 31, 0x1F6BBCu);
    ctx->pc = 0x1F6BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6BB4u;
    // 0x1f6bb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x1F6BB4u, 0x1F6BBCu)) {
        return;
    }
    ctx->pc = 0x1F6BBCu;
label_1f6bbc:
    // 0x1f6bbc: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x1f6bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x1f6bc0: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x1f6bc0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x1f6bc4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f6bc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6bc8: 0x2308024  and         $s0, $s1, $s0
    ctx->pc = 0x1f6bc8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x1f6bcc: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1f6bccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1f6bd0: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x1f6bd0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x1f6bd4: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x1F6BD4u;
    SET_GPR_U32(ctx, 31, 0x1F6BDCu);
    ctx->pc = 0x1F6BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6BD4u;
    // 0x1f6bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x1F6BD4u, 0x1F6BDCu)) {
        return;
    }
    ctx->pc = 0x1F6BDCu;
label_1f6bdc:
    // 0x1f6bdc: 0x6030006  bgezl       $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6BDCu;
    {
        const bool branch_taken_0x1f6bdc = (GPR_S64(ctx, 16) >= 0);
        if (branch_taken_0x1f6bdc) {
            ctx->pc = 0x1F6BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6BDCu;
            // 0x1f6be0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6BF8u;
            goto label_1f6bf8;
        }
    }
    ctx->pc = 0x1F6BE4u;
    // 0x1f6be4: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x1f6be4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x1f6be8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1f6be8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1f6bec: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x1F6BECu;
    SET_GPR_U32(ctx, 31, 0x1F6BF4u);
    ctx->pc = 0x1F6BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6BECu;
    // 0x1f6bf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x1F6BECu, 0x1F6BF4u)) {
        return;
    }
    ctx->pc = 0x1F6BF4u;
label_1f6bf4:
    // 0x1f6bf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f6bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f6bf8:
    // 0x1f6bf8: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x1F6BF8u;
    SET_GPR_U32(ctx, 31, 0x1F6C00u);
    ctx->pc = 0x1F6BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6BF8u;
    // 0x1f6bfc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x1F6BF8u, 0x1F6C00u)) {
        return;
    }
    ctx->pc = 0x1F6C00u;
label_1f6c00:
    // 0x1f6c00: 0xc07df98  jal         func_1F7E60
    ctx->pc = 0x1F6C00u;
    SET_GPR_U32(ctx, 31, 0x1F6C08u);
    ctx->pc = 0x1F6C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6C00u;
    // 0x1f6c04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7E60u, 0x1F6C00u, 0x1F6C08u)) {
        return;
    }
    ctx->pc = 0x1F6C08u;
label_1f6c08:
    // 0x1f6c08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f6c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6c0c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f6c0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f6c10: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f6c10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6c14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f6c14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6c18: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C18u;
        // 0x1f6c1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6C20u;
}
