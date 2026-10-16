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

// Function: sub_0020A378
// Address: 0x20a378 - 0x20a440
void sub_0020A378_0x20a378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A378_0x20a378");
#endif

    switch (ctx->pc) {
        case 0x20a378u: goto label_20a378;
        case 0x20a37cu: goto label_20a37c;
        case 0x20a380u: goto label_20a380;
        case 0x20a384u: goto label_20a384;
        case 0x20a388u: goto label_20a388;
        case 0x20a38cu: goto label_20a38c;
        case 0x20a390u: goto label_20a390;
        case 0x20a394u: goto label_20a394;
        case 0x20a398u: goto label_20a398;
        case 0x20a39cu: goto label_20a39c;
        case 0x20a3a0u: goto label_20a3a0;
        case 0x20a3a4u: goto label_20a3a4;
        case 0x20a3a8u: goto label_20a3a8;
        case 0x20a3acu: goto label_20a3ac;
        case 0x20a3b0u: goto label_20a3b0;
        case 0x20a3b4u: goto label_20a3b4;
        case 0x20a3b8u: goto label_20a3b8;
        case 0x20a3bcu: goto label_20a3bc;
        case 0x20a3c0u: goto label_20a3c0;
        case 0x20a3c4u: goto label_20a3c4;
        case 0x20a3c8u: goto label_20a3c8;
        case 0x20a3ccu: goto label_20a3cc;
        case 0x20a3d0u: goto label_20a3d0;
        case 0x20a3d4u: goto label_20a3d4;
        case 0x20a3d8u: goto label_20a3d8;
        case 0x20a3dcu: goto label_20a3dc;
        case 0x20a3e0u: goto label_20a3e0;
        case 0x20a3e4u: goto label_20a3e4;
        case 0x20a3e8u: goto label_20a3e8;
        case 0x20a3ecu: goto label_20a3ec;
        case 0x20a3f0u: goto label_20a3f0;
        case 0x20a3f4u: goto label_20a3f4;
        case 0x20a3f8u: goto label_20a3f8;
        case 0x20a3fcu: goto label_20a3fc;
        case 0x20a400u: goto label_20a400;
        case 0x20a404u: goto label_20a404;
        case 0x20a408u: goto label_20a408;
        case 0x20a40cu: goto label_20a40c;
        case 0x20a410u: goto label_20a410;
        case 0x20a414u: goto label_20a414;
        case 0x20a418u: goto label_20a418;
        case 0x20a41cu: goto label_20a41c;
        case 0x20a420u: goto label_20a420;
        case 0x20a424u: goto label_20a424;
        case 0x20a428u: goto label_20a428;
        case 0x20a42cu: goto label_20a42c;
        case 0x20a430u: goto label_20a430;
        case 0x20a434u: goto label_20a434;
        case 0x20a438u: goto label_20a438;
        case 0x20a43cu: goto label_20a43c;
        default: break;
    }

    ctx->pc = 0x20a378u;

label_20a378:
    // 0x20a378: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20a378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20a37c:
    // 0x20a37c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20a37cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a380:
    // 0x20a380: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20a380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20a384:
    // 0x20a384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20a384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20a388:
    // 0x20a388: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20a388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20a38c:
    // 0x20a38c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x20a38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20a390:
    // 0x20a390: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20a390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20a394:
    // 0x20a394: 0x40f809  jalr        $v0
label_20a398:
    if (ctx->pc == 0x20A398u) {
        ctx->pc = 0x20A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A394u;
        // 0x20a398: 0x240600ac  addiu       $a2, $zero, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A39Cu;
        goto label_20a39c;
    }
    ctx->pc = 0x20A394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20A39Cu);
        ctx->pc = 0x20A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A394u;
        // 0x20a398: 0x240600ac  addiu       $a2, $zero, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A394u, 0x20A39Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A39Cu;
label_20a39c:
    // 0x20a39c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x20a39cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20a3a0:
    // 0x20a3a0: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x20a3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
label_20a3a4:
    // 0x20a3a4: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x20a3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
label_20a3a8:
    // 0x20a3a8: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x20a3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
label_20a3ac:
    // 0x20a3ac: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x20a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_20a3b0:
    // 0x20a3b0: 0xae0601b8  sw          $a2, 0x1B8($s0)
    ctx->pc = 0x20a3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 6));
label_20a3b4:
    // 0x20a3b4: 0x2442a440  addiu       $v0, $v0, -0x5BC0
    ctx->pc = 0x20a3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943808));
label_20a3b8:
    // 0x20a3b8: 0x2463a618  addiu       $v1, $v1, -0x59E8
    ctx->pc = 0x20a3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944280));
label_20a3bc:
    // 0x20a3bc: 0x24849c68  addiu       $a0, $a0, -0x6398
    ctx->pc = 0x20a3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941800));
label_20a3c0:
    // 0x20a3c0: 0x24a5a558  addiu       $a1, $a1, -0x5AA8
    ctx->pc = 0x20a3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944088));
label_20a3c4:
    // 0x20a3c4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x20a3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_20a3c8:
    // 0x20a3c8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x20a3c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20a3cc:
    // 0x20a3cc: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x20a3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_20a3d0:
    // 0x20a3d0: 0x24c30064  addiu       $v1, $a2, 0x64
    ctx->pc = 0x20a3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 100));
label_20a3d4:
    // 0x20a3d4: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x20a3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
label_20a3d8:
    // 0x20a3d8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x20a3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_20a3dc:
    // 0x20a3dc: 0xacc2001c  sw          $v0, 0x1C($a2)
    ctx->pc = 0x20a3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
label_20a3e0:
    // 0x20a3e0: 0xacc00060  sw          $zero, 0x60($a2)
    ctx->pc = 0x20a3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 96), GPR_U32(ctx, 0));
label_20a3e4:
    // 0x20a3e4: 0x0  nop
    ctx->pc = 0x20a3e4u;
    // NOP
label_20a3e8:
    // 0x20a3e8: 0xac67ffbc  sw          $a3, -0x44($v1)
    ctx->pc = 0x20a3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967228), GPR_U32(ctx, 7));
label_20a3ec:
    // 0x20a3ec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x20a3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_20a3f0:
    // 0x20a3f0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x20a3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_20a3f4:
    // 0x20a3f4: 0x0  nop
    ctx->pc = 0x20a3f4u;
    // NOP
label_20a3f8:
    // 0x20a3f8: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
label_20a3fc:
    if (ctx->pc == 0x20A3FCu) {
        ctx->pc = 0x20A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A3F8u;
        // 0x20a3fc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A400u;
        goto label_20a400;
    }
    ctx->pc = 0x20A3F8u;
    {
        const bool branch_taken_0x20a3f8 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x20A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A3F8u;
        // 0x20a3fc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a3f8) {
            ctx->pc = 0x20A3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20a3e8;
        }
    }
    ctx->pc = 0x20A400u;
label_20a400:
    // 0x20a400: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x20a400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_20a404:
    // 0x20a404: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20a404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20a408:
    // 0x20a408: 0x244297f8  addiu       $v0, $v0, -0x6808
    ctx->pc = 0x20a408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940664));
label_20a40c:
    // 0x20a40c: 0xacc20058  sw          $v0, 0x58($a2)
    ctx->pc = 0x20a40cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 88), GPR_U32(ctx, 2));
label_20a410:
    // 0x20a410: 0xacc20020  sw          $v0, 0x20($a2)
    ctx->pc = 0x20a410u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 2));
label_20a414:
    // 0x20a414: 0xae0001a0  sw          $zero, 0x1A0($s0)
    ctx->pc = 0x20a414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
label_20a418:
    // 0x20a418: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x20a418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_20a41c:
    // 0x20a41c: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x20a41cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_20a420:
    // 0x20a420: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x20a420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_20a424:
    // 0x20a424: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20a424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20a428:
    // 0x20a428: 0xac4000a4  sw          $zero, 0xA4($v0)
    ctx->pc = 0x20a428u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 0));
label_20a42c:
    // 0x20a42c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x20a42cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_20a430:
    // 0x20a430: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x20a430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_20a434:
    // 0x20a434: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x20a434u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_20a438:
    // 0x20a438: 0x3e00008  jr          $ra
label_20a43c:
    if (ctx->pc == 0x20A43Cu) {
        ctx->pc = 0x20A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A438u;
        // 0x20a43c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A440u;
        goto label_fallthrough_0x20a438;
    }
    ctx->pc = 0x20A438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A438u;
        // 0x20a43c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20a438:
    ctx->pc = 0x20A440u;
}
