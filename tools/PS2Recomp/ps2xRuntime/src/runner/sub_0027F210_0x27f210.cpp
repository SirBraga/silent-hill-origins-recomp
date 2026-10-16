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

// Function: sub_0027F210
// Address: 0x27f210 - 0x27f280
void sub_0027F210_0x27f210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F210_0x27f210");
#endif

    switch (ctx->pc) {
        case 0x27f210u: goto label_27f210;
        case 0x27f214u: goto label_27f214;
        case 0x27f218u: goto label_27f218;
        case 0x27f21cu: goto label_27f21c;
        case 0x27f220u: goto label_27f220;
        case 0x27f224u: goto label_27f224;
        case 0x27f228u: goto label_27f228;
        case 0x27f22cu: goto label_27f22c;
        case 0x27f230u: goto label_27f230;
        case 0x27f234u: goto label_27f234;
        case 0x27f238u: goto label_27f238;
        case 0x27f23cu: goto label_27f23c;
        case 0x27f240u: goto label_27f240;
        case 0x27f244u: goto label_27f244;
        case 0x27f248u: goto label_27f248;
        case 0x27f24cu: goto label_27f24c;
        case 0x27f250u: goto label_27f250;
        case 0x27f254u: goto label_27f254;
        case 0x27f258u: goto label_27f258;
        case 0x27f25cu: goto label_27f25c;
        case 0x27f260u: goto label_27f260;
        case 0x27f264u: goto label_27f264;
        case 0x27f268u: goto label_27f268;
        case 0x27f26cu: goto label_27f26c;
        case 0x27f270u: goto label_27f270;
        case 0x27f274u: goto label_27f274;
        case 0x27f278u: goto label_27f278;
        case 0x27f27cu: goto label_27f27c;
        default: break;
    }

    ctx->pc = 0x27f210u;

label_27f210:
    // 0x27f210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27f210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_27f214:
    // 0x27f214: 0x8f8287fc  lw          $v0, -0x7804($gp)
    ctx->pc = 0x27f214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936572)));
label_27f218:
    // 0x27f218: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27f218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27f21c:
    // 0x27f21c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27f21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_27f220:
    // 0x27f220: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27f220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27f224:
    // 0x27f224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27f224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_27f228:
    // 0x27f228: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x27f228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_27f22c:
    // 0x27f22c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x27f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27f230:
    // 0x27f230: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_27f234:
    if (ctx->pc == 0x27F234u) {
        ctx->pc = 0x27F234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F230u;
        // 0x27f234: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F238u;
        goto label_27f238;
    }
    ctx->pc = 0x27F230u;
    {
        const bool branch_taken_0x27f230 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F230u;
        // 0x27f234: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f230) {
            ctx->pc = 0x27F248u;
            goto label_27f248;
        }
    }
    ctx->pc = 0x27F238u;
label_27f238:
    // 0x27f238: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x27f238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_27f23c:
    // 0x27f23c: 0x40f809  jalr        $v0
label_27f240:
    if (ctx->pc == 0x27F240u) {
        ctx->pc = 0x27F244u;
        goto label_27f244;
    }
    ctx->pc = 0x27F23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27F244u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F23Cu, 0x27F244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27F244u;
label_27f244:
    // 0x27f244: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x27f244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_27f248:
    // 0x27f248: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x27f248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_27f24c:
    // 0x27f24c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_27f250:
    if (ctx->pc == 0x27F250u) {
        ctx->pc = 0x27F250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F24Cu;
        // 0x27f250: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F254u;
        goto label_27f254;
    }
    ctx->pc = 0x27F24Cu;
    {
        const bool branch_taken_0x27f24c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F24Cu;
        // 0x27f250: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f24c) {
            ctx->pc = 0x27F264u;
            goto label_27f264;
        }
    }
    ctx->pc = 0x27F254u;
label_27f254:
    // 0x27f254: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x27f254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_27f258:
    // 0x27f258: 0x40f809  jalr        $v0
label_27f25c:
    if (ctx->pc == 0x27F25Cu) {
        ctx->pc = 0x27F260u;
        goto label_27f260;
    }
    ctx->pc = 0x27F258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27F260u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F258u, 0x27F260u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27F260u;
label_27f260:
    // 0x27f260: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x27f260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_27f264:
    // 0x27f264: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x27f264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_27f268:
    // 0x27f268: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27f268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27f26c:
    // 0x27f26c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27f26cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27f270:
    // 0x27f270: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27f270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27f274:
    // 0x27f274: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27f274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27f278:
    // 0x27f278: 0x3e00008  jr          $ra
label_27f27c:
    if (ctx->pc == 0x27F27Cu) {
        ctx->pc = 0x27F27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F278u;
        // 0x27f27c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F280u;
        goto label_fallthrough_0x27f278;
    }
    ctx->pc = 0x27F278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F278u;
        // 0x27f27c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x27f278:
    ctx->pc = 0x27F280u;
}
