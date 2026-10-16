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

// Function: sub_002DB188
// Address: 0x2db188 - 0x2db230
void sub_002DB188_0x2db188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB188_0x2db188");
#endif

    switch (ctx->pc) {
        case 0x2db1b0u: goto label_2db1b0;
        case 0x2db1ecu: goto label_2db1ec;
        default: break;
    }

    ctx->pc = 0x2db188u;

    // 0x2db188: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2db188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2db18c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2db18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2db190: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2db190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db194: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DB194u;
    {
        const bool branch_taken_0x2db194 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB194u;
        // 0x2db198: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db194) {
            ctx->pc = 0x2DB1C4u;
            goto label_2db1c4;
        }
    }
    ctx->pc = 0x2DB19Cu;
    // 0x2db19c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x2db19cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x2db1a0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2db1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2db1a4: 0x24847c70  addiu       $a0, $a0, 0x7C70
    ctx->pc = 0x2db1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31856));
    // 0x2db1a8: 0xc0b8180  jal         func_2E0600
    ctx->pc = 0x2DB1A8u;
    SET_GPR_U32(ctx, 31, 0x2DB1B0u);
    ctx->pc = 0x2DB1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB1A8u;
    // 0x2db1ac: 0x34a5080a  ori         $a1, $a1, 0x80A (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2058);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0600u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0600u, 0x2DB1A8u, 0x2DB1B0u)) {
        return;
    }
    ctx->pc = 0x2DB1B0u;
label_2db1b0:
    // 0x2db1b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2db1b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db1b4: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2DB1B4u;
    {
        const bool branch_taken_0x2db1b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB1B4u;
        // 0x2db1b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db1b4) {
            ctx->pc = 0x2DB220u;
            goto label_2db220;
        }
    }
    ctx->pc = 0x2DB1BCu;
    // 0x2db1bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DB1BCu;
    {
        const bool branch_taken_0x2db1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB1BCu;
        // 0x2db1c0: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db1bc) {
            ctx->pc = 0x2DB1CCu;
            goto label_2db1cc;
        }
    }
    ctx->pc = 0x2DB1C4u;
label_2db1c4:
    // 0x2db1c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2db1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2db1c8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2db1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_2db1cc:
    // 0x2db1cc: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2DB1CCu;
    {
        const bool branch_taken_0x2db1cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB1CCu;
        // 0x2db1d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db1cc) {
            ctx->pc = 0x2DB21Cu;
            goto label_2db21c;
        }
    }
    ctx->pc = 0x2DB1D4u;
    // 0x2db1d4: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x2db1d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x2db1d8: 0xa6000016  sh          $zero, 0x16($s0)
    ctx->pc = 0x2db1d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x2db1dc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2db1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2db1e0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2db1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2db1e4: 0xc0b7db2  jal         func_2DF6C8
    ctx->pc = 0x2DB1E4u;
    SET_GPR_U32(ctx, 31, 0x2DB1ECu);
    ctx->pc = 0x2DB1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB1E4u;
    // 0x2db1e8: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF6C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF6C8u, 0x2DB1E4u, 0x2DB1ECu)) {
        return;
    }
    ctx->pc = 0x2DB1ECu;
label_2db1ec:
    // 0x2db1ec: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2db1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x2db1f0: 0x27838fd8  addiu       $v1, $gp, -0x7028
    ctx->pc = 0x2db1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938584));
    // 0x2db1f4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2db1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2db1f8: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x2db1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2db1fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2db1fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db200: 0x8f848fd8  lw          $a0, -0x7028($gp)
    ctx->pc = 0x2db200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938584)));
    // 0x2db204: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x2db204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x2db208: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x2db208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x2db20c: 0x8f838fd8  lw          $v1, -0x7028($gp)
    ctx->pc = 0x2db20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938584)));
    // 0x2db210: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x2db210u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x2db214: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DB214u;
    {
        const bool branch_taken_0x2db214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB214u;
        // 0x2db218: 0xaf858fd8  sw          $a1, -0x7028($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938584), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db214) {
            ctx->pc = 0x2DB220u;
            goto label_2db220;
        }
    }
    ctx->pc = 0x2DB21Cu;
label_2db21c:
    // 0x2db21c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2db21cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2db220:
    // 0x2db220: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2db220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db224: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2db224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db228: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB228u;
        // 0x2db22c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB230u;
}
