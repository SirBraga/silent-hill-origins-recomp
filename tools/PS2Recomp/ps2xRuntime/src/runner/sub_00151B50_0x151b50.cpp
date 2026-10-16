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

// Function: sub_00151B50
// Address: 0x151b50 - 0x151c28
void sub_00151B50_0x151b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151B50_0x151b50");
#endif

    switch (ctx->pc) {
        case 0x151b80u: goto label_151b80;
        case 0x151b90u: goto label_151b90;
        case 0x151ba0u: goto label_151ba0;
        case 0x151bb0u: goto label_151bb0;
        case 0x151bbcu: goto label_151bbc;
        case 0x151bd0u: goto label_151bd0;
        case 0x151becu: goto label_151bec;
        case 0x151bf4u: goto label_151bf4;
        case 0x151bfcu: goto label_151bfc;
        case 0x151c04u: goto label_151c04;
        case 0x151c10u: goto label_151c10;
        default: break;
    }

    ctx->pc = 0x151b50u;

    // 0x151b50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x151b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x151b54: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x151b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x151b58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x151b5c: 0x24422470  addiu       $v0, $v0, 0x2470
    ctx->pc = 0x151b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9328));
    // 0x151b60: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x151b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x151b64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x151b64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151b68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x151b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151b6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x151b70: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x151b70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x151b74: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x151b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x151b78: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x151B78u;
    SET_GPR_U32(ctx, 31, 0x151B80u);
    ctx->pc = 0x151B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151B78u;
    // 0x151b7c: 0x24a58918  addiu       $a1, $a1, -0x76E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x151B78u, 0x151B80u)) {
        return;
    }
    ctx->pc = 0x151B80u;
label_151b80:
    // 0x151b80: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x151b80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x151b84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151b88: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x151B88u;
    SET_GPR_U32(ctx, 31, 0x151B90u);
    ctx->pc = 0x151B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151B88u;
    // 0x151b8c: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x151B88u, 0x151B90u)) {
        return;
    }
    ctx->pc = 0x151B90u;
label_151b90:
    // 0x151b90: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x151b90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x151b94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151b98: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x151B98u;
    SET_GPR_U32(ctx, 31, 0x151BA0u);
    ctx->pc = 0x151B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151B98u;
    // 0x151b9c: 0x24a58898  addiu       $a1, $a1, -0x7768 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x151B98u, 0x151BA0u)) {
        return;
    }
    ctx->pc = 0x151BA0u;
label_151ba0:
    // 0x151ba0: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x151ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x151ba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151ba8: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x151BA8u;
    SET_GPR_U32(ctx, 31, 0x151BB0u);
    ctx->pc = 0x151BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151BA8u;
    // 0x151bac: 0x24a5fa68  addiu       $a1, $a1, -0x598 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x151BA8u, 0x151BB0u)) {
        return;
    }
    ctx->pc = 0x151BB0u;
label_151bb0:
    // 0x151bb0: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x151bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x151bb4: 0xc08114c  jal         func_204530
    ctx->pc = 0x151BB4u;
    SET_GPR_U32(ctx, 31, 0x151BBCu);
    ctx->pc = 0x151BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151BB4u;
    // 0x151bb8: 0x248423d8  addiu       $a0, $a0, 0x23D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204530u, 0x151BB4u, 0x151BBCu)) {
        return;
    }
    ctx->pc = 0x151BBCu;
label_151bbc:
    // 0x151bbc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x151BBCu;
    {
        const bool branch_taken_0x151bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151bbc) {
            ctx->pc = 0x151BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151BBCu;
            // 0x151bc0: 0xac400024  sw          $zero, 0x24($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151BC4u;
            goto label_151bc4;
        }
    }
    ctx->pc = 0x151BC4u;
label_151bc4:
    // 0x151bc4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x151bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x151bc8: 0xc07bf02  jal         func_1EFC08
    ctx->pc = 0x151BC8u;
    SET_GPR_U32(ctx, 31, 0x151BD0u);
    ctx->pc = 0x151BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151BC8u;
    // 0x151bcc: 0x8c444120  lw          $a0, 0x4120($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFC08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFC08u, 0x151BC8u, 0x151BD0u)) {
        return;
    }
    ctx->pc = 0x151BD0u;
label_151bd0:
    // 0x151bd0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x151bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x151bd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x151bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151bd8: 0x8c449168  lw          $a0, -0x6E98($v0)
    ctx->pc = 0x151bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x339168u));
    // 0x151bdc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x151bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151be0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x151be0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151be4: 0xc06c24c  jal         func_1B0930
    ctx->pc = 0x151BE4u;
    SET_GPR_U32(ctx, 31, 0x151BECu);
    ctx->pc = 0x151BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151BE4u;
    // 0x151be8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B0930u, 0x151BE4u, 0x151BECu)) {
        return;
    }
    ctx->pc = 0x151BECu;
label_151bec:
    // 0x151bec: 0xc081042  jal         func_204108
    ctx->pc = 0x151BECu;
    SET_GPR_U32(ctx, 31, 0x151BF4u);
    ctx->pc = 0x151BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151BECu;
    // 0x151bf0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204108u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204108u, 0x151BECu, 0x151BF4u)) {
        return;
    }
    ctx->pc = 0x151BF4u;
label_151bf4:
    // 0x151bf4: 0xc07f438  jal         func_1FD0E0
    ctx->pc = 0x151BF4u;
    SET_GPR_U32(ctx, 31, 0x151BFCu);
    ctx->pc = 0x151BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151BF4u;
    // 0x151bf8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD0E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD0E0u, 0x151BF4u, 0x151BFCu)) {
        return;
    }
    ctx->pc = 0x151BFCu;
label_151bfc:
    // 0x151bfc: 0xc0804a8  jal         func_2012A0
    ctx->pc = 0x151BFCu;
    SET_GPR_U32(ctx, 31, 0x151C04u);
    ctx->pc = 0x2012A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2012A0u, 0x151BFCu, 0x151C04u)) {
        return;
    }
    ctx->pc = 0x151C04u;
label_151c04:
    // 0x151c04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151c08: 0xc07fc62  jal         func_1FF188
    ctx->pc = 0x151C08u;
    SET_GPR_U32(ctx, 31, 0x151C10u);
    ctx->pc = 0x151C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151C08u;
    // 0x151c0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF188u, 0x151C08u, 0x151C10u)) {
        return;
    }
    ctx->pc = 0x151C10u;
label_151c10:
    // 0x151c10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x151c10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151c14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151c14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151c18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x151C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C1Cu;
        // 0x151c20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151C24u;
    // 0x151c24: 0x0  nop
    ctx->pc = 0x151c24u;
    // NOP
    ctx->pc = 0x151c28u;
}
