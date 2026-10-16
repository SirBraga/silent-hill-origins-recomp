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

// Function: sub_00194BB8
// Address: 0x194bb8 - 0x194c68
void sub_00194BB8_0x194bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194BB8_0x194bb8");
#endif

    switch (ctx->pc) {
        case 0x194c2cu: goto label_194c2c;
        default: break;
    }

    ctx->pc = 0x194bb8u;

    // 0x194bb8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x194bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194bbc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x194bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x194bc0: 0x8cc20090  lw          $v0, 0x90($a2)
    ctx->pc = 0x194bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 144)));
    // 0x194bc4: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194BC4u;
    {
        const bool branch_taken_0x194bc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x194bc4) {
            ctx->pc = 0x194BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194BC4u;
            // 0x194bc8: 0x8cc20098  lw          $v0, 0x98($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194BD8u;
            goto label_194bd8;
        }
    }
    ctx->pc = 0x194BCCu;
    // 0x194bcc: 0xc4c0003c  lwc1        $f0, 0x3C($a2)
    ctx->pc = 0x194bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x194BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BD0u;
        // 0x194bd4: 0xe4a00004  swc1        $f0, 0x4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194BD8u;
label_194bd8:
    // 0x194bd8: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194BD8u;
    {
        const bool branch_taken_0x194bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x194bd8) {
            ctx->pc = 0x194BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194BD8u;
            // 0x194bdc: 0x8cc200a0  lw          $v0, 0xA0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194BECu;
            goto label_194bec;
        }
    }
    ctx->pc = 0x194BE0u;
    // 0x194be0: 0xc4c00040  lwc1        $f0, 0x40($a2)
    ctx->pc = 0x194be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194be4: 0x3e00008  jr          $ra
    ctx->pc = 0x194BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BE4u;
        // 0x194be8: 0xe4a00004  swc1        $f0, 0x4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194BECu;
label_194bec:
    // 0x194bec: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194BECu;
    {
        const bool branch_taken_0x194bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x194bec) {
            ctx->pc = 0x194BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194BECu;
            // 0x194bf0: 0x8cc200a8  lw          $v0, 0xA8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194C00u;
            goto label_194c00;
        }
    }
    ctx->pc = 0x194BF4u;
    // 0x194bf4: 0xc4c00044  lwc1        $f0, 0x44($a2)
    ctx->pc = 0x194bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x194BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BF8u;
        // 0x194bfc: 0xe4a00004  swc1        $f0, 0x4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194C00u;
label_194c00:
    // 0x194c00: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194C00u;
    {
        const bool branch_taken_0x194c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x194c00) {
            ctx->pc = 0x194C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194C00u;
            // 0x194c04: 0x8cc200b0  lw          $v0, 0xB0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194C14u;
            goto label_194c14;
        }
    }
    ctx->pc = 0x194C08u;
    // 0x194c08: 0xc4c00048  lwc1        $f0, 0x48($a2)
    ctx->pc = 0x194c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x194C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C0Cu;
        // 0x194c10: 0xe4a00004  swc1        $f0, 0x4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194C14u;
label_194c14:
    // 0x194c14: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194C14u;
    {
        const bool branch_taken_0x194c14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x194C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C14u;
        // 0x194c18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194c14) {
            ctx->pc = 0x194C28u;
            goto label_194c28;
        }
    }
    ctx->pc = 0x194C1Cu;
    // 0x194c1c: 0xc4c00050  lwc1        $f0, 0x50($a2)
    ctx->pc = 0x194c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194c20: 0x3e00008  jr          $ra
    ctx->pc = 0x194C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C20u;
        // 0x194c24: 0xe4a00004  swc1        $f0, 0x4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194C28u;
label_194c28:
    // 0x194c28: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x194c28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_194c2c:
    // 0x194c2c: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x194c2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x194c30: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x194C30u;
    {
        const bool branch_taken_0x194c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C30u;
        // 0x194c34: 0x710c0  sll         $v0, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194c30) {
            ctx->pc = 0x194C5Cu;
            goto label_194c5c;
        }
    }
    ctx->pc = 0x194C38u;
    // 0x194c38: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x194c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x194c3c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x194c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x194c40: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x194c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x194c44: 0x5483fff9  bnel        $a0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x194C44u;
    {
        const bool branch_taken_0x194c44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x194c44) {
            ctx->pc = 0x194C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194C44u;
            // 0x194c48: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194C2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194c2c;
        }
    }
    ctx->pc = 0x194C4Cu;
    // 0x194c4c: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x194c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x194c50: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x194c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x194c54: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x194c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194c58: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x194c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_194c5c:
    // 0x194c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x194C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194C64u;
    // 0x194c64: 0x0  nop
    ctx->pc = 0x194c64u;
    // NOP
    ctx->pc = 0x194c68u;
}
