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

// Function: sub_0025F310
// Address: 0x25f310 - 0x25f38c
void sub_0025F310_0x25f310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F310_0x25f310");
#endif

    switch (ctx->pc) {
        case 0x25f328u: goto label_25f328;
        default: break;
    }

    ctx->pc = 0x25f310u;

    // 0x25f310: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x25f310u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f314: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25f314u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f318: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x25f318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x25f31c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x25f31cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25f320: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x25f320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25f324: 0x0  nop
    ctx->pc = 0x25f324u;
    // NOP
label_25f328:
    // 0x25f328: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x25f328u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25f32c: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x25f32cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x25f330: 0x30440007  andi        $a0, $v0, 0x7
    ctx->pc = 0x25f330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x25f334: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x25f334u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x25f338: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x25F338u;
    {
        const bool branch_taken_0x25f338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F338u;
        // 0x25f33c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f338) {
            ctx->pc = 0x25F390u;
            return;
        }
    }
    ctx->pc = 0x25F340u;
    // 0x25f340: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25f340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25f344: 0x2442b800  addiu       $v0, $v0, -0x4800
    ctx->pc = 0x25f344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948864));
    // 0x25f348: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25f348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25f34c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25f34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25f350: 0x800008  jr          $a0
    ctx->pc = 0x25F350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25F358u: goto label_25f358;
            case 0x25F368u: goto label_25f368;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F350u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25F358u;
label_25f358:
    // 0x25f358: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x25f358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x25f35c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x25f35cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25f360: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25F360u;
    {
        const bool branch_taken_0x25f360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F360u;
        // 0x25f364: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f360) {
            ctx->pc = 0x25F390u;
            return;
        }
    }
    ctx->pc = 0x25F368u;
label_25f368:
    // 0x25f368: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x25f368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x25f36c: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x25f36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x25f370: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x25f370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25f374: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25f374u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f378: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x25f378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25f37c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25f37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25f380: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x25f380u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x25f384: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25F384u;
    {
        const bool branch_taken_0x25f384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F384u;
        // 0x25f388: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f384) {
            ctx->pc = 0x25F390u;
            return;
        }
    }
    ctx->pc = 0x25F38Cu;
}
