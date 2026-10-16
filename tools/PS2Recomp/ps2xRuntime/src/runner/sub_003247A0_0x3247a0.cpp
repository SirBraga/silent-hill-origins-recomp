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

// Function: sub_003247A0
// Address: 0x3247a0 - 0x324878
void sub_003247A0_0x3247a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003247A0_0x3247a0");
#endif

    switch (ctx->pc) {
        case 0x3247d0u: goto label_3247d0;
        case 0x3247e0u: goto label_3247e0;
        case 0x324838u: goto label_324838;
        default: break;
    }

    ctx->pc = 0x3247a0u;

    // 0x3247a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3247a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3247a4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3247a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3247a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3247a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3247ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3247acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3247b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3247b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3247b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3247b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3247b8: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x3247b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3247bc: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x3247bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x3247c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3247C0u;
    {
        const bool branch_taken_0x3247c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3247c0) {
            ctx->pc = 0x3247D8u;
            goto label_3247d8;
        }
    }
    ctx->pc = 0x3247C8u;
    // 0x3247c8: 0xc0c9194  jal         func_324650
    ctx->pc = 0x3247C8u;
    SET_GPR_U32(ctx, 31, 0x3247D0u);
    ctx->pc = 0x3247CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3247C8u;
    // 0x3247cc: 0x52c02  srl         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324650u, 0x3247C8u, 0x3247D0u)) {
        return;
    }
    ctx->pc = 0x3247D0u;
label_3247d0:
    // 0x3247d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3247D0u;
    {
        const bool branch_taken_0x3247d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3247D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3247D0u;
        // 0x3247d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3247d0) {
            ctx->pc = 0x3247E4u;
            goto label_3247e4;
        }
    }
    ctx->pc = 0x3247D8u;
label_3247d8:
    // 0x3247d8: 0xc0c9188  jal         func_324620
    ctx->pc = 0x3247D8u;
    SET_GPR_U32(ctx, 31, 0x3247E0u);
    ctx->pc = 0x324620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324620u, 0x3247D8u, 0x3247E0u)) {
        return;
    }
    ctx->pc = 0x3247E0u;
label_3247e0:
    // 0x3247e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3247e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3247e4:
    // 0x3247e4: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x3247e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3247e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3247e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3247ec: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x3247ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x3247f0: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x3247f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x3247f4: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x3247f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x3247f8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3247f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3247fc: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x3247fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x324800: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x324800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x324804: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x324804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x324808: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x324808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32480c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x32480cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x324810: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x324810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x324814: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x324814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x324818: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x324818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x32481c: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x32481cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x324820: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x324820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x324824: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x324824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x324828: 0x8e290028  lw          $t1, 0x28($s1)
    ctx->pc = 0x324828u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x32482c: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x32482cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x324830: 0xc0c9056  jal         func_324158
    ctx->pc = 0x324830u;
    SET_GPR_U32(ctx, 31, 0x324838u);
    ctx->pc = 0x324834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324830u;
    // 0x324834: 0x8e280024  lw          $t0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324158u, 0x324830u, 0x324838u)) {
        return;
    }
    ctx->pc = 0x324838u;
label_324838:
    // 0x324838: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x324838u;
    {
        const bool branch_taken_0x324838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324838u;
        // 0x32483c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324838) {
            ctx->pc = 0x324860u;
            goto label_324860;
        }
    }
    ctx->pc = 0x324840u;
    // 0x324840: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x324840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324844: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x324844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x324848: 0x24a54760  addiu       $a1, $a1, 0x4760
    ctx->pc = 0x324848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18272));
    // 0x32484c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x32484cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324850: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x324850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x324854: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x324854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324858: 0x80ca0ac  j           func_3282B0
    ctx->pc = 0x324858u;
    ctx->pc = 0x32485Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324858u;
    // 0x32485c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3282B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3282B0u, 0x324858u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x324860u;
label_324860:
    // 0x324860: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x324860u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324864: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x324864u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324868: 0x3e00008  jr          $ra
    ctx->pc = 0x324868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324868u;
        // 0x32486c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324870u;
    // 0x324870: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x324870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x324874: 0x0  nop
    ctx->pc = 0x324874u;
    // NOP
    ctx->pc = 0x324878u;
}
