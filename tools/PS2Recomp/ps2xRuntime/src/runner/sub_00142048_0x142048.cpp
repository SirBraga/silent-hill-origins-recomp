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

// Function: sub_00142048
// Address: 0x142048 - 0x1420b8
void sub_00142048_0x142048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142048_0x142048");
#endif

    switch (ctx->pc) {
        case 0x142048u: goto label_142048;
        case 0x14204cu: goto label_14204c;
        case 0x142050u: goto label_142050;
        case 0x142054u: goto label_142054;
        case 0x142058u: goto label_142058;
        case 0x14205cu: goto label_14205c;
        case 0x142060u: goto label_142060;
        case 0x142064u: goto label_142064;
        case 0x142068u: goto label_142068;
        case 0x14206cu: goto label_14206c;
        case 0x142070u: goto label_142070;
        case 0x142074u: goto label_142074;
        case 0x142078u: goto label_142078;
        case 0x14207cu: goto label_14207c;
        case 0x142080u: goto label_142080;
        case 0x142084u: goto label_142084;
        case 0x142088u: goto label_142088;
        case 0x14208cu: goto label_14208c;
        case 0x142090u: goto label_142090;
        case 0x142094u: goto label_142094;
        case 0x142098u: goto label_142098;
        case 0x14209cu: goto label_14209c;
        case 0x1420a0u: goto label_1420a0;
        case 0x1420a4u: goto label_1420a4;
        case 0x1420a8u: goto label_1420a8;
        case 0x1420acu: goto label_1420ac;
        case 0x1420b0u: goto label_1420b0;
        case 0x1420b4u: goto label_1420b4;
        default: break;
    }

    ctx->pc = 0x142048u;

label_142048:
    // 0x142048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x142048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_14204c:
    // 0x14204c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x14204cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_142050:
    // 0x142050: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_142054:
    // 0x142054: 0x8ce20098  lw          $v0, 0x98($a3)
    ctx->pc = 0x142054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 152)));
label_142058:
    // 0x142058: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_14205c:
    if (ctx->pc == 0x14205Cu) {
        ctx->pc = 0x14205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142058u;
        // 0x14205c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142060u;
        goto label_142060;
    }
    ctx->pc = 0x142058u;
    {
        const bool branch_taken_0x142058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142058u;
        // 0x14205c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142058) {
            ctx->pc = 0x1420B0u;
            goto label_1420b0;
        }
    }
    ctx->pc = 0x142060u;
label_142060:
    // 0x142060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_142064:
    // 0x142064: 0x240400fc  addiu       $a0, $zero, 0xFC
    ctx->pc = 0x142064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
label_142068:
    // 0x142068: 0xace20098  sw          $v0, 0x98($a3)
    ctx->pc = 0x142068u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 152), GPR_U32(ctx, 2));
label_14206c:
    // 0x14206c: 0x68e20087  ldl         $v0, 0x87($a3)
    ctx->pc = 0x14206cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_142070:
    // 0x142070: 0x6ce20080  ldr         $v0, 0x80($a3)
    ctx->pc = 0x142070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_142074:
    // 0x142074: 0x8ce30088  lw          $v1, 0x88($a3)
    ctx->pc = 0x142074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 136)));
label_142078:
    // 0x142078: 0xb0e20093  sdl         $v0, 0x93($a3)
    ctx->pc = 0x142078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 147); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_14207c:
    // 0x14207c: 0xb4e2008c  sdr         $v0, 0x8C($a3)
    ctx->pc = 0x14207cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 140); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_142080:
    // 0x142080: 0xace30094  sw          $v1, 0x94($a3)
    ctx->pc = 0x142080u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 148), GPR_U32(ctx, 3));
label_142084:
    // 0x142084: 0xace4004c  sw          $a0, 0x4C($a3)
    ctx->pc = 0x142084u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 4));
label_142088:
    // 0x142088: 0x8ce30044  lw          $v1, 0x44($a3)
    ctx->pc = 0x142088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 68)));
label_14208c:
    // 0x14208c: 0x90e2004c  lbu         $v0, 0x4C($a3)
    ctx->pc = 0x14208cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 76)));
label_142090:
    // 0x142090: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x142090u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_142094:
    // 0x142094: 0x8ce60034  lw          $a2, 0x34($a3)
    ctx->pc = 0x142094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
label_142098:
    // 0x142098: 0x8ce50050  lw          $a1, 0x50($a3)
    ctx->pc = 0x142098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
label_14209c:
    // 0x14209c: 0x84c40040  lh          $a0, 0x40($a2)
    ctx->pc = 0x14209cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 64)));
label_1420a0:
    // 0x1420a0: 0x8cc20044  lw          $v0, 0x44($a2)
    ctx->pc = 0x1420a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
label_1420a4:
    // 0x1420a4: 0x40f809  jalr        $v0
label_1420a8:
    if (ctx->pc == 0x1420A8u) {
        ctx->pc = 0x1420A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1420A4u;
        // 0x1420a8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1420ACu;
        goto label_1420ac;
    }
    ctx->pc = 0x1420A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1420ACu);
        ctx->pc = 0x1420A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1420A4u;
        // 0x1420a8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1420A4u, 0x1420ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1420ACu;
label_1420ac:
    // 0x1420ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1420acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1420b0:
    // 0x1420b0: 0x3e00008  jr          $ra
label_1420b4:
    if (ctx->pc == 0x1420B4u) {
        ctx->pc = 0x1420B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1420B0u;
        // 0x1420b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1420B8u;
        goto label_fallthrough_0x1420b0;
    }
    ctx->pc = 0x1420B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1420B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1420B0u;
        // 0x1420b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1420B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1420b0:
    ctx->pc = 0x1420B8u;
}
