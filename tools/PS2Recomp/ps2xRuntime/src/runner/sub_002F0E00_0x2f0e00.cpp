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

// Function: sub_002F0E00
// Address: 0x2f0e00 - 0x2f0eb0
void sub_002F0E00_0x2f0e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0E00_0x2f0e00");
#endif

    switch (ctx->pc) {
        case 0x2f0e34u: goto label_2f0e34;
        case 0x2f0e54u: goto label_2f0e54;
        case 0x2f0e70u: goto label_2f0e70;
        case 0x2f0e90u: goto label_2f0e90;
        case 0x2f0e98u: goto label_2f0e98;
        default: break;
    }

    ctx->pc = 0x2f0e00u;

    // 0x2f0e00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f0e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f0e04: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2f0e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2f0e08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f0e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f0e0c: 0x8c626338  lw          $v0, 0x6338($v1)
    ctx->pc = 0x2f0e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x686338u));
    // 0x2f0e10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f0e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0e14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f0e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f0e18: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F0E18u;
    {
        const bool branch_taken_0x2f0e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E18u;
        // 0x2f0e1c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0e18) {
            ctx->pc = 0x2F0E2Cu;
            goto label_2f0e2c;
        }
    }
    ctx->pc = 0x2F0E20u;
    // 0x2f0e20: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f0e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f0e24: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2F0E24u;
    {
        const bool branch_taken_0x2f0e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E24u;
        // 0x2f0e28: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0e24) {
            ctx->pc = 0x2F0E9Cu;
            goto label_2f0e9c;
        }
    }
    ctx->pc = 0x2F0E2Cu;
label_2f0e2c:
    // 0x2f0e2c: 0xc0bdfde  jal         func_2F7F78
    ctx->pc = 0x2F0E2Cu;
    SET_GPR_U32(ctx, 31, 0x2F0E34u);
    ctx->pc = 0x2F0E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0E2Cu;
    // 0x2f0e30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7F78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7F78u, 0x2F0E2Cu, 0x2F0E34u)) {
        return;
    }
    ctx->pc = 0x2F0E34u;
label_2f0e34:
    // 0x2f0e34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f0e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0e38: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F0E38u;
    {
        const bool branch_taken_0x2f0e38 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x2F0E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E38u;
        // 0x2f0e3c: 0x3c110071  lui         $s1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0e38) {
            ctx->pc = 0x2F0E4Cu;
            goto label_2f0e4c;
        }
    }
    ctx->pc = 0x2F0E40u;
    // 0x2f0e40: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f0e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f0e44: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2F0E44u;
    {
        const bool branch_taken_0x2f0e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E44u;
        // 0x2f0e48: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0e44) {
            ctx->pc = 0x2F0E9Cu;
            goto label_2f0e9c;
        }
    }
    ctx->pc = 0x2F0E4Cu;
label_2f0e4c:
    // 0x2f0e4c: 0xc0c84d8  jal         func_321360
    ctx->pc = 0x2F0E4Cu;
    SET_GPR_U32(ctx, 31, 0x2F0E54u);
    ctx->pc = 0x2F0E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0E4Cu;
    // 0x2f0e50: 0x8e24f62c  lw          $a0, -0x9D4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294964780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x2F0E4Cu, 0x2F0E54u)) {
        return;
    }
    ctx->pc = 0x2F0E54u;
label_2f0e54:
    // 0x2f0e54: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x2f0e54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
    // 0x2f0e58: 0x24c5f100  addiu       $a1, $a2, -0xF00
    ctx->pc = 0x2f0e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963456));
    // 0x2f0e5c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f0e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x70F104u));
    // 0x2f0e60: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F0E60u;
    {
        const bool branch_taken_0x2f0e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0e60) {
            ctx->pc = 0x2F0E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0E60u;
            // 0x2f0e64: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0E7Cu;
            goto label_2f0e7c;
        }
    }
    ctx->pc = 0x2F0E68u;
    // 0x2f0e68: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F0E68u;
    SET_GPR_U32(ctx, 31, 0x2F0E70u);
    ctx->pc = 0x2F0E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0E68u;
    // 0x2f0e6c: 0x8e24f62c  lw          $a0, -0x9D4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294964780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F0E68u, 0x2F0E70u)) {
        return;
    }
    ctx->pc = 0x2F0E70u;
label_2f0e70:
    // 0x2f0e70: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f0e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f0e74: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F0E74u;
    {
        const bool branch_taken_0x2f0e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E74u;
        // 0x2f0e78: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0e74) {
            ctx->pc = 0x2F0E9Cu;
            goto label_2f0e9c;
        }
    }
    ctx->pc = 0x2F0E7Cu;
label_2f0e7c:
    // 0x2f0e7c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f0e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f0e80: 0x8c44f624  lw          $a0, -0x9DC($v0)
    ctx->pc = 0x2f0e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964772)));
    // 0x2f0e84: 0xacd0f100  sw          $s0, -0xF00($a2)
    ctx->pc = 0x2f0e84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294963456), GPR_U32(ctx, 16));
    // 0x2f0e88: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F0E88u;
    SET_GPR_U32(ctx, 31, 0x2F0E90u);
    ctx->pc = 0x2F0E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0E88u;
    // 0x2f0e8c: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F0E88u, 0x2F0E90u)) {
        return;
    }
    ctx->pc = 0x2F0E90u;
label_2f0e90:
    // 0x2f0e90: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F0E90u;
    SET_GPR_U32(ctx, 31, 0x2F0E98u);
    ctx->pc = 0x2F0E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0E90u;
    // 0x2f0e94: 0x8e24f62c  lw          $a0, -0x9D4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294964780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F0E90u, 0x2F0E98u)) {
        return;
    }
    ctx->pc = 0x2F0E98u;
label_2f0e98:
    // 0x2f0e98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f0e98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0e9c:
    // 0x2f0e9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f0e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f0ea0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f0ea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0ea4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f0ea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0EA8u;
        // 0x2f0eac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0EB0u;
}
