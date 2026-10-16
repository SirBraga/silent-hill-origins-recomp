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

// Function: sub_001C81F0
// Address: 0x1c81f0 - 0x1c8288
void sub_001C81F0_0x1c81f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C81F0_0x1c81f0");
#endif

    switch (ctx->pc) {
        case 0x1c8204u: goto label_1c8204;
        case 0x1c8218u: goto label_1c8218;
        case 0x1c8220u: goto label_1c8220;
        default: break;
    }

    ctx->pc = 0x1c81f0u;

    // 0x1c81f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c81f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c81f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c81f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c81f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c81f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c81fc: 0xc06bbe0  jal         func_1AEF80
    ctx->pc = 0x1C81FCu;
    SET_GPR_U32(ctx, 31, 0x1C8204u);
    ctx->pc = 0x1C8200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81FCu;
    // 0x1c8200: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEF80u, 0x1C81FCu, 0x1C8204u)) {
        return;
    }
    ctx->pc = 0x1C8204u;
label_1c8204:
    // 0x1c8204: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1c8204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c8208: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8208u;
    {
        const bool branch_taken_0x1c8208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8208u;
        // 0x1c820c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8208) {
            ctx->pc = 0x1C8220u;
            goto label_1c8220;
        }
    }
    ctx->pc = 0x1C8210u;
    // 0x1c8210: 0xc06db7c  jal         func_1B6DF0
    ctx->pc = 0x1C8210u;
    SET_GPR_U32(ctx, 31, 0x1C8218u);
    ctx->pc = 0x1B6DF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6DF0u, 0x1C8210u, 0x1C8218u)) {
        return;
    }
    ctx->pc = 0x1C8218u;
label_1c8218:
    // 0x1c8218: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c8218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c821c: 0x0  nop
    ctx->pc = 0x1c821cu;
    // NOP
label_1c8220:
    // 0x1c8220: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1c8220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c8224: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1c8224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1c8228: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c8228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c822c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c822cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8230: 0x28a40008  slti        $a0, $a1, 0x8
    ctx->pc = 0x1c8230u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1c8234: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C8234u;
    {
        const bool branch_taken_0x1c8234 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8234u;
        // 0x1c8238: 0xac4001d0  sw          $zero, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8234) {
            ctx->pc = 0x1C8220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8220;
        }
    }
    ctx->pc = 0x1C823Cu;
    // 0x1c823c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1c823cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c8240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8244: 0xac4000f4  sw          $zero, 0xF4($v0)
    ctx->pc = 0x1c8244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 0));
    // 0x1c8248: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1c8248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c824c: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x1c824cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x1c8250: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1c8250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1c8254: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1c8254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c8258: 0xac4001d0  sw          $zero, 0x1D0($v0)
    ctx->pc = 0x1c8258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 0));
    // 0x1c825c: 0xc4609914  lwc1        $f0, -0x66EC($v1)
    ctx->pc = 0x1c825cu;
    { uint32_t bits = FAST_READ32(0x339914u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8260: 0xae000274  sw          $zero, 0x274($s0)
    ctx->pc = 0x1c8260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 0));
    // 0x1c8264: 0xe6000288  swc1        $f0, 0x288($s0)
    ctx->pc = 0x1c8264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
    // 0x1c8268: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x1c8268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
    // 0x1c826c: 0xae00027c  sw          $zero, 0x27C($s0)
    ctx->pc = 0x1c826cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 0));
    // 0x1c8270: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1c8270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x1c8274: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x1c8274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
    // 0x1c8278: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c8278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c827c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C827Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C827Cu;
        // 0x1c8280: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C827Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8284u;
    // 0x1c8284: 0x0  nop
    ctx->pc = 0x1c8284u;
    // NOP
    ctx->pc = 0x1c8288u;
}
