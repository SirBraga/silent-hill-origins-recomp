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

// Function: sub_001B63C8
// Address: 0x1b63c8 - 0x1b64e0
void sub_001B63C8_0x1b63c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B63C8_0x1b63c8");
#endif

    switch (ctx->pc) {
        case 0x1b6400u: goto label_1b6400;
        case 0x1b6424u: goto label_1b6424;
        case 0x1b6458u: goto label_1b6458;
        case 0x1b64b4u: goto label_1b64b4;
        default: break;
    }

    ctx->pc = 0x1b63c8u;

    // 0x1b63c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b63c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b63cc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b63ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b63d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b63d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b63d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b63d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b63d8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1b63d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1b63dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b63dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b63e0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1b63e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1b63e4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1b63e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1b63e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b63e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b63ec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b63ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b63f0: 0x8e300290  lw          $s0, 0x290($s1)
    ctx->pc = 0x1b63f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 656)));
    // 0x1b63f4: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B63F4u;
    {
        const bool branch_taken_0x1b63f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B63F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B63F4u;
        // 0x1b63f8: 0xae2002a4  sw          $zero, 0x2A4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 676), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b63f4) {
            ctx->pc = 0x1B643Cu;
            goto label_1b643c;
        }
    }
    ctx->pc = 0x1B63FCu;
    // 0x1b63fc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1b63fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6400:
    // 0x1b6400: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b6400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b6404: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b6404u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1b6408: 0xc44d002c  lwc1        $f13, 0x2C($v0)
    ctx->pc = 0x1b6408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b640c: 0x24450014  addiu       $a1, $v0, 0x14
    ctx->pc = 0x1b640cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1b6410: 0xc44e0028  lwc1        $f14, 0x28($v0)
    ctx->pc = 0x1b6410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1b6414: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x1b6414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x1b6418: 0xc44f000c  lwc1        $f15, 0xC($v0)
    ctx->pc = 0x1b6418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1b641c: 0xc06d01e  jal         func_1B4078
    ctx->pc = 0x1B641Cu;
    SET_GPR_U32(ctx, 31, 0x1B6424u);
    ctx->pc = 0x1B6420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B641Cu;
    // 0x1b6420: 0xc4500008  lwc1        $f16, 0x8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4078u, 0x1B641Cu, 0x1B6424u)) {
        return;
    }
    ctx->pc = 0x1B6424u;
label_1b6424:
    // 0x1b6424: 0x8e2302a4  lw          $v1, 0x2A4($s1)
    ctx->pc = 0x1b6424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 676)));
    // 0x1b6428: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b6428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b642c: 0xae2302a4  sw          $v1, 0x2A4($s1)
    ctx->pc = 0x1b642cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 676), GPR_U32(ctx, 3));
    // 0x1b6430: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x1b6430u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b6434: 0x1600fff2  bnez        $s0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1B6434u;
    {
        const bool branch_taken_0x1b6434 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6434u;
        // 0x1b6438: 0x262900a  movz        $s2, $s3, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6434) {
            ctx->pc = 0x1B6400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6400;
        }
    }
    ctx->pc = 0x1B643Cu;
label_1b643c:
    // 0x1b643c: 0x12400020  beqz        $s2, . + 4 + (0x20 << 2)
    ctx->pc = 0x1B643Cu;
    {
        const bool branch_taken_0x1b643c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B643Cu;
        // 0x1b6440: 0x2630028c  addiu       $s0, $s1, 0x28C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 652));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b643c) {
            ctx->pc = 0x1B64C0u;
            goto label_1b64c0;
        }
    }
    ctx->pc = 0x1B6444u;
    // 0x1b6444: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b6444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b6448: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1B6448u;
    {
        const bool branch_taken_0x1b6448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6448) {
            ctx->pc = 0x1B644Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6448u;
            // 0x1b644c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6474u;
            goto label_1b6474;
        }
    }
    ctx->pc = 0x1B6450u;
    // 0x1b6450: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b6450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b6454: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b6454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b6458:
    // 0x1b6458: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6458u;
    {
        const bool branch_taken_0x1b6458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b6458) {
            ctx->pc = 0x1B6474u;
            goto label_1b6474;
        }
    }
    ctx->pc = 0x1B6460u;
    // 0x1b6460: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1b6460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b6464: 0x0  nop
    ctx->pc = 0x1b6464u;
    // NOP
    // 0x1b6468: 0x5480fffb  bnel        $a0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B6468u;
    {
        const bool branch_taken_0x1b6468 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6468) {
            ctx->pc = 0x1B646Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6468u;
            // 0x1b646c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6458;
        }
    }
    ctx->pc = 0x1B6470u;
    // 0x1b6470: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b6470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b6474:
    // 0x1b6474: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B6474u;
    {
        const bool branch_taken_0x1b6474 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6474) {
            ctx->pc = 0x1B6478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6474u;
            // 0x1b6478: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B64C4u;
            goto label_1b64c4;
        }
    }
    ctx->pc = 0x1B647Cu;
    // 0x1b647c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b647cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b6480: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6480u;
    {
        const bool branch_taken_0x1b6480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6480u;
        // 0x1b6484: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6480) {
            ctx->pc = 0x1B6490u;
            goto label_1b6490;
        }
    }
    ctx->pc = 0x1B6488u;
    // 0x1b6488: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6488u;
    {
        const bool branch_taken_0x1b6488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6488u;
        // 0x1b648c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6488) {
            ctx->pc = 0x1B6494u;
            goto label_1b6494;
        }
    }
    ctx->pc = 0x1B6490u;
label_1b6490:
    // 0x1b6490: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1b6490u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1b6494:
    // 0x1b6494: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1b6494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b6498: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6498u;
    {
        const bool branch_taken_0x1b6498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6498u;
        // 0x1b649c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6498) {
            ctx->pc = 0x1B64A8u;
            goto label_1b64a8;
        }
    }
    ctx->pc = 0x1B64A0u;
    // 0x1b64a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B64A0u;
    {
        const bool branch_taken_0x1b64a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B64A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B64A0u;
        // 0x1b64a4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b64a0) {
            ctx->pc = 0x1B64ACu;
            goto label_1b64ac;
        }
    }
    ctx->pc = 0x1B64A8u;
label_1b64a8:
    // 0x1b64a8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1b64a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1b64ac:
    // 0x1b64ac: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1B64ACu;
    SET_GPR_U32(ctx, 31, 0x1B64B4u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B64ACu, 0x1B64B4u)) {
        return;
    }
    ctx->pc = 0x1B64B4u;
label_1b64b4:
    // 0x1b64b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b64b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b64b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b64b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b64bc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b64bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1b64c0:
    // 0x1b64c0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b64c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b64c4:
    // 0x1b64c4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b64c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b64c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b64c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b64cc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1b64ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b64d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b64d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b64d4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1b64d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b64d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B64D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B64DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B64D8u;
        // 0x1b64dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B64D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B64E0u;
}
