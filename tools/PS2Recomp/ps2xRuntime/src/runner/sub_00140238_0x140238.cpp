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

// Function: sub_00140238
// Address: 0x140238 - 0x140288
void sub_00140238_0x140238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140238_0x140238");
#endif

    switch (ctx->pc) {
        case 0x14025cu: goto label_14025c;
        case 0x140278u: goto label_140278;
        default: break;
    }

    ctx->pc = 0x140238u;

    // 0x140238: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x140238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14023c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14023cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x140240: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x140240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x140244: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x140244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140248: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x140248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x14024c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x14024Cu;
    {
        const bool branch_taken_0x14024c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14024c) {
            ctx->pc = 0x140250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14024Cu;
            // 0x140250: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14027Cu;
            goto label_14027c;
        }
    }
    ctx->pc = 0x140254u;
    // 0x140254: 0xc097a3e  jal         func_25E8F8
    ctx->pc = 0x140254u;
    SET_GPR_U32(ctx, 31, 0x14025Cu);
    ctx->pc = 0x140258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140254u;
    // 0x140258: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E8F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E8F8u, 0x140254u, 0x14025Cu)) {
        return;
    }
    ctx->pc = 0x14025Cu;
label_14025c:
    // 0x14025c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x14025Cu;
    {
        const bool branch_taken_0x14025c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14025c) {
            ctx->pc = 0x140260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14025Cu;
            // 0x140260: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14027Cu;
            goto label_14027c;
        }
    }
    ctx->pc = 0x140264u;
    // 0x140264: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x140264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x140268: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x140268u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x14026c: 0x8c44870c  lw          $a0, -0x78F4($v0)
    ctx->pc = 0x14026cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33870Cu));
    // 0x140270: 0xc05eeaa  jal         func_17BAA8
    ctx->pc = 0x140270u;
    SET_GPR_U32(ctx, 31, 0x140278u);
    ctx->pc = 0x140274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140270u;
    // 0x140274: 0x8e050044  lw          $a1, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BAA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BAA8u, 0x140270u, 0x140278u)) {
        return;
    }
    ctx->pc = 0x140278u;
label_140278:
    // 0x140278: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x140278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14027c:
    // 0x14027c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14027cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140280: 0x3e00008  jr          $ra
    ctx->pc = 0x140280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140280u;
        // 0x140284: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140288u;
}
