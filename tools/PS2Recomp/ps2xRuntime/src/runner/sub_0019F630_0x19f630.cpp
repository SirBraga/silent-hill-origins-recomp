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

// Function: sub_0019F630
// Address: 0x19f630 - 0x19f830
void sub_0019F630_0x19f630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F630_0x19f630");
#endif

    switch (ctx->pc) {
        case 0x19f690u: goto label_19f690;
        case 0x19f6a8u: goto label_19f6a8;
        case 0x19f6d0u: goto label_19f6d0;
        case 0x19f6f0u: goto label_19f6f0;
        case 0x19f70cu: goto label_19f70c;
        case 0x19f768u: goto label_19f768;
        case 0x19f784u: goto label_19f784;
        case 0x19f7d0u: goto label_19f7d0;
        default: break;
    }

    ctx->pc = 0x19f630u;

    // 0x19f630: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x19f630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x19f634: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x19f634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x19f638: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x19f638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x19f63c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x19f63cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f640: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x19f640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x19f644: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x19f644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x19f648: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x19f648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x19f64c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x19f64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x19f650: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19f650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19f654: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x19f654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x19f658: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x19f658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x19f65c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19f65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19f660: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x19f660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x19f664: 0x8ee2080c  lw          $v0, 0x80C($s7)
    ctx->pc = 0x19f664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2060)));
    // 0x19f668: 0x8ee30844  lw          $v1, 0x844($s7)
    ctx->pc = 0x19f668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2116)));
    // 0x19f66c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19f66cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19f670: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19f670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19f674: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19f674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f678: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x19F678u;
    {
        const bool branch_taken_0x19f678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F678u;
        // 0x19f67c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f678) {
            ctx->pc = 0x19F7F8u;
            goto label_19f7f8;
        }
    }
    ctx->pc = 0x19F680u;
    // 0x19f680: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x19f680u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f684: 0x12c0005d  beqz        $s6, . + 4 + (0x5D << 2)
    ctx->pc = 0x19F684u;
    {
        const bool branch_taken_0x19f684 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F684u;
        // 0x19f688: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f684) {
            ctx->pc = 0x19F7FCu;
            goto label_19f7fc;
        }
    }
    ctx->pc = 0x19F68Cu;
    // 0x19f68c: 0x0  nop
    ctx->pc = 0x19f68cu;
    // NOP
label_19f690:
    // 0x19f690: 0x8ec20034  lw          $v0, 0x34($s6)
    ctx->pc = 0x19f690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x19f694: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x19f694u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f698: 0x18400042  blez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x19F698u;
    {
        const bool branch_taken_0x19f698 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x19F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F698u;
        // 0x19f69c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f698) {
            ctx->pc = 0x19F7A4u;
            goto label_19f7a4;
        }
    }
    ctx->pc = 0x19F6A0u;
    // 0x19f6a0: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x19f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x19f6a4: 0x0  nop
    ctx->pc = 0x19f6a4u;
    // NOP
label_19f6a8:
    // 0x19f6a8: 0x8ec30038  lw          $v1, 0x38($s6)
    ctx->pc = 0x19f6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 56)));
    // 0x19f6ac: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x19f6acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19f6b0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x19f6b0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f6b4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19f6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19f6b8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19f6b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f6bc: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x19f6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x19f6c0: 0x26f20008  addiu       $s2, $s7, 0x8
    ctx->pc = 0x19f6c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x19f6c4: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x19f6c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f6c8: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x19f6c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19f6cc: 0x8e350014  lw          $s5, 0x14($s1)
    ctx->pc = 0x19f6ccu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_19f6d0:
    // 0x19f6d0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x19f6d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f6d4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x19f6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x19f6d8: 0x54550007  bnel        $v0, $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x19F6D8u;
    {
        const bool branch_taken_0x19f6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x19f6d8) {
            ctx->pc = 0x19F6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F6D8u;
            // 0x19f6dc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F6F8u;
            goto label_19f6f8;
        }
    }
    ctx->pc = 0x19F6E0u;
    // 0x19f6e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19f6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f6e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19f6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f6e8: 0xc0c5cd6  jal         func_317358
    ctx->pc = 0x19F6E8u;
    SET_GPR_U32(ctx, 31, 0x19F6F0u);
    ctx->pc = 0x19F6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F6E8u;
    // 0x19f6ec: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317358u, 0x19F6E8u, 0x19F6F0u)) {
        return;
    }
    ctx->pc = 0x19F6F0u;
label_19f6f0:
    // 0x19f6f0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x19F6F0u;
    {
        const bool branch_taken_0x19f6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6F0u;
        // 0x19f6f4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f6f0) {
            ctx->pc = 0x19F73Cu;
            goto label_19f73c;
        }
    }
    ctx->pc = 0x19F6F8u;
label_19f6f8:
    // 0x19f6f8: 0x26130020  addiu       $s3, $s0, 0x20
    ctx->pc = 0x19f6f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x19f6fc: 0x2e820040  sltiu       $v0, $s4, 0x40
    ctx->pc = 0x19f6fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x19f700: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x19F700u;
    {
        const bool branch_taken_0x19f700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F700u;
        // 0x19f704: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f700) {
            ctx->pc = 0x19F6D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f6d0;
        }
    }
    ctx->pc = 0x19F708u;
    // 0x19f708: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19f708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f70c:
    // 0x19f70c: 0x50c0001f  beql        $a2, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x19F70Cu;
    {
        const bool branch_taken_0x19f70c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f70c) {
            ctx->pc = 0x19F710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F70Cu;
            // 0x19f710: 0x8ec20034  lw          $v0, 0x34($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F78Cu;
            goto label_19f78c;
        }
    }
    ctx->pc = 0x19F714u;
    // 0x19f714: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x19f714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19f718: 0x1860001b  blez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x19F718u;
    {
        const bool branch_taken_0x19f718 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x19F71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F718u;
        // 0x19f71c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f718) {
            ctx->pc = 0x19F788u;
            goto label_19f788;
        }
    }
    ctx->pc = 0x19F720u;
    // 0x19f720: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x19F720u;
    {
        const bool branch_taken_0x19f720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f720) {
            ctx->pc = 0x19F724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F720u;
            // 0x19f724: 0xc6200018  lwc1        $f0, 0x18($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F744u;
            goto label_19f744;
        }
    }
    ctx->pc = 0x19F728u;
    // 0x19f728: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19f728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19f72c: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19F72Cu;
    {
        const bool branch_taken_0x19f72c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19f72c) {
            ctx->pc = 0x19F730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F72Cu;
            // 0x19f730: 0xc4ce0004  lwc1        $f14, 0x4($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F770u;
            goto label_19f770;
        }
    }
    ctx->pc = 0x19F734u;
    // 0x19f734: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x19F734u;
    {
        const bool branch_taken_0x19f734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F734u;
        // 0x19f738: 0x8ec20034  lw          $v0, 0x34($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f734) {
            ctx->pc = 0x19F78Cu;
            goto label_19f78c;
        }
    }
    ctx->pc = 0x19F73Cu;
label_19f73c:
    // 0x19f73c: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x19F73Cu;
    {
        const bool branch_taken_0x19f73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F73Cu;
        // 0x19f740: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f73c) {
            ctx->pc = 0x19F70Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f70c;
        }
    }
    ctx->pc = 0x19F744u;
label_19f744:
    // 0x19f744: 0x26280020  addiu       $t0, $s1, 0x20
    ctx->pc = 0x19f744u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x19f748: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x19f748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19f74c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19f74cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x19f750: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x19f750u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x19f754: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x19f754u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x19f758: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19f758u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19f75c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x19f75cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x19f760: 0xc0682f8  jal         func_1A0BE0
    ctx->pc = 0x19F760u;
    SET_GPR_U32(ctx, 31, 0x19F768u);
    ctx->pc = 0x19F764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F760u;
    // 0x19f764: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0BE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0BE0u, 0x19F760u, 0x19F768u)) {
        return;
    }
    ctx->pc = 0x19F768u;
label_19f768:
    // 0x19f768: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19F768u;
    {
        const bool branch_taken_0x19f768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F768u;
        // 0x19f76c: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f768) {
            ctx->pc = 0x19F788u;
            goto label_19f788;
        }
    }
    ctx->pc = 0x19F770u;
label_19f770:
    // 0x19f770: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x19f770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x19f774: 0xc62c0018  lwc1        $f12, 0x18($s1)
    ctx->pc = 0x19f774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19f778: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x19f778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f77c: 0xc06832c  jal         func_1A0CB0
    ctx->pc = 0x19F77Cu;
    SET_GPR_U32(ctx, 31, 0x19F784u);
    ctx->pc = 0x19F780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F77Cu;
    // 0x19f780: 0xc62d001c  lwc1        $f13, 0x1C($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0CB0u, 0x19F77Cu, 0x19F784u)) {
        return;
    }
    ctx->pc = 0x19F784u;
label_19f784:
    // 0x19f784: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x19f784u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19f788:
    // 0x19f788: 0x8ec20034  lw          $v0, 0x34($s6)
    ctx->pc = 0x19f788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
label_19f78c:
    // 0x19f78c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x19f78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19f790: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x19f790u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19f794: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F794u;
    {
        const bool branch_taken_0x19f794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F794u;
        // 0x19f798: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f794) {
            ctx->pc = 0x19F7A4u;
            goto label_19f7a4;
        }
    }
    ctx->pc = 0x19F79Cu;
    // 0x19f79c: 0x13c2ffc2  beq         $fp, $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x19F79Cu;
    {
        const bool branch_taken_0x19f79c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x19F7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F79Cu;
        // 0x19f7a0: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f79c) {
            ctx->pc = 0x19F6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f6a8;
        }
    }
    ctx->pc = 0x19F7A4u;
label_19f7a4:
    // 0x19f7a4: 0x57c00005  bnel        $fp, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F7A4u;
    {
        const bool branch_taken_0x19f7a4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f7a4) {
            ctx->pc = 0x19F7A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F7A4u;
            // 0x19f7a8: 0x8ec50024  lw          $a1, 0x24($s6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F7BCu;
            goto label_19f7bc;
        }
    }
    ctx->pc = 0x19F7ACu;
    // 0x19f7ac: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x19f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19f7b0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x19f7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19f7b4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19F7B4u;
    {
        const bool branch_taken_0x19f7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7B4u;
        // 0x19f7b8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f7b4) {
            ctx->pc = 0x19F7E0u;
            goto label_19f7e0;
        }
    }
    ctx->pc = 0x19F7BCu;
label_19f7bc:
    // 0x19f7bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19f7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f7c0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x19f7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f7c4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x19f7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x19f7c8: 0xc068082  jal         func_1A0208
    ctx->pc = 0x19F7C8u;
    SET_GPR_U32(ctx, 31, 0x19F7D0u);
    ctx->pc = 0x19F7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F7C8u;
    // 0x19f7cc: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0208u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0208u, 0x19F7C8u, 0x19F7D0u)) {
        return;
    }
    ctx->pc = 0x19F7D0u;
label_19f7d0:
    // 0x19f7d0: 0xc6c00030  lwc1        $f0, 0x30($s6)
    ctx->pc = 0x19f7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19f7d4: 0xe6e00818  swc1        $f0, 0x818($s7)
    ctx->pc = 0x19f7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 2072), bits); }
    // 0x19f7d8: 0x8ec2002c  lw          $v0, 0x2C($s6)
    ctx->pc = 0x19f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x19f7dc: 0xaee20834  sw          $v0, 0x834($s7)
    ctx->pc = 0x19f7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2100), GPR_U32(ctx, 2));
label_19f7e0:
    // 0x19f7e0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x19f7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19f7e4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F7E4u;
    {
        const bool branch_taken_0x19f7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f7e4) {
            ctx->pc = 0x19F7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F7E4u;
            // 0x19f7e8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F7FCu;
            goto label_19f7fc;
        }
    }
    ctx->pc = 0x19F7ECu;
    // 0x19f7ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19f7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f7f0: 0x1440ffa7  bnez        $v0, . + 4 + (-0x59 << 2)
    ctx->pc = 0x19F7F0u;
    {
        const bool branch_taken_0x19f7f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7F0u;
        // 0x19f7f4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f7f0) {
            ctx->pc = 0x19F690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f690;
        }
    }
    ctx->pc = 0x19F7F8u;
label_19f7f8:
    // 0x19f7f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19f7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19f7fc:
    // 0x19f7fc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x19f7fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19f800: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x19f800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19f804: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x19f804u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19f808: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x19f808u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19f80c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x19f80cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19f810: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19f810u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19f814: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x19f814u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19f818: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x19f818u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f81c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x19f81cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f820: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19f820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f824: 0x3e00008  jr          $ra
    ctx->pc = 0x19F824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F824u;
        // 0x19f828: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F82Cu;
    // 0x19f82c: 0x0  nop
    ctx->pc = 0x19f82cu;
    // NOP
    ctx->pc = 0x19f830u;
}
