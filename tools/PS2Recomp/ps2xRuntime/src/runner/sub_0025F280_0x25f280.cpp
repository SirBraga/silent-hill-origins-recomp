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

// Function: sub_0025F280
// Address: 0x25f280 - 0x25f2fc
void sub_0025F280_0x25f280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F280_0x25f280");
#endif

    switch (ctx->pc) {
        case 0x25f298u: goto label_25f298;
        default: break;
    }

    ctx->pc = 0x25f280u;

    // 0x25f280: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x25f280u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f284: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25f284u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f288: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x25f288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x25f28c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x25f28cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25f290: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x25f290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25f294: 0x0  nop
    ctx->pc = 0x25f294u;
    // NOP
label_25f298:
    // 0x25f298: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x25f298u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25f29c: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x25f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x25f2a0: 0x30440007  andi        $a0, $v0, 0x7
    ctx->pc = 0x25f2a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x25f2a4: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x25f2a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x25f2a8: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x25F2A8u;
    {
        const bool branch_taken_0x25f2a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F2A8u;
        // 0x25f2ac: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f2a8) {
            ctx->pc = 0x25F300u;
            return;
        }
    }
    ctx->pc = 0x25F2B0u;
    // 0x25f2b0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25f2b4: 0x2442b7e0  addiu       $v0, $v0, -0x4820
    ctx->pc = 0x25f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948832));
    // 0x25f2b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25f2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25f2bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25f2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25f2c0: 0x800008  jr          $a0
    ctx->pc = 0x25F2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25F2C8u: goto label_25f2c8;
            case 0x25F2D8u: goto label_25f2d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F2C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25F2C8u;
label_25f2c8:
    // 0x25f2c8: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x25f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x25f2cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x25f2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25f2d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25F2D0u;
    {
        const bool branch_taken_0x25f2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F2D0u;
        // 0x25f2d4: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f2d0) {
            ctx->pc = 0x25F300u;
            return;
        }
    }
    ctx->pc = 0x25F2D8u;
label_25f2d8:
    // 0x25f2d8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x25f2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x25f2dc: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x25f2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x25f2e0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x25f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25f2e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25f2e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f2e8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x25f2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25f2ec: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x25f2ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x25f2f0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x25f2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x25f2f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25F2F4u;
    {
        const bool branch_taken_0x25f2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F2F4u;
        // 0x25f2f8: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f2f4) {
            ctx->pc = 0x25F300u;
            return;
        }
    }
    ctx->pc = 0x25F2FCu;
}
