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

// Function: sub_0015E488
// Address: 0x15e488 - 0x15e520
void sub_0015E488_0x15e488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E488_0x15e488");
#endif

    switch (ctx->pc) {
        case 0x15e4a4u: goto label_15e4a4;
        case 0x15e4d0u: goto label_15e4d0;
        case 0x15e4dcu: goto label_15e4dc;
        default: break;
    }

    ctx->pc = 0x15e488u;

    // 0x15e488: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15e488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15e48c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x15e48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x15e490: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15e490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15e494: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15e494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15e498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15e49c: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x15E49Cu;
    SET_GPR_U32(ctx, 31, 0x15E4A4u);
    ctx->pc = 0x15E4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E49Cu;
    // 0x15e4a0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x15E49Cu, 0x15E4A4u)) {
        return;
    }
    ctx->pc = 0x15E4A4u;
label_15e4a4:
    // 0x15e4a4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x15e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x15e4a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x15e4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15e4ac: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x15e4acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F8880u));
    // 0x15e4b0: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x15E4B0u;
    {
        const bool branch_taken_0x15e4b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x15E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4B0u;
        // 0x15e4b4: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e4b0) {
            ctx->pc = 0x15E4E4u;
            goto label_15e4e4;
        }
    }
    ctx->pc = 0x15E4B8u;
    // 0x15e4b8: 0x8e2207f8  lw          $v0, 0x7F8($s1)
    ctx->pc = 0x15e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2040)));
    // 0x15e4bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15E4BCu;
    {
        const bool branch_taken_0x15e4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4BCu;
        // 0x15e4c0: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e4bc) {
            ctx->pc = 0x15E4D0u;
            goto label_15e4d0;
        }
    }
    ctx->pc = 0x15E4C4u;
    // 0x15e4c4: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x15e4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15e4c8: 0xc057718  jal         func_15DC60
    ctx->pc = 0x15E4C8u;
    SET_GPR_U32(ctx, 31, 0x15E4D0u);
    ctx->pc = 0x15E4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E4C8u;
    // 0x15e4cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15DC60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15DC60u, 0x15E4C8u, 0x15E4D0u)) {
        return;
    }
    ctx->pc = 0x15E4D0u;
label_15e4d0:
    // 0x15e4d0: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x15e4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15e4d4: 0xc057660  jal         func_15D980
    ctx->pc = 0x15E4D4u;
    SET_GPR_U32(ctx, 31, 0x15E4DCu);
    ctx->pc = 0x15E4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E4D4u;
    // 0x15e4d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D980u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15D980u, 0x15E4D4u, 0x15E4DCu)) {
        return;
    }
    ctx->pc = 0x15E4DCu;
label_15e4dc:
    // 0x15e4dc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15E4DCu;
    {
        const bool branch_taken_0x15e4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4DCu;
        // 0x15e4e0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e4dc) {
            ctx->pc = 0x15E50Cu;
            goto label_15e50c;
        }
    }
    ctx->pc = 0x15E4E4u;
label_15e4e4:
    // 0x15e4e4: 0x8c43f0c0  lw          $v1, -0xF40($v0)
    ctx->pc = 0x15e4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963392)));
    // 0x15e4e8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15E4E8u;
    {
        const bool branch_taken_0x15e4e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x15E4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4E8u;
        // 0x15e4ec: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e4e8) {
            ctx->pc = 0x15E4FCu;
            goto label_15e4fc;
        }
    }
    ctx->pc = 0x15E4F0u;
    // 0x15e4f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e4f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15E4F4u;
    {
        const bool branch_taken_0x15e4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4F4u;
        // 0x15e4f8: 0xae2207f8  sw          $v0, 0x7F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e4f4) {
            ctx->pc = 0x15E508u;
            goto label_15e508;
        }
    }
    ctx->pc = 0x15E4FCu;
label_15e4fc:
    // 0x15e4fc: 0x8c43f0c8  lw          $v1, -0xF38($v0)
    ctx->pc = 0x15e4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963400)));
    // 0x15e500: 0x50830001  beql        $a0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x15E500u;
    {
        const bool branch_taken_0x15e500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15e500) {
            ctx->pc = 0x15E504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E500u;
            // 0x15e504: 0xae2007f8  sw          $zero, 0x7F8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 2040), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E508u;
            goto label_15e508;
        }
    }
    ctx->pc = 0x15E508u;
label_15e508:
    // 0x15e508: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x15e508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15e50c:
    // 0x15e50c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15e50cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15e510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e514: 0x3e00008  jr          $ra
    ctx->pc = 0x15E514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E514u;
        // 0x15e518: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E51Cu;
    // 0x15e51c: 0x0  nop
    ctx->pc = 0x15e51cu;
    // NOP
    ctx->pc = 0x15e520u;
}
