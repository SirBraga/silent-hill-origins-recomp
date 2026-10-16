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

// Function: sub_001911B0
// Address: 0x1911b0 - 0x191258
void sub_001911B0_0x1911b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001911B0_0x1911b0");
#endif

    switch (ctx->pc) {
        case 0x1911ccu: goto label_1911cc;
        default: break;
    }

    ctx->pc = 0x1911b0u;

    // 0x1911b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1911b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1911b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1911b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1911b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1911b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1911bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1911bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1911c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1911c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1911c4: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x1911C4u;
    SET_GPR_U32(ctx, 31, 0x1911CCu);
    ctx->pc = 0x1911C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1911C4u;
    // 0x1911c8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x1911C4u, 0x1911CCu)) {
        return;
    }
    ctx->pc = 0x1911CCu;
label_1911cc:
    // 0x1911cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1911ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1911d0: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1911d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1911d4: 0x50a00012  beql        $a1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1911D4u;
    {
        const bool branch_taken_0x1911d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1911d4) {
            ctx->pc = 0x1911D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1911D4u;
            // 0x1911d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191220u;
            goto label_191220;
        }
    }
    ctx->pc = 0x1911DCu;
    // 0x1911dc: 0x5620000e  bnel        $s1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1911DCu;
    {
        const bool branch_taken_0x1911dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1911dc) {
            ctx->pc = 0x1911E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1911DCu;
            // 0x1911e0: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191218u;
            goto label_191218;
        }
    }
    ctx->pc = 0x1911E4u;
    // 0x1911e4: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1911E4u;
    {
        const bool branch_taken_0x1911e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1911e4) {
            ctx->pc = 0x1911E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1911E4u;
            // 0x1911e8: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191218u;
            goto label_191218;
        }
    }
    ctx->pc = 0x1911ECu;
    // 0x1911ec: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x1911ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1911f0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1911f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1911f4: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1911F4u;
    {
        const bool branch_taken_0x1911f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1911f4) {
            ctx->pc = 0x1911F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1911F4u;
            // 0x1911f8: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191218u;
            goto label_191218;
        }
    }
    ctx->pc = 0x1911FCu;
    // 0x1911fc: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x1911fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x191200: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x191200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x191204: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x191204u;
    {
        const bool branch_taken_0x191204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x191204) {
            ctx->pc = 0x191208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191204u;
            // 0x191208: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191218u;
            goto label_191218;
        }
    }
    ctx->pc = 0x19120Cu;
    // 0x19120c: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x19120cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x191210: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x191210u;
    {
        const bool branch_taken_0x191210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191210u;
        // 0x191214: 0xaca21b88  sw          $v0, 0x1B88($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 7048), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191210) {
            ctx->pc = 0x19121Cu;
            goto label_19121c;
        }
    }
    ctx->pc = 0x191218u;
label_191218:
    // 0x191218: 0xac401b88  sw          $zero, 0x1B88($v0)
    ctx->pc = 0x191218u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7048), GPR_U32(ctx, 0));
label_19121c:
    // 0x19121c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19121cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191220:
    // 0x191220: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x191220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191224: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x191224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191228: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19122c: 0x3e00008  jr          $ra
    ctx->pc = 0x19122Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19122Cu;
        // 0x191230: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19122Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191234u;
    // 0x191234: 0x0  nop
    ctx->pc = 0x191234u;
    // NOP
    // 0x191238: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x191238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19123c: 0x0  nop
    ctx->pc = 0x19123cu;
    // NOP
    // 0x191240: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x191240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x191244: 0x0  nop
    ctx->pc = 0x191244u;
    // NOP
    // 0x191248: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x191248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x19124c: 0x0  nop
    ctx->pc = 0x19124cu;
    // NOP
    // 0x191250: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x191250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x191254: 0x0  nop
    ctx->pc = 0x191254u;
    // NOP
    ctx->pc = 0x191258u;
}
