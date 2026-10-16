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

// Function: sub_002F0F60
// Address: 0x2f0f60 - 0x2f1020
void sub_002F0F60_0x2f0f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0F60_0x2f0f60");
#endif

    switch (ctx->pc) {
        case 0x2f0f9cu: goto label_2f0f9c;
        case 0x2f0fbcu: goto label_2f0fbc;
        case 0x2f0fd8u: goto label_2f0fd8;
        case 0x2f0ffcu: goto label_2f0ffc;
        case 0x2f1004u: goto label_2f1004;
        default: break;
    }

    ctx->pc = 0x2f0f60u;

    // 0x2f0f60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f0f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f0f64: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2f0f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2f0f68: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f0f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f0f6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f0f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f0f70: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f0f70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0f74: 0x8c436338  lw          $v1, 0x6338($v0)
    ctx->pc = 0x2f0f74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x686338u));
    // 0x2f0f78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f0f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0f7c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f0f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f0f80: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F0F80u;
    {
        const bool branch_taken_0x2f0f80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F80u;
        // 0x2f0f84: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0f80) {
            ctx->pc = 0x2F0F94u;
            goto label_2f0f94;
        }
    }
    ctx->pc = 0x2F0F88u;
    // 0x2f0f88: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f0f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f0f8c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2F0F8Cu;
    {
        const bool branch_taken_0x2f0f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F8Cu;
        // 0x2f0f90: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0f8c) {
            ctx->pc = 0x2F1008u;
            goto label_2f1008;
        }
    }
    ctx->pc = 0x2F0F94u;
label_2f0f94:
    // 0x2f0f94: 0xc0bdfde  jal         func_2F7F78
    ctx->pc = 0x2F0F94u;
    SET_GPR_U32(ctx, 31, 0x2F0F9Cu);
    ctx->pc = 0x2F0F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0F94u;
    // 0x2f0f98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7F78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7F78u, 0x2F0F94u, 0x2F0F9Cu)) {
        return;
    }
    ctx->pc = 0x2F0F9Cu;
label_2f0f9c:
    // 0x2f0f9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f0f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0fa0: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F0FA0u;
    {
        const bool branch_taken_0x2f0fa0 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x2F0FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0FA0u;
        // 0x2f0fa4: 0x3c110071  lui         $s1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0fa0) {
            ctx->pc = 0x2F0FB4u;
            goto label_2f0fb4;
        }
    }
    ctx->pc = 0x2F0FA8u;
    // 0x2f0fa8: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f0fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f0fac: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2F0FACu;
    {
        const bool branch_taken_0x2f0fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0FACu;
        // 0x2f0fb0: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0fac) {
            ctx->pc = 0x2F1008u;
            goto label_2f1008;
        }
    }
    ctx->pc = 0x2F0FB4u;
label_2f0fb4:
    // 0x2f0fb4: 0xc0c84d8  jal         func_321360
    ctx->pc = 0x2F0FB4u;
    SET_GPR_U32(ctx, 31, 0x2F0FBCu);
    ctx->pc = 0x2F0FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0FB4u;
    // 0x2f0fb8: 0x8e24f62c  lw          $a0, -0x9D4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294964780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x2F0FB4u, 0x2F0FBCu)) {
        return;
    }
    ctx->pc = 0x2F0FBCu;
label_2f0fbc:
    // 0x2f0fbc: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x2f0fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
    // 0x2f0fc0: 0x24c5f100  addiu       $a1, $a2, -0xF00
    ctx->pc = 0x2f0fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963456));
    // 0x2f0fc4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f0fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x70F104u));
    // 0x2f0fc8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F0FC8u;
    {
        const bool branch_taken_0x2f0fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0fc8) {
            ctx->pc = 0x2F0FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0FC8u;
            // 0x2f0fcc: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0FE4u;
            goto label_2f0fe4;
        }
    }
    ctx->pc = 0x2F0FD0u;
    // 0x2f0fd0: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F0FD0u;
    SET_GPR_U32(ctx, 31, 0x2F0FD8u);
    ctx->pc = 0x2F0FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0FD0u;
    // 0x2f0fd4: 0x8e24f62c  lw          $a0, -0x9D4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294964780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F0FD0u, 0x2F0FD8u)) {
        return;
    }
    ctx->pc = 0x2F0FD8u;
label_2f0fd8:
    // 0x2f0fd8: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f0fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f0fdc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F0FDCu;
    {
        const bool branch_taken_0x2f0fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0FDCu;
        // 0x2f0fe0: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0fdc) {
            ctx->pc = 0x2F1008u;
            goto label_2f1008;
        }
    }
    ctx->pc = 0x2F0FE4u;
label_2f0fe4:
    // 0x2f0fe4: 0xacd0f100  sw          $s0, -0xF00($a2)
    ctx->pc = 0x2f0fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294963456), GPR_U32(ctx, 16));
    // 0x2f0fe8: 0x8c44f624  lw          $a0, -0x9DC($v0)
    ctx->pc = 0x2f0fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964772)));
    // 0x2f0fec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f0fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f0ff0: 0xacb2000c  sw          $s2, 0xC($a1)
    ctx->pc = 0x2f0ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 18));
    // 0x2f0ff4: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F0FF4u;
    SET_GPR_U32(ctx, 31, 0x2F0FFCu);
    ctx->pc = 0x2F0FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0FF4u;
    // 0x2f0ff8: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F0FF4u, 0x2F0FFCu)) {
        return;
    }
    ctx->pc = 0x2F0FFCu;
label_2f0ffc:
    // 0x2f0ffc: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F0FFCu;
    SET_GPR_U32(ctx, 31, 0x2F1004u);
    ctx->pc = 0x2F1000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0FFCu;
    // 0x2f1000: 0x8e24f62c  lw          $a0, -0x9D4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294964780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F0FFCu, 0x2F1004u)) {
        return;
    }
    ctx->pc = 0x2F1004u;
label_2f1004:
    // 0x2f1004: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f1004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1008:
    // 0x2f1008: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f1008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f100c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f100cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1010: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f1010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1014: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f1014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1018: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1018u;
        // 0x2f101c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1020u;
}
