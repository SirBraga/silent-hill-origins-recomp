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

// Function: sub_001A9248
// Address: 0x1a9248 - 0x1a92c8
void sub_001A9248_0x1a9248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9248_0x1a9248");
#endif

    switch (ctx->pc) {
        case 0x1a9248u: goto label_1a9248;
        case 0x1a924cu: goto label_1a924c;
        case 0x1a9250u: goto label_1a9250;
        case 0x1a9254u: goto label_1a9254;
        case 0x1a9258u: goto label_1a9258;
        case 0x1a925cu: goto label_1a925c;
        case 0x1a9260u: goto label_1a9260;
        case 0x1a9264u: goto label_1a9264;
        case 0x1a9268u: goto label_1a9268;
        case 0x1a926cu: goto label_1a926c;
        case 0x1a9270u: goto label_1a9270;
        case 0x1a9274u: goto label_1a9274;
        case 0x1a9278u: goto label_1a9278;
        case 0x1a927cu: goto label_1a927c;
        case 0x1a9280u: goto label_1a9280;
        case 0x1a9284u: goto label_1a9284;
        case 0x1a9288u: goto label_1a9288;
        case 0x1a928cu: goto label_1a928c;
        case 0x1a9290u: goto label_1a9290;
        case 0x1a9294u: goto label_1a9294;
        case 0x1a9298u: goto label_1a9298;
        case 0x1a929cu: goto label_1a929c;
        case 0x1a92a0u: goto label_1a92a0;
        case 0x1a92a4u: goto label_1a92a4;
        case 0x1a92a8u: goto label_1a92a8;
        case 0x1a92acu: goto label_1a92ac;
        case 0x1a92b0u: goto label_1a92b0;
        case 0x1a92b4u: goto label_1a92b4;
        case 0x1a92b8u: goto label_1a92b8;
        case 0x1a92bcu: goto label_1a92bc;
        case 0x1a92c0u: goto label_1a92c0;
        case 0x1a92c4u: goto label_1a92c4;
        default: break;
    }

    ctx->pc = 0x1a9248u;

label_1a9248:
    // 0x1a9248: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a9248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a924c:
    // 0x1a924c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a924cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1a9250:
    // 0x1a9250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a9254:
    // 0x1a9254: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a9254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a9258:
    // 0x1a9258: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1a9258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a925c:
    // 0x1a925c: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
label_1a9260:
    if (ctx->pc == 0x1A9260u) {
        ctx->pc = 0x1A9260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A925Cu;
        // 0x1a9260: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9264u;
        goto label_1a9264;
    }
    ctx->pc = 0x1A925Cu;
    {
        const bool branch_taken_0x1a925c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A925Cu;
        // 0x1a9260: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a925c) {
            ctx->pc = 0x1A9274u;
            goto label_1a9274;
        }
    }
    ctx->pc = 0x1A9264u;
label_1a9264:
    // 0x1a9264: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1a9264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_1a9268:
    // 0x1a9268: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1a9268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1a926c:
    // 0x1a926c: 0x10000012  b           . + 4 + (0x12 << 2)
label_1a9270:
    if (ctx->pc == 0x1A9270u) {
        ctx->pc = 0x1A9270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A926Cu;
        // 0x1a9270: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9274u;
        goto label_1a9274;
    }
    ctx->pc = 0x1A926Cu;
    {
        const bool branch_taken_0x1a926c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A926Cu;
        // 0x1a9270: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a926c) {
            ctx->pc = 0x1A92B8u;
            goto label_1a92b8;
        }
    }
    ctx->pc = 0x1A9274u;
label_1a9274:
    // 0x1a9274: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1a9274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1a9278:
    // 0x1a9278: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1a9278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_1a927c:
    // 0x1a927c: 0x2604002c  addiu       $a0, $s0, 0x2C
    ctx->pc = 0x1a927cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1a9280:
    // 0x1a9280: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1a9280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a9284:
    // 0x1a9284: 0xc06a4da  jal         func_1A9368
label_1a9288:
    if (ctx->pc == 0x1A9288u) {
        ctx->pc = 0x1A9288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9284u;
        // 0x1a9288: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A928Cu;
        goto label_1a928c;
    }
    ctx->pc = 0x1A9284u;
    SET_GPR_U32(ctx, 31, 0x1A928Cu);
    ctx->pc = 0x1A9288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9284u;
    // 0x1a9288: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9368u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9368u, 0x1A9284u, 0x1A928Cu)) {
        return;
    }
    ctx->pc = 0x1A928Cu;
label_1a928c:
    // 0x1a928c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a928cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a9290:
    // 0x1a9290: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1a9290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a9294:
    // 0x1a9294: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a9294u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a9298:
    // 0x1a9298: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x1a9298u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1a929c:
    // 0x1a929c: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x1a929cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1a92a0:
    // 0x1a92a0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1a92a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a92a4:
    // 0x1a92a4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1a92a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1a92a8:
    // 0x1a92a8: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1a92a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1a92ac:
    // 0x1a92ac: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1a92acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1a92b0:
    // 0x1a92b0: 0x60f809  jalr        $v1
label_1a92b4:
    if (ctx->pc == 0x1A92B4u) {
        ctx->pc = 0x1A92B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A92B0u;
        // 0x1a92b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A92B8u;
        goto label_1a92b8;
    }
    ctx->pc = 0x1A92B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A92B8u);
        ctx->pc = 0x1A92B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A92B0u;
        // 0x1a92b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A92B0u, 0x1A92B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A92B8u;
label_1a92b8:
    // 0x1a92b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a92b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a92bc:
    // 0x1a92bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a92bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a92c0:
    // 0x1a92c0: 0x3e00008  jr          $ra
label_1a92c4:
    if (ctx->pc == 0x1A92C4u) {
        ctx->pc = 0x1A92C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A92C0u;
        // 0x1a92c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A92C8u;
        goto label_fallthrough_0x1a92c0;
    }
    ctx->pc = 0x1A92C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A92C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A92C0u;
        // 0x1a92c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A92C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a92c0:
    ctx->pc = 0x1A92C8u;
}
