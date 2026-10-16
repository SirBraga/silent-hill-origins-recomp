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

// Function: sub_00137230
// Address: 0x137230 - 0x1372a0
void sub_00137230_0x137230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137230_0x137230");
#endif

    switch (ctx->pc) {
        case 0x137230u: goto label_137230;
        case 0x137234u: goto label_137234;
        case 0x137238u: goto label_137238;
        case 0x13723cu: goto label_13723c;
        case 0x137240u: goto label_137240;
        case 0x137244u: goto label_137244;
        case 0x137248u: goto label_137248;
        case 0x13724cu: goto label_13724c;
        case 0x137250u: goto label_137250;
        case 0x137254u: goto label_137254;
        case 0x137258u: goto label_137258;
        case 0x13725cu: goto label_13725c;
        case 0x137260u: goto label_137260;
        case 0x137264u: goto label_137264;
        case 0x137268u: goto label_137268;
        case 0x13726cu: goto label_13726c;
        case 0x137270u: goto label_137270;
        case 0x137274u: goto label_137274;
        case 0x137278u: goto label_137278;
        case 0x13727cu: goto label_13727c;
        case 0x137280u: goto label_137280;
        case 0x137284u: goto label_137284;
        case 0x137288u: goto label_137288;
        case 0x13728cu: goto label_13728c;
        case 0x137290u: goto label_137290;
        case 0x137294u: goto label_137294;
        case 0x137298u: goto label_137298;
        case 0x13729cu: goto label_13729c;
        default: break;
    }

    ctx->pc = 0x137230u;

label_137230:
    // 0x137230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x137230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_137234:
    // 0x137234: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x137234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_137238:
    // 0x137238: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x137238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13723c:
    // 0x13723c: 0xc048c0a  jal         func_123028
label_137240:
    if (ctx->pc == 0x137240u) {
        ctx->pc = 0x137240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13723Cu;
        // 0x137240: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137244u;
        goto label_137244;
    }
    ctx->pc = 0x13723Cu;
    SET_GPR_U32(ctx, 31, 0x137244u);
    ctx->pc = 0x137240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13723Cu;
    // 0x137240: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123028u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x123028u, 0x13723Cu, 0x137244u)) {
        return;
    }
    ctx->pc = 0x137244u;
label_137244:
    // 0x137244: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x137244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_137248:
    // 0x137248: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x137248u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_13724c:
    // 0x13724c: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x13724cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_137250:
    // 0x137250: 0x40f809  jalr        $v0
label_137254:
    if (ctx->pc == 0x137254u) {
        ctx->pc = 0x137254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137250u;
        // 0x137254: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137258u;
        goto label_137258;
    }
    ctx->pc = 0x137250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x137258u);
        ctx->pc = 0x137254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137250u;
        // 0x137254: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137250u, 0x137258u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x137258u;
label_137258:
    // 0x137258: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x137258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_13725c:
    // 0x13725c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x13725cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_137260:
    // 0x137260: 0x8c6544c8  lw          $a1, 0x44C8($v1)
    ctx->pc = 0x137260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17608)));
label_137264:
    // 0x137264: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x137264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
label_137268:
    // 0x137268: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x137268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_13726c:
    // 0x13726c: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_137270:
    if (ctx->pc == 0x137270u) {
        ctx->pc = 0x137270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13726Cu;
        // 0x137270: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137274u;
        goto label_137274;
    }
    ctx->pc = 0x13726Cu;
    {
        const bool branch_taken_0x13726c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x137270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13726Cu;
        // 0x137270: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13726c) {
            ctx->pc = 0x137288u;
            goto label_137288;
        }
    }
    ctx->pc = 0x137274u;
label_137274:
    // 0x137274: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x137274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_137278:
    // 0x137278: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_13727c:
    if (ctx->pc == 0x13727Cu) {
        ctx->pc = 0x137280u;
        goto label_137280;
    }
    ctx->pc = 0x137278u;
    {
        const bool branch_taken_0x137278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137278) {
            ctx->pc = 0x137288u;
            goto label_137288;
        }
    }
    ctx->pc = 0x137280u;
label_137280:
    // 0x137280: 0xc07fd18  jal         func_1FF460
label_137284:
    if (ctx->pc == 0x137284u) {
        ctx->pc = 0x137284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137280u;
        // 0x137284: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137288u;
        goto label_137288;
    }
    ctx->pc = 0x137280u;
    SET_GPR_U32(ctx, 31, 0x137288u);
    ctx->pc = 0x137284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137280u;
    // 0x137284: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x137280u, 0x137288u)) {
        return;
    }
    ctx->pc = 0x137288u;
label_137288:
    // 0x137288: 0xc04c00a  jal         func_130028
label_13728c:
    if (ctx->pc == 0x13728Cu) {
        ctx->pc = 0x13728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137288u;
        // 0x13728c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137290u;
        goto label_137290;
    }
    ctx->pc = 0x137288u;
    SET_GPR_U32(ctx, 31, 0x137290u);
    ctx->pc = 0x13728Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137288u;
    // 0x13728c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130028u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x130028u, 0x137288u, 0x137290u)) {
        return;
    }
    ctx->pc = 0x137290u;
label_137290:
    // 0x137290: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x137290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_137294:
    // 0x137294: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x137294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_137298:
    // 0x137298: 0x3e00008  jr          $ra
label_13729c:
    if (ctx->pc == 0x13729Cu) {
        ctx->pc = 0x13729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137298u;
        // 0x13729c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1372A0u;
        goto label_fallthrough_0x137298;
    }
    ctx->pc = 0x137298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137298u;
        // 0x13729c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x137298:
    ctx->pc = 0x1372A0u;
}
