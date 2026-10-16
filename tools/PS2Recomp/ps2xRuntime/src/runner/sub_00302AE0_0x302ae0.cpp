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

// Function: sub_00302AE0
// Address: 0x302ae0 - 0x302bd8
void sub_00302AE0_0x302ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302AE0_0x302ae0");
#endif

    switch (ctx->pc) {
        case 0x302b60u: goto label_302b60;
        case 0x302b68u: goto label_302b68;
        case 0x302b80u: goto label_302b80;
        case 0x302b90u: goto label_302b90;
        case 0x302ba4u: goto label_302ba4;
        default: break;
    }

    ctx->pc = 0x302ae0u;

    // 0x302ae0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x302ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x302ae4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x302ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x302ae8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x302ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x302aec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x302aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302af0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x302af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x302af4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x302af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x302af8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x302af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x302afc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x302afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x302b00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x302b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x302b04: 0x8e22014c  lw          $v0, 0x14C($s1)
    ctx->pc = 0x302b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x302b08: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x302B08u;
    {
        const bool branch_taken_0x302b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302b08) {
            ctx->pc = 0x302B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302B08u;
            // 0x302b0c: 0x8e230184  lw          $v1, 0x184($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302B2Cu;
            goto label_302b2c;
        }
    }
    ctx->pc = 0x302B10u;
    // 0x302b10: 0x8e220194  lw          $v0, 0x194($s1)
    ctx->pc = 0x302b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x302b14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x302B14u;
    {
        const bool branch_taken_0x302b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B14u;
        // 0x302b18: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302b14) {
            ctx->pc = 0x302B38u;
            goto label_302b38;
        }
    }
    ctx->pc = 0x302B1Cu;
    // 0x302b1c: 0x8e230188  lw          $v1, 0x188($s1)
    ctx->pc = 0x302b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
    // 0x302b20: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x302b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x302b24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x302B24u;
    {
        const bool branch_taken_0x302b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B24u;
        // 0x302b28: 0x43980b  movn        $s3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302b24) {
            ctx->pc = 0x302B48u;
            goto label_302b48;
        }
    }
    ctx->pc = 0x302B2Cu;
label_302b2c:
    // 0x302b2c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x302b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x302b30: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x302B30u;
    {
        const bool branch_taken_0x302b30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x302b30) {
            ctx->pc = 0x302B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302B30u;
            // 0x302b34: 0x8e220194  lw          $v0, 0x194($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302B40u;
            goto label_302b40;
        }
    }
    ctx->pc = 0x302B38u;
label_302b38:
    // 0x302b38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x302B38u;
    {
        const bool branch_taken_0x302b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B38u;
        // 0x302b3c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302b38) {
            ctx->pc = 0x302B48u;
            goto label_302b48;
        }
    }
    ctx->pc = 0x302B40u;
label_302b40:
    // 0x302b40: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x302b40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x302b44: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x302b44u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3));
label_302b48:
    // 0x302b48: 0x1a600019  blez        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x302B48u;
    {
        const bool branch_taken_0x302b48 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x302B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B48u;
        // 0x302b4c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302b48) {
            ctx->pc = 0x302BB0u;
            goto label_302bb0;
        }
    }
    ctx->pc = 0x302B50u;
    // 0x302b50: 0x2635019c  addiu       $s5, $s1, 0x19C
    ctx->pc = 0x302b50u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 412));
    // 0x302b54: 0x263401a8  addiu       $s4, $s1, 0x1A8
    ctx->pc = 0x302b54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 424));
    // 0x302b58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302b5c: 0x0  nop
    ctx->pc = 0x302b5cu;
    // NOP
label_302b60:
    // 0x302b60: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302B60u;
    SET_GPR_U32(ctx, 31, 0x302B68u);
    ctx->pc = 0x302B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302B60u;
    // 0x302b64: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302B60u, 0x302B68u)) {
        return;
    }
    ctx->pc = 0x302B68u;
label_302b68:
    // 0x302b68: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x302b68u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x302b6c: 0x2b01821  addu        $v1, $s5, $s0
    ctx->pc = 0x302b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x302b70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302b74: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x302b74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x302b78: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302B78u;
    SET_GPR_U32(ctx, 31, 0x302B80u);
    ctx->pc = 0x302B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302B78u;
    // 0x302b7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302B78u, 0x302B80u)) {
        return;
    }
    ctx->pc = 0x302B80u;
label_302b80:
    // 0x302b80: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x302b80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x302b84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302b88: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302B88u;
    SET_GPR_U32(ctx, 31, 0x302B90u);
    ctx->pc = 0x302B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302B88u;
    // 0x302b8c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302B88u, 0x302B90u)) {
        return;
    }
    ctx->pc = 0x302B90u;
label_302b90:
    // 0x302b90: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x302b90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x302b94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302b98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x302b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x302b9c: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302B9Cu;
    SET_GPR_U32(ctx, 31, 0x302BA4u);
    ctx->pc = 0x302BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302B9Cu;
    // 0x302ba0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302B9Cu, 0x302BA4u)) {
        return;
    }
    ctx->pc = 0x302BA4u;
label_302ba4:
    // 0x302ba4: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x302ba4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x302ba8: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x302BA8u;
    {
        const bool branch_taken_0x302ba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x302BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302BA8u;
        // 0x302bac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302ba8) {
            ctx->pc = 0x302B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_302b60;
        }
    }
    ctx->pc = 0x302BB0u;
label_302bb0:
    // 0x302bb0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x302bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x302bb4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x302bb4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x302bb8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x302bb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x302bbc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x302bbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x302bc0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x302bc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302bc4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x302bc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x302bc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x302bc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x302BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302BCCu;
        // 0x302bd0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302BD4u;
    // 0x302bd4: 0x0  nop
    ctx->pc = 0x302bd4u;
    // NOP
    ctx->pc = 0x302bd8u;
}
