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

// Function: sub_0024BFD0
// Address: 0x24bfd0 - 0x24c060
void sub_0024BFD0_0x24bfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BFD0_0x24bfd0");
#endif

    switch (ctx->pc) {
        case 0x24bfd0u: goto label_24bfd0;
        case 0x24bfd4u: goto label_24bfd4;
        case 0x24bfd8u: goto label_24bfd8;
        case 0x24bfdcu: goto label_24bfdc;
        case 0x24bfe0u: goto label_24bfe0;
        case 0x24bfe4u: goto label_24bfe4;
        case 0x24bfe8u: goto label_24bfe8;
        case 0x24bfecu: goto label_24bfec;
        case 0x24bff0u: goto label_24bff0;
        case 0x24bff4u: goto label_24bff4;
        case 0x24bff8u: goto label_24bff8;
        case 0x24bffcu: goto label_24bffc;
        case 0x24c000u: goto label_24c000;
        case 0x24c004u: goto label_24c004;
        case 0x24c008u: goto label_24c008;
        case 0x24c00cu: goto label_24c00c;
        case 0x24c010u: goto label_24c010;
        case 0x24c014u: goto label_24c014;
        case 0x24c018u: goto label_24c018;
        case 0x24c01cu: goto label_24c01c;
        case 0x24c020u: goto label_24c020;
        case 0x24c024u: goto label_24c024;
        case 0x24c028u: goto label_24c028;
        case 0x24c02cu: goto label_24c02c;
        case 0x24c030u: goto label_24c030;
        case 0x24c034u: goto label_24c034;
        case 0x24c038u: goto label_24c038;
        case 0x24c03cu: goto label_24c03c;
        case 0x24c040u: goto label_24c040;
        case 0x24c044u: goto label_24c044;
        case 0x24c048u: goto label_24c048;
        case 0x24c04cu: goto label_24c04c;
        case 0x24c050u: goto label_24c050;
        case 0x24c054u: goto label_24c054;
        case 0x24c058u: goto label_24c058;
        case 0x24c05cu: goto label_24c05c;
        default: break;
    }

    ctx->pc = 0x24bfd0u;

label_24bfd0:
    // 0x24bfd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24bfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_24bfd4:
    // 0x24bfd4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24bfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_24bfd8:
    // 0x24bfd8: 0x8c633f60  lw          $v1, 0x3F60($v1)
    ctx->pc = 0x24bfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16224)));
label_24bfdc:
    // 0x24bfdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24bfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24bfe0:
    // 0x24bfe0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x24bfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_24bfe4:
    // 0x24bfe4: 0x24840fc8  addiu       $a0, $a0, 0xFC8
    ctx->pc = 0x24bfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4040));
label_24bfe8:
    // 0x24bfe8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x24bfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_24bfec:
    // 0x24bfec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24bfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_24bff0:
    // 0x24bff0: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x24bff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_24bff4:
    // 0x24bff4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24bff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24bff8:
    // 0x24bff8: 0x40f809  jalr        $v0
label_24bffc:
    if (ctx->pc == 0x24BFFCu) {
        ctx->pc = 0x24BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BFF8u;
        // 0x24bffc: 0x34a5000d  ori         $a1, $a1, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C000u;
        goto label_24c000;
    }
    ctx->pc = 0x24BFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24C000u);
        ctx->pc = 0x24BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BFF8u;
        // 0x24bffc: 0x34a5000d  ori         $a1, $a1, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BFF8u, 0x24C000u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C000u;
label_24c000:
    // 0x24c000: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24c000u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24c004:
    // 0x24c004: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_24c008:
    if (ctx->pc == 0x24C008u) {
        ctx->pc = 0x24C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C004u;
        // 0x24c008: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C00Cu;
        goto label_24c00c;
    }
    ctx->pc = 0x24C004u;
    {
        const bool branch_taken_0x24c004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C004u;
        // 0x24c008: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c004) {
            ctx->pc = 0x24C050u;
            goto label_24c050;
        }
    }
    ctx->pc = 0x24C00Cu;
label_24c00c:
    // 0x24c00c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24c00cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24c010:
    // 0x24c010: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24c010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_24c014:
    // 0x24c014: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24c014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24c018:
    // 0x24c018: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x24c018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_24c01c:
    // 0x24c01c: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x24c01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_24c020:
    // 0x24c020: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x24c020u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_24c024:
    // 0x24c024: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x24c024u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_24c028:
    // 0x24c028: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x24c028u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_24c02c:
    // 0x24c02c: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x24c02cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_24c030:
    // 0x24c030: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x24c030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_24c034:
    // 0x24c034: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x24c034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_24c038:
    // 0x24c038: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x24c038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_24c03c:
    // 0x24c03c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x24c03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_24c040:
    // 0x24c040: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x24c040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_24c044:
    // 0x24c044: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x24c044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_24c048:
    // 0x24c048: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x24c048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_24c04c:
    // 0x24c04c: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x24c04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
label_24c050:
    // 0x24c050: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24c050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24c054:
    // 0x24c054: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x24c054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_24c058:
    // 0x24c058: 0x3e00008  jr          $ra
label_24c05c:
    if (ctx->pc == 0x24C05Cu) {
        ctx->pc = 0x24C05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C058u;
        // 0x24c05c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C060u;
        goto label_fallthrough_0x24c058;
    }
    ctx->pc = 0x24C058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C058u;
        // 0x24c05c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24c058:
    ctx->pc = 0x24C060u;
}
