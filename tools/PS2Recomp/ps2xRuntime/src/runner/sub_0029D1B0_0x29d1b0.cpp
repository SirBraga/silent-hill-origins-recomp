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

// Function: sub_0029D1B0
// Address: 0x29d1b0 - 0x29d228
void sub_0029D1B0_0x29d1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D1B0_0x29d1b0");
#endif

    switch (ctx->pc) {
        case 0x29d1b0u: goto label_29d1b0;
        case 0x29d1b4u: goto label_29d1b4;
        case 0x29d1b8u: goto label_29d1b8;
        case 0x29d1bcu: goto label_29d1bc;
        case 0x29d1c0u: goto label_29d1c0;
        case 0x29d1c4u: goto label_29d1c4;
        case 0x29d1c8u: goto label_29d1c8;
        case 0x29d1ccu: goto label_29d1cc;
        case 0x29d1d0u: goto label_29d1d0;
        case 0x29d1d4u: goto label_29d1d4;
        case 0x29d1d8u: goto label_29d1d8;
        case 0x29d1dcu: goto label_29d1dc;
        case 0x29d1e0u: goto label_29d1e0;
        case 0x29d1e4u: goto label_29d1e4;
        case 0x29d1e8u: goto label_29d1e8;
        case 0x29d1ecu: goto label_29d1ec;
        case 0x29d1f0u: goto label_29d1f0;
        case 0x29d1f4u: goto label_29d1f4;
        case 0x29d1f8u: goto label_29d1f8;
        case 0x29d1fcu: goto label_29d1fc;
        case 0x29d200u: goto label_29d200;
        case 0x29d204u: goto label_29d204;
        case 0x29d208u: goto label_29d208;
        case 0x29d20cu: goto label_29d20c;
        case 0x29d210u: goto label_29d210;
        case 0x29d214u: goto label_29d214;
        case 0x29d218u: goto label_29d218;
        case 0x29d21cu: goto label_29d21c;
        case 0x29d220u: goto label_29d220;
        case 0x29d224u: goto label_29d224;
        default: break;
    }

    ctx->pc = 0x29d1b0u;

label_29d1b0:
    // 0x29d1b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29d1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29d1b4:
    // 0x29d1b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29d1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29d1b8:
    // 0x29d1b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29d1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29d1bc:
    // 0x29d1bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29d1bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29d1c0:
    // 0x29d1c0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x29d1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_29d1c4:
    // 0x29d1c4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x29d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_29d1c8:
    // 0x29d1c8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x29d1c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_29d1cc:
    // 0x29d1cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_29d1d0:
    if (ctx->pc == 0x29D1D0u) {
        ctx->pc = 0x29D1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D1CCu;
        // 0x29d1d0: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D1D4u;
        goto label_29d1d4;
    }
    ctx->pc = 0x29D1CCu;
    {
        const bool branch_taken_0x29d1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D1CCu;
        // 0x29d1d0: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d1cc) {
            ctx->pc = 0x29D1E0u;
            goto label_29d1e0;
        }
    }
    ctx->pc = 0x29D1D4u;
label_29d1d4:
    // 0x29d1d4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x29d1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_29d1d8:
    // 0x29d1d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_29d1dc:
    if (ctx->pc == 0x29D1DCu) {
        ctx->pc = 0x29D1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D1D8u;
        // 0x29d1dc: 0x9064ffff  lbu         $a0, -0x1($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D1E0u;
        goto label_29d1e0;
    }
    ctx->pc = 0x29D1D8u;
    {
        const bool branch_taken_0x29d1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D1D8u;
        // 0x29d1dc: 0x9064ffff  lbu         $a0, -0x1($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d1d8) {
            ctx->pc = 0x29D1F8u;
            goto label_29d1f8;
        }
    }
    ctx->pc = 0x29D1E0u;
label_29d1e0:
    // 0x29d1e0: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x29d1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_29d1e4:
    // 0x29d1e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d1e8:
    // 0x29d1e8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x29d1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_29d1ec:
    // 0x29d1ec: 0x40f809  jalr        $v0
label_29d1f0:
    if (ctx->pc == 0x29D1F0u) {
        ctx->pc = 0x29D1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D1ECu;
        // 0x29d1f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D1F4u;
        goto label_29d1f4;
    }
    ctx->pc = 0x29D1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29D1F4u);
        ctx->pc = 0x29D1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D1ECu;
        // 0x29d1f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D1ECu, 0x29D1F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D1F4u;
label_29d1f4:
    // 0x29d1f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29d1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d1f8:
    // 0x29d1f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29d1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29d1fc:
    // 0x29d1fc: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
label_29d200:
    if (ctx->pc == 0x29D200u) {
        ctx->pc = 0x29D200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D1FCu;
        // 0x29d200: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D204u;
        goto label_29d204;
    }
    ctx->pc = 0x29D1FCu;
    {
        const bool branch_taken_0x29d1fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x29D200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D1FCu;
        // 0x29d200: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d1fc) {
            ctx->pc = 0x29D210u;
            goto label_29d210;
        }
    }
    ctx->pc = 0x29D204u;
label_29d204:
    // 0x29d204: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29d204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29d208:
    // 0x29d208: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29d208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_29d20c:
    // 0x29d20c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29d20cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29d210:
    // 0x29d210: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29d210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29d214:
    // 0x29d214: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x29d214u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29d218:
    // 0x29d218: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29d218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29d21c:
    // 0x29d21c: 0x3e00008  jr          $ra
label_29d220:
    if (ctx->pc == 0x29D220u) {
        ctx->pc = 0x29D220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D21Cu;
        // 0x29d220: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D224u;
        goto label_29d224;
    }
    ctx->pc = 0x29D21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D21Cu;
        // 0x29d220: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D224u;
label_29d224:
    // 0x29d224: 0x0  nop
    ctx->pc = 0x29d224u;
    // NOP
    ctx->pc = 0x29d228u;
}
