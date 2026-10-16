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

// Function: sub_002E9BB8
// Address: 0x2e9bb8 - 0x2e9c60
void sub_002E9BB8_0x2e9bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9BB8_0x2e9bb8");
#endif

    switch (ctx->pc) {
        case 0x2e9be0u: goto label_2e9be0;
        case 0x2e9c04u: goto label_2e9c04;
        case 0x2e9c18u: goto label_2e9c18;
        case 0x2e9c38u: goto label_2e9c38;
        case 0x2e9c48u: goto label_2e9c48;
        default: break;
    }

    ctx->pc = 0x2e9bb8u;

    // 0x2e9bb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e9bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e9bbc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2e9bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2e9bc0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e9bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e9bc4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2e9bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2e9bc8: 0x2450e400  addiu       $s0, $v0, -0x1C00
    ctx->pc = 0x2e9bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960128));
    // 0x2e9bcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e9bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e9bd0: 0x24a5fe00  addiu       $a1, $a1, -0x200
    ctx->pc = 0x2e9bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966784));
    // 0x2e9bd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e9bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9bd8: 0xc0b8fa4  jal         func_2E3E90
    ctx->pc = 0x2E9BD8u;
    SET_GPR_U32(ctx, 31, 0x2E9BE0u);
    ctx->pc = 0x2E9BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9BD8u;
    // 0x2e9bdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E3E90u, 0x2E9BD8u, 0x2E9BE0u)) {
        return;
    }
    ctx->pc = 0x2E9BE0u;
label_2e9be0:
    // 0x2e9be0: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x2e9be0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
    // 0x2e9be4: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x2e9be4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
    // 0x2e9be8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e9be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9bec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e9becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9bf0: 0x24e7e460  addiu       $a3, $a3, -0x1BA0
    ctx->pc = 0x2e9bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960224));
    // 0x2e9bf4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2e9bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e9bf8: 0x27889080  addiu       $t0, $gp, -0x6F80
    ctx->pc = 0x2e9bf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938752));
    // 0x2e9bfc: 0xc0b8f16  jal         func_2E3C58
    ctx->pc = 0x2E9BFCu;
    SET_GPR_U32(ctx, 31, 0x2E9C04u);
    ctx->pc = 0x2E9C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9BFCu;
    // 0x2e9c00: 0x3529080e  ori         $t1, $t1, 0x80E (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2062);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3C58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E3C58u, 0x2E9BFCu, 0x2E9C04u)) {
        return;
    }
    ctx->pc = 0x2E9C04u;
label_2e9c04:
    // 0x2e9c04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e9c04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9c08: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E9C08u;
    {
        const bool branch_taken_0x2e9c08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9C08u;
        // 0x2e9c0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9c08) {
            ctx->pc = 0x2E9C4Cu;
            goto label_2e9c4c;
        }
    }
    ctx->pc = 0x2E9C10u;
    // 0x2e9c10: 0xc0ba4b8  jal         func_2E92E0
    ctx->pc = 0x2E9C10u;
    SET_GPR_U32(ctx, 31, 0x2E9C18u);
    ctx->pc = 0x2E9C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9C10u;
    // 0x2e9c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E92E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E92E0u, 0x2E9C10u, 0x2E9C18u)) {
        return;
    }
    ctx->pc = 0x2E9C18u;
label_2e9c18:
    // 0x2e9c18: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x2e9c18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x2e9c1c: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x2e9c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x2e9c20: 0x24a55a50  addiu       $a1, $a1, 0x5A50
    ctx->pc = 0x2e9c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23120));
    // 0x2e9c24: 0x24e75ae0  addiu       $a3, $a3, 0x5AE0
    ctx->pc = 0x2e9c24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23264));
    // 0x2e9c28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e9c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9c2c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2e9c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e9c30: 0xc0b8e68  jal         func_2E39A0
    ctx->pc = 0x2E9C30u;
    SET_GPR_U32(ctx, 31, 0x2E9C38u);
    ctx->pc = 0x2E9C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9C30u;
    // 0x2e9c34: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E39A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E39A0u, 0x2E9C30u, 0x2E9C38u)) {
        return;
    }
    ctx->pc = 0x2E9C38u;
label_2e9c38:
    // 0x2e9c38: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E9C38u;
    {
        const bool branch_taken_0x2e9c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9C38u;
        // 0x2e9c3c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9c38) {
            ctx->pc = 0x2E9C4Cu;
            goto label_2e9c4c;
        }
    }
    ctx->pc = 0x2E9C40u;
    // 0x2e9c40: 0xc0b8df0  jal         func_2E37C0
    ctx->pc = 0x2E9C40u;
    SET_GPR_U32(ctx, 31, 0x2E9C48u);
    ctx->pc = 0x2E9C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9C40u;
    // 0x2e9c44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E37C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E37C0u, 0x2E9C40u, 0x2E9C48u)) {
        return;
    }
    ctx->pc = 0x2E9C48u;
label_2e9c48:
    // 0x2e9c48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e9c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9c4c:
    // 0x2e9c4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e9c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9c50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e9c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9c54: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9C54u;
        // 0x2e9c58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9C5Cu;
    // 0x2e9c5c: 0x0  nop
    ctx->pc = 0x2e9c5cu;
    // NOP
    ctx->pc = 0x2e9c60u;
}
