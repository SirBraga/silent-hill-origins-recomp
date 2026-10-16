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

// Function: sub_001711F0
// Address: 0x1711f0 - 0x171258
void sub_001711F0_0x1711f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001711F0_0x1711f0");
#endif

    switch (ctx->pc) {
        case 0x171248u: goto label_171248;
        default: break;
    }

    ctx->pc = 0x1711f0u;

    // 0x1711f0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1711f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1711f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1711f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1711f8: 0x8c43f740  lw          $v1, -0x8C0($v0)
    ctx->pc = 0x1711f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6BF740u));
    // 0x1711fc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1711fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x171200: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x171200u;
    {
        const bool branch_taken_0x171200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x171204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171200u;
        // 0x171204: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171200) {
            ctx->pc = 0x171240u;
            goto label_171240;
        }
    }
    ctx->pc = 0x171208u;
    // 0x171208: 0x8c8200d0  lw          $v0, 0xD0($a0)
    ctx->pc = 0x171208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x17120c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17120Cu;
    {
        const bool branch_taken_0x17120c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17120Cu;
        // 0x171210: 0x8ca60004  lw          $a2, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17120c) {
            ctx->pc = 0x171240u;
            goto label_171240;
        }
    }
    ctx->pc = 0x171214u;
    // 0x171214: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x171214u;
    {
        const bool branch_taken_0x171214 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x171218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171214u;
        // 0x171218: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171214) {
            ctx->pc = 0x171240u;
            goto label_171240;
        }
    }
    ctx->pc = 0x17121Cu;
    // 0x17121c: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x17121cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x171220: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x171220u;
    {
        const bool branch_taken_0x171220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x171220) {
            ctx->pc = 0x171240u;
            goto label_171240;
        }
    }
    ctx->pc = 0x171228u;
    // 0x171228: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x171228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17122c: 0xe4800158  swc1        $f0, 0x158($a0)
    ctx->pc = 0x17122cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 344), bits); }
    // 0x171230: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x171230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171234: 0xe481015c  swc1        $f1, 0x15C($a0)
    ctx->pc = 0x171234u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 348), bits); }
    // 0x171238: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x171238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17123c: 0xe4800160  swc1        $f0, 0x160($a0)
    ctx->pc = 0x17123cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 352), bits); }
label_171240:
    // 0x171240: 0xc05c150  jal         func_170540
    ctx->pc = 0x171240u;
    SET_GPR_U32(ctx, 31, 0x171248u);
    ctx->pc = 0x170540u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x170540u, 0x171240u, 0x171248u)) {
        return;
    }
    ctx->pc = 0x171248u;
label_171248:
    // 0x171248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17124c: 0x3e00008  jr          $ra
    ctx->pc = 0x17124Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17124Cu;
        // 0x171250: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17124Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171254u;
    // 0x171254: 0x0  nop
    ctx->pc = 0x171254u;
    // NOP
    ctx->pc = 0x171258u;
}
