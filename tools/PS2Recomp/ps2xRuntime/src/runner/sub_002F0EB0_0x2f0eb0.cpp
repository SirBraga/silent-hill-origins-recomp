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

// Function: sub_002F0EB0
// Address: 0x2f0eb0 - 0x2f0f60
void sub_002F0EB0_0x2f0eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0EB0_0x2f0eb0");
#endif

    switch (ctx->pc) {
        case 0x2f0ee4u: goto label_2f0ee4;
        case 0x2f0f04u: goto label_2f0f04;
        case 0x2f0f20u: goto label_2f0f20;
        case 0x2f0f40u: goto label_2f0f40;
        case 0x2f0f48u: goto label_2f0f48;
        default: break;
    }

    ctx->pc = 0x2f0eb0u;

    // 0x2f0eb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f0eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f0eb4: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2f0eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2f0eb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f0eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f0ebc: 0x8c626338  lw          $v0, 0x6338($v1)
    ctx->pc = 0x2f0ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x686338u));
    // 0x2f0ec0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f0ec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0ec4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f0ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f0ec8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F0EC8u;
    {
        const bool branch_taken_0x2f0ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0EC8u;
        // 0x2f0ecc: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0ec8) {
            ctx->pc = 0x2F0EDCu;
            goto label_2f0edc;
        }
    }
    ctx->pc = 0x2F0ED0u;
    // 0x2f0ed0: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f0ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f0ed4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2F0ED4u;
    {
        const bool branch_taken_0x2f0ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0ED4u;
        // 0x2f0ed8: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0ed4) {
            ctx->pc = 0x2F0F4Cu;
            goto label_2f0f4c;
        }
    }
    ctx->pc = 0x2F0EDCu;
label_2f0edc:
    // 0x2f0edc: 0xc0bdfde  jal         func_2F7F78
    ctx->pc = 0x2F0EDCu;
    SET_GPR_U32(ctx, 31, 0x2F0EE4u);
    ctx->pc = 0x2F0EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0EDCu;
    // 0x2f0ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7F78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7F78u, 0x2F0EDCu, 0x2F0EE4u)) {
        return;
    }
    ctx->pc = 0x2F0EE4u;
label_2f0ee4:
    // 0x2f0ee4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f0ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0ee8: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F0EE8u;
    {
        const bool branch_taken_0x2f0ee8 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x2F0EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0EE8u;
        // 0x2f0eec: 0x3c110071  lui         $s1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0ee8) {
            ctx->pc = 0x2F0EFCu;
            goto label_2f0efc;
        }
    }
    ctx->pc = 0x2F0EF0u;
    // 0x2f0ef0: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f0ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f0ef4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2F0EF4u;
    {
        const bool branch_taken_0x2f0ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0EF4u;
        // 0x2f0ef8: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0ef4) {
            ctx->pc = 0x2F0F4Cu;
            goto label_2f0f4c;
        }
    }
    ctx->pc = 0x2F0EFCu;
label_2f0efc:
    // 0x2f0efc: 0xc0c84d8  jal         func_321360
    ctx->pc = 0x2F0EFCu;
    SET_GPR_U32(ctx, 31, 0x2F0F04u);
    ctx->pc = 0x2F0F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0EFCu;
    // 0x2f0f00: 0x8e24f62c  lw          $a0, -0x9D4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294964780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x2F0EFCu, 0x2F0F04u)) {
        return;
    }
    ctx->pc = 0x2F0F04u;
label_2f0f04:
    // 0x2f0f04: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x2f0f04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
    // 0x2f0f08: 0x24c5f100  addiu       $a1, $a2, -0xF00
    ctx->pc = 0x2f0f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963456));
    // 0x2f0f0c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f0f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x70F104u));
    // 0x2f0f10: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F0F10u;
    {
        const bool branch_taken_0x2f0f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0f10) {
            ctx->pc = 0x2F0F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0F10u;
            // 0x2f0f14: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0F2Cu;
            goto label_2f0f2c;
        }
    }
    ctx->pc = 0x2F0F18u;
    // 0x2f0f18: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F0F18u;
    SET_GPR_U32(ctx, 31, 0x2F0F20u);
    ctx->pc = 0x2F0F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0F18u;
    // 0x2f0f1c: 0x8e24f62c  lw          $a0, -0x9D4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294964780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F0F18u, 0x2F0F20u)) {
        return;
    }
    ctx->pc = 0x2F0F20u;
label_2f0f20:
    // 0x2f0f20: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f0f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f0f24: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F0F24u;
    {
        const bool branch_taken_0x2f0f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F24u;
        // 0x2f0f28: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0f24) {
            ctx->pc = 0x2F0F4Cu;
            goto label_2f0f4c;
        }
    }
    ctx->pc = 0x2F0F2Cu;
label_2f0f2c:
    // 0x2f0f2c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2f0f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f0f30: 0x8c44f624  lw          $a0, -0x9DC($v0)
    ctx->pc = 0x2f0f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964772)));
    // 0x2f0f34: 0xacd0f100  sw          $s0, -0xF00($a2)
    ctx->pc = 0x2f0f34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294963456), GPR_U32(ctx, 16));
    // 0x2f0f38: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F0F38u;
    SET_GPR_U32(ctx, 31, 0x2F0F40u);
    ctx->pc = 0x2F0F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0F38u;
    // 0x2f0f3c: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F0F38u, 0x2F0F40u)) {
        return;
    }
    ctx->pc = 0x2F0F40u;
label_2f0f40:
    // 0x2f0f40: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F0F40u;
    SET_GPR_U32(ctx, 31, 0x2F0F48u);
    ctx->pc = 0x2F0F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0F40u;
    // 0x2f0f44: 0x8e24f62c  lw          $a0, -0x9D4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294964780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F0F40u, 0x2F0F48u)) {
        return;
    }
    ctx->pc = 0x2F0F48u;
label_2f0f48:
    // 0x2f0f48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f0f48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0f4c:
    // 0x2f0f4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f0f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f0f50: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f0f50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0f54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f0f54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0f58: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F58u;
        // 0x2f0f5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0F60u;
}
