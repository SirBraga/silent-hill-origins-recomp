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

// Function: sub_002E4130
// Address: 0x2e4130 - 0x2e41f8
void sub_002E4130_0x2e4130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4130_0x2e4130");
#endif

    switch (ctx->pc) {
        case 0x2e418cu: goto label_2e418c;
        case 0x2e41c0u: goto label_2e41c0;
        default: break;
    }

    ctx->pc = 0x2e4130u;

    // 0x2e4130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e4130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e4134: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e4134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e4138: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e4138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e413c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e413cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4140: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2e4140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2e4144: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4144u;
    {
        const bool branch_taken_0x2e4144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4144u;
        // 0x2e4148: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4144) {
            ctx->pc = 0x2E4154u;
            goto label_2e4154;
        }
    }
    ctx->pc = 0x2E414Cu;
    // 0x2e414c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2E414Cu;
    {
        const bool branch_taken_0x2e414c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E414Cu;
        // 0x2e4150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e414c) {
            ctx->pc = 0x2E41E4u;
            goto label_2e41e4;
        }
    }
    ctx->pc = 0x2E4154u;
label_2e4154:
    // 0x2e4154: 0x96020046  lhu         $v0, 0x46($s0)
    ctx->pc = 0x2e4154u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x2e4158: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2e4158u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e415c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E415Cu;
    {
        const bool branch_taken_0x2e415c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E415Cu;
        // 0x2e4160: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e415c) {
            ctx->pc = 0x2E41D4u;
            goto label_2e41d4;
        }
    }
    ctx->pc = 0x2E4164u;
    // 0x2e4164: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2E4164u;
    {
        const bool branch_taken_0x2e4164 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4164u;
        // 0x2e4168: 0x3c090003  lui         $t1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4164) {
            ctx->pc = 0x2E41A0u;
            goto label_2e41a0;
        }
    }
    ctx->pc = 0x2E416Cu;
    // 0x2e416c: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x2e416cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2e4170: 0x96050046  lhu         $a1, 0x46($s0)
    ctx->pc = 0x2e4170u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x2e4174: 0x63702  srl         $a2, $a2, 28
    ctx->pc = 0x2e4174u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 28));
    // 0x2e4178: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e4178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e417c: 0xc23004  sllv        $a2, $v0, $a2
    ctx->pc = 0x2e417cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x2e4180: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e4180u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4184: 0xc0b8270  jal         func_2E09C0
    ctx->pc = 0x2E4184u;
    SET_GPR_U32(ctx, 31, 0x2E418Cu);
    ctx->pc = 0x2E4188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4184u;
    // 0x2e4188: 0x35290809  ori         $t1, $t1, 0x809 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2057);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E09C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E09C0u, 0x2E4184u, 0x2E418Cu)) {
        return;
    }
    ctx->pc = 0x2E418Cu;
label_2e418c:
    // 0x2e418c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2e418cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e4190: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2e4190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x2e4194: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2e4194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2e4198: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2E4198u;
    {
        const bool branch_taken_0x2e4198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4198u;
        // 0x2e419c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4198) {
            ctx->pc = 0x2E41D8u;
            goto label_2e41d8;
        }
    }
    ctx->pc = 0x2E41A0u;
label_2e41a0:
    // 0x2e41a0: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x2e41a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2e41a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e41a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e41a8: 0x96050046  lhu         $a1, 0x46($s0)
    ctx->pc = 0x2e41a8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x2e41ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e41acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e41b0: 0x63702  srl         $a2, $a2, 28
    ctx->pc = 0x2e41b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 28));
    // 0x2e41b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e41b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e41b8: 0xc0b8458  jal         func_2E1160
    ctx->pc = 0x2E41B8u;
    SET_GPR_U32(ctx, 31, 0x2E41C0u);
    ctx->pc = 0x2E41BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E41B8u;
    // 0x2e41bc: 0xc23004  sllv        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1160u, 0x2E41B8u, 0x2E41C0u)) {
        return;
    }
    ctx->pc = 0x2E41C0u;
label_2e41c0:
    // 0x2e41c0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2e41c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e41c4: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2e41c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x2e41c8: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x2e41c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x2e41cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E41CCu;
    {
        const bool branch_taken_0x2e41cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E41D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E41CCu;
        // 0x2e41d0: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e41cc) {
            ctx->pc = 0x2E41D8u;
            goto label_2e41d8;
        }
    }
    ctx->pc = 0x2E41D4u;
label_2e41d4:
    // 0x2e41d4: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2e41d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_2e41d8:
    // 0x2e41d8: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x2e41d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2e41dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e41dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e41e0: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x2e41e0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16));
label_2e41e4:
    // 0x2e41e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e41e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e41e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e41e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e41ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2E41ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E41F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E41ECu;
        // 0x2e41f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E41ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E41F4u;
    // 0x2e41f4: 0x0  nop
    ctx->pc = 0x2e41f4u;
    // NOP
    ctx->pc = 0x2e41f8u;
}
