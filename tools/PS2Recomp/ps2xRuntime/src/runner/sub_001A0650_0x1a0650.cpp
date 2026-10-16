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

// Function: sub_001A0650
// Address: 0x1a0650 - 0x1a06e8
void sub_001A0650_0x1a0650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0650_0x1a0650");
#endif

    switch (ctx->pc) {
        case 0x1a0680u: goto label_1a0680;
        case 0x1a06c0u: goto label_1a06c0;
        default: break;
    }

    ctx->pc = 0x1a0650u;

    // 0x1a0650: 0xc4800810  lwc1        $f0, 0x810($a0)
    ctx->pc = 0x1a0650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0654: 0xc482081c  lwc1        $f2, 0x81C($a0)
    ctx->pc = 0x1a0654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a0658: 0xc4810820  lwc1        $f1, 0x820($a0)
    ctx->pc = 0x1a0658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a065c: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1a065cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1a0660: 0xe48c0814  swc1        $f12, 0x814($a0)
    ctx->pc = 0x1a0660u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2068), bits); }
    // 0x1a0664: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1a0664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0668: 0x0  nop
    ctx->pc = 0x1a0668u;
    // NOP
    // 0x1a066c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1A066Cu;
    {
        const bool branch_taken_0x1a066c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A0670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A066Cu;
        // 0x1a0670: 0xe4800810  swc1        $f0, 0x810($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2064), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a066c) {
            ctx->pc = 0x1A069Cu;
            goto label_1a069c;
        }
    }
    ctx->pc = 0x1A0674u;
    // 0x1a0674: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a0674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0678: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a0678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a067c: 0x24830850  addiu       $v1, $a0, 0x850
    ctx->pc = 0x1a067cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2128));
label_1a0680:
    // 0x1a0680: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1a0680u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0684: 0x50460001  beql        $v0, $a2, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A0684u;
    {
        const bool branch_taken_0x1a0684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x1a0684) {
            ctx->pc = 0x1A0688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0684u;
            // 0x1a0688: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A068Cu;
            goto label_1a068c;
        }
    }
    ctx->pc = 0x1A068Cu;
label_1a068c:
    // 0x1a068c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a068cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a0690: 0x2ca20020  sltiu       $v0, $a1, 0x20
    ctx->pc = 0x1a0690u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1a0694: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A0694u;
    {
        const bool branch_taken_0x1a0694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0694u;
        // 0x1a0698: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0694) {
            ctx->pc = 0x1A0680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0680;
        }
    }
    ctx->pc = 0x1A069Cu;
label_1a069c:
    // 0x1a069c: 0xc4810828  lwc1        $f1, 0x828($a0)
    ctx->pc = 0x1a069cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a06a0: 0xc480082c  lwc1        $f0, 0x82C($a0)
    ctx->pc = 0x1a06a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a06a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a06a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a06a8: 0x0  nop
    ctx->pc = 0x1a06a8u;
    // NOP
    // 0x1a06ac: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1A06ACu;
    {
        const bool branch_taken_0x1a06ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A06B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06ACu;
        // 0x1a06b0: 0x24840850  addiu       $a0, $a0, 0x850 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a06ac) {
            ctx->pc = 0x1A06DCu;
            goto label_1a06dc;
        }
    }
    ctx->pc = 0x1A06B4u;
    // 0x1a06b4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a06b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a06b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a06b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a06bc: 0x0  nop
    ctx->pc = 0x1a06bcu;
    // NOP
label_1a06c0:
    // 0x1a06c0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1a06c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a06c4: 0x50450001  beql        $v0, $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A06C4u;
    {
        const bool branch_taken_0x1a06c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1a06c4) {
            ctx->pc = 0x1A06C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A06C4u;
            // 0x1a06c8: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A06CCu;
            goto label_1a06cc;
        }
    }
    ctx->pc = 0x1A06CCu;
label_1a06cc:
    // 0x1a06cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a06ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a06d0: 0x2c620020  sltiu       $v0, $v1, 0x20
    ctx->pc = 0x1a06d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1a06d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A06D4u;
    {
        const bool branch_taken_0x1a06d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A06D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06D4u;
        // 0x1a06d8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a06d4) {
            ctx->pc = 0x1A06C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a06c0;
        }
    }
    ctx->pc = 0x1A06DCu;
label_1a06dc:
    // 0x1a06dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A06DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A06DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A06E4u;
    // 0x1a06e4: 0x0  nop
    ctx->pc = 0x1a06e4u;
    // NOP
    ctx->pc = 0x1a06e8u;
}
