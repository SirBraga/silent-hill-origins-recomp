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

// Function: sub_001C8638
// Address: 0x1c8638 - 0x1c8698
void sub_001C8638_0x1c8638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8638_0x1c8638");
#endif

    switch (ctx->pc) {
        case 0x1c8638u: goto label_1c8638;
        case 0x1c863cu: goto label_1c863c;
        case 0x1c8640u: goto label_1c8640;
        case 0x1c8644u: goto label_1c8644;
        case 0x1c8648u: goto label_1c8648;
        case 0x1c864cu: goto label_1c864c;
        case 0x1c8650u: goto label_1c8650;
        case 0x1c8654u: goto label_1c8654;
        case 0x1c8658u: goto label_1c8658;
        case 0x1c865cu: goto label_1c865c;
        case 0x1c8660u: goto label_1c8660;
        case 0x1c8664u: goto label_1c8664;
        case 0x1c8668u: goto label_1c8668;
        case 0x1c866cu: goto label_1c866c;
        case 0x1c8670u: goto label_1c8670;
        case 0x1c8674u: goto label_1c8674;
        case 0x1c8678u: goto label_1c8678;
        case 0x1c867cu: goto label_1c867c;
        case 0x1c8680u: goto label_1c8680;
        case 0x1c8684u: goto label_1c8684;
        case 0x1c8688u: goto label_1c8688;
        case 0x1c868cu: goto label_1c868c;
        case 0x1c8690u: goto label_1c8690;
        case 0x1c8694u: goto label_1c8694;
        default: break;
    }

    ctx->pc = 0x1c8638u;

label_1c8638:
    // 0x1c8638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c863c:
    // 0x1c863c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c863cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1c8640:
    // 0x1c8640: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c8644:
    // 0x1c8644: 0xc4800284  lwc1        $f0, 0x284($a0)
    ctx->pc = 0x1c8644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c8648:
    // 0x1c8648: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1c8648u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_1c864c:
    // 0x1c864c: 0xe4800284  swc1        $f0, 0x284($a0)
    ctx->pc = 0x1c864cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 644), bits); }
label_1c8650:
    // 0x1c8650: 0xc441990c  lwc1        $f1, -0x66F4($v0)
    ctx->pc = 0x1c8650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c8654:
    // 0x1c8654: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c8654u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c8658:
    // 0x1c8658: 0x0  nop
    ctx->pc = 0x1c8658u;
    // NOP
label_1c865c:
    // 0x1c865c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_1c8660:
    if (ctx->pc == 0x1C8660u) {
        ctx->pc = 0x1C8660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C865Cu;
        // 0x1c8660: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8664u;
        goto label_1c8664;
    }
    ctx->pc = 0x1C865Cu;
    {
        const bool branch_taken_0x1c865c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C865Cu;
        // 0x1c8660: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c865c) {
            ctx->pc = 0x1C8688u;
            goto label_1c8688;
        }
    }
    ctx->pc = 0x1C8664u;
label_1c8664:
    // 0x1c8664: 0x8c860264  lw          $a2, 0x264($a0)
    ctx->pc = 0x1c8664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 612)));
label_1c8668:
    // 0x1c8668: 0xac820274  sw          $v0, 0x274($a0)
    ctx->pc = 0x1c8668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 628), GPR_U32(ctx, 2));
label_1c866c:
    // 0x1c866c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c866cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c8670:
    // 0x1c8670: 0xac800284  sw          $zero, 0x284($a0)
    ctx->pc = 0x1c8670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 644), GPR_U32(ctx, 0));
label_1c8674:
    // 0x1c8674: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1c8674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1c8678:
    // 0x1c8678: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1c8678u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1c867c:
    // 0x1c867c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1c867cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1c8680:
    // 0x1c8680: 0x60f809  jalr        $v1
label_1c8684:
    if (ctx->pc == 0x1C8684u) {
        ctx->pc = 0x1C8684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8680u;
        // 0x1c8684: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8688u;
        goto label_1c8688;
    }
    ctx->pc = 0x1C8680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C8688u);
        ctx->pc = 0x1C8684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8680u;
        // 0x1c8684: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8680u, 0x1C8688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C8688u;
label_1c8688:
    // 0x1c8688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c868c:
    // 0x1c868c: 0x3e00008  jr          $ra
label_1c8690:
    if (ctx->pc == 0x1C8690u) {
        ctx->pc = 0x1C8690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C868Cu;
        // 0x1c8690: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8694u;
        goto label_1c8694;
    }
    ctx->pc = 0x1C868Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C868Cu;
        // 0x1c8690: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C868Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8694u;
label_1c8694:
    // 0x1c8694: 0x0  nop
    ctx->pc = 0x1c8694u;
    // NOP
    ctx->pc = 0x1c8698u;
}
