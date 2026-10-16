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

// Function: sub_001C3578
// Address: 0x1c3578 - 0x1c3690
void sub_001C3578_0x1c3578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3578_0x1c3578");
#endif

    switch (ctx->pc) {
        case 0x1c359cu: goto label_1c359c;
        case 0x1c35b8u: goto label_1c35b8;
        case 0x1c3630u: goto label_1c3630;
        case 0x1c3664u: goto label_1c3664;
        case 0x1c367cu: goto label_1c367c;
        default: break;
    }

    ctx->pc = 0x1c3578u;

    // 0x1c3578: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c3578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c357c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c357cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c3580: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c3580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c3584: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c3584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c3588: 0x14a2001a  bne         $a1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C3588u;
    {
        const bool branch_taken_0x1c3588 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3588u;
        // 0x1c358c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3588) {
            ctx->pc = 0x1C35F4u;
            goto label_1c35f4;
        }
    }
    ctx->pc = 0x1C3590u;
    // 0x1c3590: 0x8e05028c  lw          $a1, 0x28C($s0)
    ctx->pc = 0x1c3590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
    // 0x1c3594: 0xc070e2a  jal         func_1C38A8
    ctx->pc = 0x1C3594u;
    SET_GPR_U32(ctx, 31, 0x1C359Cu);
    ctx->pc = 0x1C3598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3594u;
    // 0x1c3598: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C38A8u, 0x1C3594u, 0x1C359Cu)) {
        return;
    }
    ctx->pc = 0x1C359Cu;
label_1c359c:
    // 0x1c359c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C359Cu;
    {
        const bool branch_taken_0x1c359c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C35A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C359Cu;
        // 0x1c35a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c359c) {
            ctx->pc = 0x1C35E4u;
            goto label_1c35e4;
        }
    }
    ctx->pc = 0x1C35A4u;
    // 0x1c35a4: 0x8e02028c  lw          $v0, 0x28C($s0)
    ctx->pc = 0x1c35a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
    // 0x1c35a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c35a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c35ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c35acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c35b0: 0xc070e4c  jal         func_1C3930
    ctx->pc = 0x1C35B0u;
    SET_GPR_U32(ctx, 31, 0x1C35B8u);
    ctx->pc = 0x1C35B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C35B0u;
    // 0x1c35b4: 0xae02028c  sw          $v0, 0x28C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C3930u, 0x1C35B0u, 0x1C35B8u)) {
        return;
    }
    ctx->pc = 0x1C35B8u;
label_1c35b8:
    // 0x1c35b8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1c35b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1c35bc: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1c35bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1c35c0: 0x8c634398  lw          $v1, 0x4398($v1)
    ctx->pc = 0x1c35c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4398u));
    // 0x1c35c4: 0x8c821a70  lw          $v0, 0x1A70($a0)
    ctx->pc = 0x1c35c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x1c35c8: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1C35C8u;
    {
        const bool branch_taken_0x1c35c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C35CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35C8u;
        // 0x1c35cc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c35c8) {
            ctx->pc = 0x1C3680u;
            goto label_1c3680;
        }
    }
    ctx->pc = 0x1C35D0u;
    // 0x1c35d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c35d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c35d4: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1C35D4u;
    {
        const bool branch_taken_0x1c35d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C35D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35D4u;
        // 0x1c35d8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c35d4) {
            ctx->pc = 0x1C3684u;
            goto label_1c3684;
        }
    }
    ctx->pc = 0x1C35DCu;
    // 0x1c35dc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1C35DCu;
    {
        const bool branch_taken_0x1c35dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C35E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35DCu;
        // 0x1c35e0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c35dc) {
            ctx->pc = 0x1C3658u;
            goto label_1c3658;
        }
    }
    ctx->pc = 0x1C35E4u;
label_1c35e4:
    // 0x1c35e4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1c35e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1c35e8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1c35e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1c35ec: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C35ECu;
    {
        const bool branch_taken_0x1c35ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C35F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35ECu;
        // 0x1c35f0: 0x8c4543b0  lw          $a1, 0x43B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c35ec) {
            ctx->pc = 0x1C363Cu;
            goto label_1c363c;
        }
    }
    ctx->pc = 0x1C35F4u;
label_1c35f4:
    // 0x1c35f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c35f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c35f8: 0x54a2001c  bnel        $a1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C35F8u;
    {
        const bool branch_taken_0x1c35f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c35f8) {
            ctx->pc = 0x1C35FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C35F8u;
            // 0x1c35fc: 0x8e020874  lw          $v0, 0x874($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C366Cu;
            goto label_1c366c;
        }
    }
    ctx->pc = 0x1C3600u;
    // 0x1c3600: 0x8e02028c  lw          $v0, 0x28C($s0)
    ctx->pc = 0x1c3600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
    // 0x1c3604: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c3604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c3608: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3608u;
    {
        const bool branch_taken_0x1c3608 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1C360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3608u;
        // 0x1c360c: 0xae02028c  sw          $v0, 0x28C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3608) {
            ctx->pc = 0x1C3624u;
            goto label_1c3624;
        }
    }
    ctx->pc = 0x1C3610u;
    // 0x1c3610: 0xae00028c  sw          $zero, 0x28C($s0)
    ctx->pc = 0x1c3610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
    // 0x1c3614: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1c3614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1c3618: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1c3618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1c361c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C361Cu;
    {
        const bool branch_taken_0x1c361c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C361Cu;
        // 0x1c3620: 0x8c4543b0  lw          $a1, 0x43B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c361c) {
            ctx->pc = 0x1C363Cu;
            goto label_1c363c;
        }
    }
    ctx->pc = 0x1C3624u;
label_1c3624:
    // 0x1c3624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3628: 0xc070e4c  jal         func_1C3930
    ctx->pc = 0x1C3628u;
    SET_GPR_U32(ctx, 31, 0x1C3630u);
    ctx->pc = 0x1C362Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3628u;
    // 0x1c362c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C3930u, 0x1C3628u, 0x1C3630u)) {
        return;
    }
    ctx->pc = 0x1C3630u;
label_1c3630:
    // 0x1c3630: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1c3630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1c3634: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1c3634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1c3638: 0x8c454390  lw          $a1, 0x4390($v0)
    ctx->pc = 0x1c3638u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B4390u));
label_1c363c:
    // 0x1c363c: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1c363cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
    // 0x1c3640: 0x10a3000f  beq         $a1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C3640u;
    {
        const bool branch_taken_0x1c3640 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C3644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3640u;
        // 0x1c3644: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3640) {
            ctx->pc = 0x1C3680u;
            goto label_1c3680;
        }
    }
    ctx->pc = 0x1C3648u;
    // 0x1c3648: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c3648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c364c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C364Cu;
    {
        const bool branch_taken_0x1c364c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C364Cu;
        // 0x1c3650: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c364c) {
            ctx->pc = 0x1C3684u;
            goto label_1c3684;
        }
    }
    ctx->pc = 0x1C3654u;
    // 0x1c3654: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1c3654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_1c3658:
    // 0x1c3658: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c3658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c365c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1C365Cu;
    SET_GPR_U32(ctx, 31, 0x1C3664u);
    ctx->pc = 0x1C3660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C365Cu;
    // 0x1c3660: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1C365Cu, 0x1C3664u)) {
        return;
    }
    ctx->pc = 0x1C3664u;
label_1c3664:
    // 0x1c3664: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3664u;
    {
        const bool branch_taken_0x1c3664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3664u;
        // 0x1c3668: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3664) {
            ctx->pc = 0x1C3680u;
            goto label_1c3680;
        }
    }
    ctx->pc = 0x1C366Cu;
label_1c366c:
    // 0x1c366c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C366Cu;
    {
        const bool branch_taken_0x1c366c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c366c) {
            ctx->pc = 0x1C3670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C366Cu;
            // 0x1c3670: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3680u;
            goto label_1c3680;
        }
    }
    ctx->pc = 0x1C3674u;
    // 0x1c3674: 0xc06ba6c  jal         func_1AE9B0
    ctx->pc = 0x1C3674u;
    SET_GPR_U32(ctx, 31, 0x1C367Cu);
    ctx->pc = 0x1C3678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3674u;
    // 0x1c3678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE9B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE9B0u, 0x1C3674u, 0x1C367Cu)) {
        return;
    }
    ctx->pc = 0x1C367Cu;
label_1c367c:
    // 0x1c367c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c367cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c3680:
    // 0x1c3680: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c3680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c3684:
    // 0x1c3684: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3684u;
        // 0x1c3688: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C368Cu;
    // 0x1c368c: 0x0  nop
    ctx->pc = 0x1c368cu;
    // NOP
    ctx->pc = 0x1c3690u;
}
