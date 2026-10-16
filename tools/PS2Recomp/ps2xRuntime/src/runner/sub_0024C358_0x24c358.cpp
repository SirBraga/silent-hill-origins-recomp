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

// Function: sub_0024C358
// Address: 0x24c358 - 0x24c418
void sub_0024C358_0x24c358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C358_0x24c358");
#endif

    switch (ctx->pc) {
        case 0x24c358u: goto label_24c358;
        case 0x24c35cu: goto label_24c35c;
        case 0x24c360u: goto label_24c360;
        case 0x24c364u: goto label_24c364;
        case 0x24c368u: goto label_24c368;
        case 0x24c36cu: goto label_24c36c;
        case 0x24c370u: goto label_24c370;
        case 0x24c374u: goto label_24c374;
        case 0x24c378u: goto label_24c378;
        case 0x24c37cu: goto label_24c37c;
        case 0x24c380u: goto label_24c380;
        case 0x24c384u: goto label_24c384;
        case 0x24c388u: goto label_24c388;
        case 0x24c38cu: goto label_24c38c;
        case 0x24c390u: goto label_24c390;
        case 0x24c394u: goto label_24c394;
        case 0x24c398u: goto label_24c398;
        case 0x24c39cu: goto label_24c39c;
        case 0x24c3a0u: goto label_24c3a0;
        case 0x24c3a4u: goto label_24c3a4;
        case 0x24c3a8u: goto label_24c3a8;
        case 0x24c3acu: goto label_24c3ac;
        case 0x24c3b0u: goto label_24c3b0;
        case 0x24c3b4u: goto label_24c3b4;
        case 0x24c3b8u: goto label_24c3b8;
        case 0x24c3bcu: goto label_24c3bc;
        case 0x24c3c0u: goto label_24c3c0;
        case 0x24c3c4u: goto label_24c3c4;
        case 0x24c3c8u: goto label_24c3c8;
        case 0x24c3ccu: goto label_24c3cc;
        case 0x24c3d0u: goto label_24c3d0;
        case 0x24c3d4u: goto label_24c3d4;
        case 0x24c3d8u: goto label_24c3d8;
        case 0x24c3dcu: goto label_24c3dc;
        case 0x24c3e0u: goto label_24c3e0;
        case 0x24c3e4u: goto label_24c3e4;
        case 0x24c3e8u: goto label_24c3e8;
        case 0x24c3ecu: goto label_24c3ec;
        case 0x24c3f0u: goto label_24c3f0;
        case 0x24c3f4u: goto label_24c3f4;
        case 0x24c3f8u: goto label_24c3f8;
        case 0x24c3fcu: goto label_24c3fc;
        case 0x24c400u: goto label_24c400;
        case 0x24c404u: goto label_24c404;
        case 0x24c408u: goto label_24c408;
        case 0x24c40cu: goto label_24c40c;
        case 0x24c410u: goto label_24c410;
        case 0x24c414u: goto label_24c414;
        default: break;
    }

    ctx->pc = 0x24c358u;

label_24c358:
    // 0x24c358: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24c358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_24c35c:
    // 0x24c35c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x24c35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_24c360:
    // 0x24c360: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x24c360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_24c364:
    // 0x24c364: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24c364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24c368:
    // 0x24c368: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x24c368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_24c36c:
    // 0x24c36c: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x24c36cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_24c370:
    // 0x24c370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24c370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24c374:
    // 0x24c374: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x24c374u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_24c378:
    // 0x24c378: 0x10d1000e  beq         $a2, $s1, . + 4 + (0xE << 2)
label_24c37c:
    if (ctx->pc == 0x24C37Cu) {
        ctx->pc = 0x24C37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C378u;
        // 0x24c37c: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C380u;
        goto label_24c380;
    }
    ctx->pc = 0x24C378u;
    {
        const bool branch_taken_0x24c378 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 17));
        ctx->pc = 0x24C37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C378u;
        // 0x24c37c: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c378) {
            ctx->pc = 0x24C3B4u;
            goto label_24c3b4;
        }
    }
    ctx->pc = 0x24C380u;
label_24c380:
    // 0x24c380: 0x24520fc8  addiu       $s2, $v0, 0xFC8
    ctx->pc = 0x24c380u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_24c384:
    // 0x24c384: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x24c384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_24c388:
    // 0x24c388: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x24c388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_24c38c:
    // 0x24c38c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x24c38cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_24c390:
    // 0x24c390: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x24c390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_24c394:
    // 0x24c394: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x24c394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_24c398:
    // 0x24c398: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x24c398u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_24c39c:
    // 0x24c39c: 0x8e43010c  lw          $v1, 0x10C($s2)
    ctx->pc = 0x24c39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_24c3a0:
    // 0x24c3a0: 0x60f809  jalr        $v1
label_24c3a4:
    if (ctx->pc == 0x24C3A4u) {
        ctx->pc = 0x24C3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3A0u;
        // 0x24c3a4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C3A8u;
        goto label_24c3a8;
    }
    ctx->pc = 0x24C3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x24C3A8u);
        ctx->pc = 0x24C3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3A0u;
        // 0x24c3a4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C3A0u, 0x24C3A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C3A8u;
label_24c3a8:
    // 0x24c3a8: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x24c3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_24c3ac:
    // 0x24c3ac: 0x54d1fff6  bnel        $a2, $s1, . + 4 + (-0xA << 2)
label_24c3b0:
    if (ctx->pc == 0x24C3B0u) {
        ctx->pc = 0x24C3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3ACu;
        // 0x24c3b0: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C3B4u;
        goto label_24c3b4;
    }
    ctx->pc = 0x24C3ACu;
    {
        const bool branch_taken_0x24c3ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 17));
        if (branch_taken_0x24c3ac) {
            ctx->pc = 0x24C3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C3ACu;
            // 0x24c3b0: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c388;
        }
    }
    ctx->pc = 0x24C3B4u;
label_24c3b4:
    // 0x24c3b4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x24c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_24c3b8:
    // 0x24c3b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24c3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_24c3bc:
    // 0x24c3bc: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_24c3c0:
    if (ctx->pc == 0x24C3C0u) {
        ctx->pc = 0x24C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3BCu;
        // 0x24c3c0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C3C4u;
        goto label_24c3c4;
    }
    ctx->pc = 0x24C3BCu;
    {
        const bool branch_taken_0x24c3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c3bc) {
            ctx->pc = 0x24C3C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C3BCu;
            // 0x24c3c0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C400u;
            goto label_24c400;
        }
    }
    ctx->pc = 0x24C3C4u;
label_24c3c4:
    // 0x24c3c4: 0x8f848540  lw          $a0, -0x7AC0($gp)
    ctx->pc = 0x24c3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935872)));
label_24c3c8:
    // 0x24c3c8: 0x10900004  beq         $a0, $s0, . + 4 + (0x4 << 2)
label_24c3cc:
    if (ctx->pc == 0x24C3CCu) {
        ctx->pc = 0x24C3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3C8u;
        // 0x24c3cc: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C3D0u;
        goto label_24c3d0;
    }
    ctx->pc = 0x24C3C8u;
    {
        const bool branch_taken_0x24c3c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x24C3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3C8u;
        // 0x24c3cc: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c3c8) {
            ctx->pc = 0x24C3DCu;
            goto label_24c3dc;
        }
    }
    ctx->pc = 0x24C3D0u;
label_24c3d0:
    // 0x24c3d0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_24c3d4:
    if (ctx->pc == 0x24C3D4u) {
        ctx->pc = 0x24C3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3D0u;
        // 0x24c3d4: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C3D8u;
        goto label_24c3d8;
    }
    ctx->pc = 0x24C3D0u;
    {
        const bool branch_taken_0x24c3d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3D0u;
        // 0x24c3d4: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c3d0) {
            ctx->pc = 0x24C3F0u;
            goto label_24c3f0;
        }
    }
    ctx->pc = 0x24C3D8u;
label_24c3d8:
    // 0x24c3d8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x24c3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_24c3dc:
    // 0x24c3dc: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x24c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_24c3e0:
    // 0x24c3e0: 0x40f809  jalr        $v0
label_24c3e4:
    if (ctx->pc == 0x24C3E4u) {
        ctx->pc = 0x24C3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3E0u;
        // 0x24c3e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C3E8u;
        goto label_24c3e8;
    }
    ctx->pc = 0x24C3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24C3E8u);
        ctx->pc = 0x24C3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3E0u;
        // 0x24c3e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C3E0u, 0x24C3E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C3E8u;
label_24c3e8:
    // 0x24c3e8: 0x10000005  b           . + 4 + (0x5 << 2)
label_24c3ec:
    if (ctx->pc == 0x24C3ECu) {
        ctx->pc = 0x24C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3E8u;
        // 0x24c3ec: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C3F0u;
        goto label_24c3f0;
    }
    ctx->pc = 0x24C3E8u;
    {
        const bool branch_taken_0x24c3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3E8u;
        // 0x24c3ec: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c3e8) {
            ctx->pc = 0x24C400u;
            goto label_24c400;
        }
    }
    ctx->pc = 0x24C3F0u;
label_24c3f0:
    // 0x24c3f0: 0x8c6210e4  lw          $v0, 0x10E4($v1)
    ctx->pc = 0x24c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4324)));
label_24c3f4:
    // 0x24c3f4: 0x40f809  jalr        $v0
label_24c3f8:
    if (ctx->pc == 0x24C3F8u) {
        ctx->pc = 0x24C3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3F4u;
        // 0x24c3f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C3FCu;
        goto label_24c3fc;
    }
    ctx->pc = 0x24C3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24C3FCu);
        ctx->pc = 0x24C3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3F4u;
        // 0x24c3f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C3F4u, 0x24C3FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C3FCu;
label_24c3fc:
    // 0x24c3fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x24c3fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24c400:
    // 0x24c400: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24c400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24c404:
    // 0x24c404: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x24c404u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24c408:
    // 0x24c408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24c408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24c40c:
    // 0x24c40c: 0x3e00008  jr          $ra
label_24c410:
    if (ctx->pc == 0x24C410u) {
        ctx->pc = 0x24C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C40Cu;
        // 0x24c410: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C414u;
        goto label_24c414;
    }
    ctx->pc = 0x24C40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C40Cu;
        // 0x24c410: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C414u;
label_24c414:
    // 0x24c414: 0x0  nop
    ctx->pc = 0x24c414u;
    // NOP
    ctx->pc = 0x24c418u;
}
