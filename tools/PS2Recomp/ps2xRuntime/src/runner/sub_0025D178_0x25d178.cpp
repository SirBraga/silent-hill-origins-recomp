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

// Function: sub_0025D178
// Address: 0x25d178 - 0x25d200
void sub_0025D178_0x25d178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D178_0x25d178");
#endif

    switch (ctx->pc) {
        case 0x25d178u: goto label_25d178;
        case 0x25d17cu: goto label_25d17c;
        case 0x25d180u: goto label_25d180;
        case 0x25d184u: goto label_25d184;
        case 0x25d188u: goto label_25d188;
        case 0x25d18cu: goto label_25d18c;
        case 0x25d190u: goto label_25d190;
        case 0x25d194u: goto label_25d194;
        case 0x25d198u: goto label_25d198;
        case 0x25d19cu: goto label_25d19c;
        case 0x25d1a0u: goto label_25d1a0;
        case 0x25d1a4u: goto label_25d1a4;
        case 0x25d1a8u: goto label_25d1a8;
        case 0x25d1acu: goto label_25d1ac;
        case 0x25d1b0u: goto label_25d1b0;
        case 0x25d1b4u: goto label_25d1b4;
        case 0x25d1b8u: goto label_25d1b8;
        case 0x25d1bcu: goto label_25d1bc;
        case 0x25d1c0u: goto label_25d1c0;
        case 0x25d1c4u: goto label_25d1c4;
        case 0x25d1c8u: goto label_25d1c8;
        case 0x25d1ccu: goto label_25d1cc;
        case 0x25d1d0u: goto label_25d1d0;
        case 0x25d1d4u: goto label_25d1d4;
        case 0x25d1d8u: goto label_25d1d8;
        case 0x25d1dcu: goto label_25d1dc;
        case 0x25d1e0u: goto label_25d1e0;
        case 0x25d1e4u: goto label_25d1e4;
        case 0x25d1e8u: goto label_25d1e8;
        case 0x25d1ecu: goto label_25d1ec;
        case 0x25d1f0u: goto label_25d1f0;
        case 0x25d1f4u: goto label_25d1f4;
        case 0x25d1f8u: goto label_25d1f8;
        case 0x25d1fcu: goto label_25d1fc;
        default: break;
    }

    ctx->pc = 0x25d178u;

label_25d178:
    // 0x25d178: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25d178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_25d17c:
    // 0x25d17c: 0x8f8285f8  lw          $v0, -0x7A08($gp)
    ctx->pc = 0x25d17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936056)));
label_25d180:
    // 0x25d180: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x25d180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_25d184:
    // 0x25d184: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x25d184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_25d188:
    // 0x25d188: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25d188u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25d18c:
    // 0x25d18c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25d18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_25d190:
    // 0x25d190: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x25d190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_25d194:
    // 0x25d194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25d194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25d198:
    // 0x25d198: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x25d198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_25d19c:
    // 0x25d19c: 0x40f809  jalr        $v0
label_25d1a0:
    if (ctx->pc == 0x25D1A0u) {
        ctx->pc = 0x25D1A4u;
        goto label_25d1a4;
    }
    ctx->pc = 0x25D19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25D1A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D19Cu, 0x25D1A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D1A4u;
label_25d1a4:
    // 0x25d1a4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_25d1a8:
    if (ctx->pc == 0x25D1A8u) {
        ctx->pc = 0x25D1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D1A4u;
        // 0x25d1a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D1ACu;
        goto label_25d1ac;
    }
    ctx->pc = 0x25D1A4u;
    {
        const bool branch_taken_0x25d1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d1a4) {
            ctx->pc = 0x25D1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D1A4u;
            // 0x25d1a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D1E4u;
            goto label_25d1e4;
        }
    }
    ctx->pc = 0x25D1ACu;
label_25d1ac:
    // 0x25d1ac: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x25d1acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_25d1b0:
    // 0x25d1b0: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_25d1b4:
    if (ctx->pc == 0x25D1B4u) {
        ctx->pc = 0x25D1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D1B0u;
        // 0x25d1b4: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D1B8u;
        goto label_25d1b8;
    }
    ctx->pc = 0x25D1B0u;
    {
        const bool branch_taken_0x25d1b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D1B0u;
        // 0x25d1b4: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d1b0) {
            ctx->pc = 0x25D1E0u;
            goto label_25d1e0;
        }
    }
    ctx->pc = 0x25D1B8u;
label_25d1b8:
    // 0x25d1b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25d1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25d1bc:
    // 0x25d1bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25d1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25d1c0:
    // 0x25d1c0: 0xc0976ca  jal         func_25DB28
label_25d1c4:
    if (ctx->pc == 0x25D1C4u) {
        ctx->pc = 0x25D1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D1C0u;
        // 0x25d1c4: 0x8c501068  lw          $s0, 0x1068($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D1C8u;
        goto label_25d1c8;
    }
    ctx->pc = 0x25D1C0u;
    SET_GPR_U32(ctx, 31, 0x25D1C8u);
    ctx->pc = 0x25D1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D1C0u;
    // 0x25d1c4: 0x8c501068  lw          $s0, 0x1068($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4200)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DB28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25DB28u, 0x25D1C0u, 0x25D1C8u)) {
        return;
    }
    ctx->pc = 0x25D1C8u;
label_25d1c8:
    // 0x25d1c8: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x25d1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_25d1cc:
    // 0x25d1cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25d1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d1d0:
    // 0x25d1d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25d1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d1d4:
    // 0x25d1d4: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x25d1d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
label_25d1d8:
    // 0x25d1d8: 0x200f809  jalr        $s0
label_25d1dc:
    if (ctx->pc == 0x25D1DCu) {
        ctx->pc = 0x25D1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D1D8u;
        // 0x25d1dc: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D1E0u;
        goto label_25d1e0;
    }
    ctx->pc = 0x25D1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x25D1E0u);
        ctx->pc = 0x25D1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D1D8u;
        // 0x25d1dc: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D1D8u, 0x25D1E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D1E0u;
label_25d1e0:
    // 0x25d1e0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x25d1e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25d1e4:
    // 0x25d1e4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x25d1e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25d1e8:
    // 0x25d1e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25d1e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25d1ec:
    // 0x25d1ec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x25d1ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25d1f0:
    // 0x25d1f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25d1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25d1f4:
    // 0x25d1f4: 0x3e00008  jr          $ra
label_25d1f8:
    if (ctx->pc == 0x25D1F8u) {
        ctx->pc = 0x25D1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D1F4u;
        // 0x25d1f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D1FCu;
        goto label_25d1fc;
    }
    ctx->pc = 0x25D1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D1F4u;
        // 0x25d1f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D1FCu;
label_25d1fc:
    // 0x25d1fc: 0x0  nop
    ctx->pc = 0x25d1fcu;
    // NOP
    ctx->pc = 0x25d200u;
}
