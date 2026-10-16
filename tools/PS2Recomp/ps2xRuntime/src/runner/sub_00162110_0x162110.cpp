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

// Function: sub_00162110
// Address: 0x162110 - 0x1622a8
void sub_00162110_0x162110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162110_0x162110");
#endif

    switch (ctx->pc) {
        case 0x16212cu: goto label_16212c;
        case 0x162140u: goto label_162140;
        case 0x162158u: goto label_162158;
        case 0x162284u: goto label_162284;
        default: break;
    }

    ctx->pc = 0x162110u;

    // 0x162110: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x162110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x162114: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x162114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x162118: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x162118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16211c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16211cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162120: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x162120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x162124: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x162124u;
    SET_GPR_U32(ctx, 31, 0x16212Cu);
    ctx->pc = 0x162128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162124u;
    // 0x162128: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x162124u, 0x16212Cu)) {
        return;
    }
    ctx->pc = 0x16212Cu;
label_16212c:
    // 0x16212c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x16212cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x162130: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x162130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162134: 0x8c46f5b8  lw          $a2, -0xA48($v0)
    ctx->pc = 0x162134u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF5B8u));
    // 0x162138: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x162138u;
    SET_GPR_U32(ctx, 31, 0x162140u);
    ctx->pc = 0x16213Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162138u;
    // 0x16213c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x162138u, 0x162140u)) {
        return;
    }
    ctx->pc = 0x162140u;
label_162140:
    // 0x162140: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x162140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162144: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x162144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x162148: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x162148u;
    {
        const bool branch_taken_0x162148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162148u;
        // 0x16214c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162148) {
            ctx->pc = 0x162298u;
            goto label_162298;
        }
    }
    ctx->pc = 0x162150u;
    // 0x162150: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x162150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162154: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x162154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_162158:
    // 0x162158: 0x2c83000e  sltiu       $v1, $a0, 0xE
    ctx->pc = 0x162158u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x16215c: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x16215Cu;
    {
        const bool branch_taken_0x16215c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x162160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16215Cu;
        // 0x162160: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16215c) {
            ctx->pc = 0x162268u;
            goto label_162268;
        }
    }
    ctx->pc = 0x162164u;
    // 0x162164: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x162164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x162168: 0x244238b0  addiu       $v0, $v0, 0x38B0
    ctx->pc = 0x162168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14512));
    // 0x16216c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16216cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x162170: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x162170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x162174: 0x800008  jr          $a0
    ctx->pc = 0x162174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16217Cu: goto label_16217c;
            case 0x16219Cu: goto label_16219c;
            case 0x1621ACu: goto label_1621ac;
            case 0x1621BCu: goto label_1621bc;
            case 0x1621CCu: goto label_1621cc;
            case 0x1621DCu: goto label_1621dc;
            case 0x1621ECu: goto label_1621ec;
            case 0x1621FCu: goto label_1621fc;
            case 0x16220Cu: goto label_16220c;
            case 0x16221Cu: goto label_16221c;
            case 0x16222Cu: goto label_16222c;
            case 0x16223Cu: goto label_16223c;
            case 0x16224Cu: goto label_16224c;
            case 0x16225Cu: goto label_16225c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162174u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16217Cu;
label_16217c:
    // 0x16217c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16217cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162180: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x162180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x162184: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x162184u;
    {
        const bool branch_taken_0x162184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x162188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162184u;
        // 0x162188: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162184) {
            ctx->pc = 0x162194u;
            goto label_162194;
        }
    }
    ctx->pc = 0x16218Cu;
    // 0x16218c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x16218Cu;
    {
        const bool branch_taken_0x16218c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16218Cu;
        // 0x162190: 0xae22004c  sw          $v0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16218c) {
            ctx->pc = 0x162268u;
            goto label_162268;
        }
    }
    ctx->pc = 0x162194u;
label_162194:
    // 0x162194: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x162194u;
    {
        const bool branch_taken_0x162194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162194u;
        // 0x162198: 0xae20004c  sw          $zero, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162194) {
            ctx->pc = 0x162268u;
            goto label_162268;
        }
    }
    ctx->pc = 0x16219Cu;
label_16219c:
    // 0x16219c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16219cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1621a0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1621a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1621a4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1621A4u;
    {
        const bool branch_taken_0x1621a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1621A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1621A4u;
        // 0x1621a8: 0xe6200050  swc1        $f0, 0x50($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1621a4) {
            ctx->pc = 0x162268u;
            goto label_162268;
        }
    }
    ctx->pc = 0x1621ACu;
label_1621ac:
    // 0x1621ac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1621acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1621b0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1621b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1621b4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1621B4u;
    {
        const bool branch_taken_0x1621b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1621B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1621B4u;
        // 0x1621b8: 0xe6200054  swc1        $f0, 0x54($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1621b4) {
            ctx->pc = 0x162268u;
            goto label_162268;
        }
    }
    ctx->pc = 0x1621BCu;
label_1621bc:
    // 0x1621bc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1621bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1621c0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1621c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1621c4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1621C4u;
    {
        const bool branch_taken_0x1621c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1621C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1621C4u;
        // 0x1621c8: 0xe6200058  swc1        $f0, 0x58($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1621c4) {
            ctx->pc = 0x162268u;
            goto label_162268;
        }
    }
    ctx->pc = 0x1621CCu;
label_1621cc:
    // 0x1621cc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1621ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1621d0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1621d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1621d4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1621D4u;
    {
        const bool branch_taken_0x1621d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1621D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1621D4u;
        // 0x1621d8: 0xe620005c  swc1        $f0, 0x5C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1621d4) {
            ctx->pc = 0x162268u;
            goto label_162268;
        }
    }
    ctx->pc = 0x1621DCu;
label_1621dc:
    // 0x1621dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1621dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1621e0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1621e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1621e4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1621E4u;
    {
        const bool branch_taken_0x1621e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1621E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1621E4u;
        // 0x1621e8: 0xe6200060  swc1        $f0, 0x60($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1621e4) {
            ctx->pc = 0x162268u;
            goto label_162268;
        }
    }
    ctx->pc = 0x1621ECu;
label_1621ec:
    // 0x1621ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1621ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1621f0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1621f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1621f4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1621F4u;
    {
        const bool branch_taken_0x1621f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1621F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1621F4u;
        // 0x1621f8: 0xe6200084  swc1        $f0, 0x84($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1621f4) {
            ctx->pc = 0x162268u;
            goto label_162268;
        }
    }
    ctx->pc = 0x1621FCu;
label_1621fc:
    // 0x1621fc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1621fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162200: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x162200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162204: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x162204u;
    {
        const bool branch_taken_0x162204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162204u;
        // 0x162208: 0xe6200088  swc1        $f0, 0x88($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x162204) {
            ctx->pc = 0x162268u;
            goto label_162268;
        }
    }
    ctx->pc = 0x16220Cu;
label_16220c:
    // 0x16220c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16220cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162210: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x162210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162214: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x162214u;
    {
        const bool branch_taken_0x162214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162214u;
        // 0x162218: 0xe620008c  swc1        $f0, 0x8C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x162214) {
            ctx->pc = 0x162268u;
            goto label_162268;
        }
    }
    ctx->pc = 0x16221Cu;
label_16221c:
    // 0x16221c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16221cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162220: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x162220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162224: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x162224u;
    {
        const bool branch_taken_0x162224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162224u;
        // 0x162228: 0xe6200090  swc1        $f0, 0x90($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x162224) {
            ctx->pc = 0x162268u;
            goto label_162268;
        }
    }
    ctx->pc = 0x16222Cu;
label_16222c:
    // 0x16222c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16222cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162230: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x162230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162234: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x162234u;
    {
        const bool branch_taken_0x162234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162234u;
        // 0x162238: 0xe6200074  swc1        $f0, 0x74($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x162234) {
            ctx->pc = 0x162268u;
            goto label_162268;
        }
    }
    ctx->pc = 0x16223Cu;
label_16223c:
    // 0x16223c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16223cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162240: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x162240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162244: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x162244u;
    {
        const bool branch_taken_0x162244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162244u;
        // 0x162248: 0xe6200078  swc1        $f0, 0x78($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x162244) {
            ctx->pc = 0x162268u;
            goto label_162268;
        }
    }
    ctx->pc = 0x16224Cu;
label_16224c:
    // 0x16224c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16224cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162250: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x162250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162254: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x162254u;
    {
        const bool branch_taken_0x162254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162254u;
        // 0x162258: 0xe620007c  swc1        $f0, 0x7C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x162254) {
            ctx->pc = 0x162268u;
            goto label_162268;
        }
    }
    ctx->pc = 0x16225Cu;
label_16225c:
    // 0x16225c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16225cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162260: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x162260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162264: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x162264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
label_162268:
    // 0x162268: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x162268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16226c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16226cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162270: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x162270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162274: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x162274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x162278: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x162278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16227c: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x16227Cu;
    SET_GPR_U32(ctx, 31, 0x162284u);
    ctx->pc = 0x162280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16227Cu;
    // 0x162280: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x16227Cu, 0x162284u)) {
        return;
    }
    ctx->pc = 0x162284u;
label_162284:
    // 0x162284: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x162284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162288: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x162288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16228c: 0x5460ffb2  bnel        $v1, $zero, . + 4 + (-0x4E << 2)
    ctx->pc = 0x16228Cu;
    {
        const bool branch_taken_0x16228c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16228c) {
            ctx->pc = 0x162290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16228Cu;
            // 0x162290: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162158;
        }
    }
    ctx->pc = 0x162294u;
    // 0x162294: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x162294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_162298:
    // 0x162298: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x162298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16229c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16229cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1622a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1622A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1622A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1622A0u;
        // 0x1622a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1622A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1622A8u;
}
