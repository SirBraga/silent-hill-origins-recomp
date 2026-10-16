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

// Function: sub_00225210
// Address: 0x225210 - 0x225270
void sub_00225210_0x225210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225210_0x225210");
#endif

    switch (ctx->pc) {
        case 0x225210u: goto label_225210;
        case 0x225214u: goto label_225214;
        case 0x225218u: goto label_225218;
        case 0x22521cu: goto label_22521c;
        case 0x225220u: goto label_225220;
        case 0x225224u: goto label_225224;
        case 0x225228u: goto label_225228;
        case 0x22522cu: goto label_22522c;
        case 0x225230u: goto label_225230;
        case 0x225234u: goto label_225234;
        case 0x225238u: goto label_225238;
        case 0x22523cu: goto label_22523c;
        case 0x225240u: goto label_225240;
        case 0x225244u: goto label_225244;
        case 0x225248u: goto label_225248;
        case 0x22524cu: goto label_22524c;
        case 0x225250u: goto label_225250;
        case 0x225254u: goto label_225254;
        case 0x225258u: goto label_225258;
        case 0x22525cu: goto label_22525c;
        case 0x225260u: goto label_225260;
        case 0x225264u: goto label_225264;
        case 0x225268u: goto label_225268;
        case 0x22526cu: goto label_22526c;
        default: break;
    }

    ctx->pc = 0x225210u;

label_225210:
    // 0x225210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_225214:
    // 0x225214: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x225214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_225218:
    // 0x225218: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x225218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22521c:
    // 0x22521c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22521cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_225220:
    // 0x225220: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x225220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_225224:
    // 0x225224: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x225224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_225228:
    // 0x225228: 0xc09397e  jal         func_24E5F8
label_22522c:
    if (ctx->pc == 0x22522Cu) {
        ctx->pc = 0x22522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225228u;
        // 0x22522c: 0x248402d0  addiu       $a0, $a0, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225230u;
        goto label_225230;
    }
    ctx->pc = 0x225228u;
    SET_GPR_U32(ctx, 31, 0x225230u);
    ctx->pc = 0x22522Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225228u;
    // 0x22522c: 0x248402d0  addiu       $a0, $a0, 0x2D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E5F8u, 0x225228u, 0x225230u)) {
        return;
    }
    ctx->pc = 0x225230u;
label_225230:
    // 0x225230: 0xc08ad86  jal         func_22B618
label_225234:
    if (ctx->pc == 0x225234u) {
        ctx->pc = 0x225234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225230u;
        // 0x225234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225238u;
        goto label_225238;
    }
    ctx->pc = 0x225230u;
    SET_GPR_U32(ctx, 31, 0x225238u);
    ctx->pc = 0x225234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225230u;
    // 0x225234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B618u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B618u, 0x225230u, 0x225238u)) {
        return;
    }
    ctx->pc = 0x225238u;
label_225238:
    // 0x225238: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x225238u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
label_22523c:
    // 0x22523c: 0x8cc63e80  lw          $a2, 0x3E80($a2)
    ctx->pc = 0x22523cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16000)));
label_225240:
    // 0x225240: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x225240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_225244:
    // 0x225244: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x225244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_225248:
    // 0x225248: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x225248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22524c:
    // 0x22524c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x22524cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_225250:
    // 0x225250: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x225250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_225254:
    // 0x225254: 0x40f809  jalr        $v0
label_225258:
    if (ctx->pc == 0x225258u) {
        ctx->pc = 0x225258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225254u;
        // 0x225258: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22525Cu;
        goto label_22525c;
    }
    ctx->pc = 0x225254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22525Cu);
        ctx->pc = 0x225258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225254u;
        // 0x225258: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225254u, 0x22525Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22525Cu;
label_22525c:
    // 0x22525c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22525cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_225260:
    // 0x225260: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x225260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225264:
    // 0x225264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225268:
    // 0x225268: 0x3e00008  jr          $ra
label_22526c:
    if (ctx->pc == 0x22526Cu) {
        ctx->pc = 0x22526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225268u;
        // 0x22526c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225270u;
        goto label_fallthrough_0x225268;
    }
    ctx->pc = 0x225268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225268u;
        // 0x22526c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x225268:
    ctx->pc = 0x225270u;
}
