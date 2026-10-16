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

// Function: sub_001BC3D0
// Address: 0x1bc3d0 - 0x1bc490
void sub_001BC3D0_0x1bc3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC3D0_0x1bc3d0");
#endif

    switch (ctx->pc) {
        case 0x1bc3f8u: goto label_1bc3f8;
        case 0x1bc40cu: goto label_1bc40c;
        case 0x1bc43cu: goto label_1bc43c;
        case 0x1bc44cu: goto label_1bc44c;
        case 0x1bc480u: goto label_1bc480;
        default: break;
    }

    ctx->pc = 0x1bc3d0u;

    // 0x1bc3d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bc3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bc3d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bc3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bc3d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bc3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bc3dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bc3dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc3e0: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1bc3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1bc3e4: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1BC3E4u;
    {
        const bool branch_taken_0x1bc3e4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1BC3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC3E4u;
        // 0x1bc3e8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc3e4) {
            ctx->pc = 0x1BC454u;
            goto label_1bc454;
        }
    }
    ctx->pc = 0x1BC3ECu;
    // 0x1bc3ec: 0x8e04035c  lw          $a0, 0x35C($s0)
    ctx->pc = 0x1bc3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 860)));
    // 0x1bc3f0: 0xc06fa5e  jal         func_1BE978
    ctx->pc = 0x1BC3F0u;
    SET_GPR_U32(ctx, 31, 0x1BC3F8u);
    ctx->pc = 0x1BC3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC3F0u;
    // 0x1bc3f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BE978u, 0x1BC3F0u, 0x1BC3F8u)) {
        return;
    }
    ctx->pc = 0x1BC3F8u;
label_1bc3f8:
    // 0x1bc3f8: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1bc3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1bc3fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc400: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1bc400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1bc404: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BC404u;
    SET_GPR_U32(ctx, 31, 0x1BC40Cu);
    ctx->pc = 0x1BC408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC404u;
    // 0x1bc408: 0x248400f8  addiu       $a0, $a0, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BC404u, 0x1BC40Cu)) {
        return;
    }
    ctx->pc = 0x1BC40Cu;
label_1bc40c:
    // 0x1bc40c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1bc40cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1bc410: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1bc410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1bc414: 0x8c6343e8  lw          $v1, 0x43E8($v1)
    ctx->pc = 0x1bc414u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B43E8u));
    // 0x1bc418: 0x8c821a70  lw          $v0, 0x1A70($a0)
    ctx->pc = 0x1bc418u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x1bc41c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BC41Cu;
    {
        const bool branch_taken_0x1bc41c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BC420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC41Cu;
        // 0x1bc420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc41c) {
            ctx->pc = 0x1BC440u;
            goto label_1bc440;
        }
    }
    ctx->pc = 0x1BC424u;
    // 0x1bc424: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bc424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bc428: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC428u;
    {
        const bool branch_taken_0x1bc428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC428u;
        // 0x1bc42c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc428) {
            ctx->pc = 0x1BC43Cu;
            goto label_1bc43c;
        }
    }
    ctx->pc = 0x1BC430u;
    // 0x1bc430: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1bc430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1bc434: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1BC434u;
    SET_GPR_U32(ctx, 31, 0x1BC43Cu);
    ctx->pc = 0x1BC438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC434u;
    // 0x1bc438: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1BC434u, 0x1BC43Cu)) {
        return;
    }
    ctx->pc = 0x1BC43Cu;
label_1bc43c:
    // 0x1bc43c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bc43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bc440:
    // 0x1bc440: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc444: 0xc06ee2c  jal         func_1BB8B0
    ctx->pc = 0x1BC444u;
    SET_GPR_U32(ctx, 31, 0x1BC44Cu);
    ctx->pc = 0x1BC448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC444u;
    // 0x1bc448: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB8B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BB8B0u, 0x1BC444u, 0x1BC44Cu)) {
        return;
    }
    ctx->pc = 0x1BC44Cu;
label_1bc44c:
    // 0x1bc44c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1BC44Cu;
    {
        const bool branch_taken_0x1bc44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC44Cu;
        // 0x1bc450: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc44c) {
            ctx->pc = 0x1BC484u;
            goto label_1bc484;
        }
    }
    ctx->pc = 0x1BC454u;
label_1bc454:
    // 0x1bc454: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1bc454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1bc458: 0x8c4543f0  lw          $a1, 0x43F0($v0)
    ctx->pc = 0x1bc458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17392)));
    // 0x1bc45c: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1bc45cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1bc460: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BC460u;
    {
        const bool branch_taken_0x1bc460 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BC464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC460u;
        // 0x1bc464: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc460) {
            ctx->pc = 0x1BC484u;
            goto label_1bc484;
        }
    }
    ctx->pc = 0x1BC468u;
    // 0x1bc468: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1bc468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bc46c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC46Cu;
    {
        const bool branch_taken_0x1bc46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC46Cu;
        // 0x1bc470: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc46c) {
            ctx->pc = 0x1BC484u;
            goto label_1bc484;
        }
    }
    ctx->pc = 0x1BC474u;
    // 0x1bc474: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1bc474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1bc478: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1BC478u;
    SET_GPR_U32(ctx, 31, 0x1BC480u);
    ctx->pc = 0x1BC47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC478u;
    // 0x1bc47c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1BC478u, 0x1BC480u)) {
        return;
    }
    ctx->pc = 0x1BC480u;
label_1bc480:
    // 0x1bc480: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bc480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bc484:
    // 0x1bc484: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bc484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc488: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC488u;
        // 0x1bc48c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC490u;
}
