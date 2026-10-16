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

// Function: sub_001B6260
// Address: 0x1b6260 - 0x1b63c8
void sub_001B6260_0x1b6260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6260_0x1b6260");
#endif

    switch (ctx->pc) {
        case 0x1b628cu: goto label_1b628c;
        case 0x1b62a0u: goto label_1b62a0;
        case 0x1b62bcu: goto label_1b62bc;
        case 0x1b62ccu: goto label_1b62cc;
        case 0x1b636cu: goto label_1b636c;
        default: break;
    }

    ctx->pc = 0x1b6260u;

    // 0x1b6260: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b6260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b6264: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b6264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1b6268: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b6268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b626c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1b626cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1b6270: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b6270u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6274: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1b6274u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b6278: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1b6278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1b627c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1b627cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1b6280: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b6280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b6284: 0xc06daae  jal         func_1B6AB8
    ctx->pc = 0x1B6284u;
    SET_GPR_U32(ctx, 31, 0x1B628Cu);
    ctx->pc = 0x1B6288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6284u;
    // 0x1b6288: 0xafb30000  sw          $s3, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6AB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6AB8u, 0x1B6284u, 0x1B628Cu)) {
        return;
    }
    ctx->pc = 0x1B628Cu;
label_1b628c:
    // 0x1b628c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b628cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6290: 0x12000045  beqz        $s0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1B6290u;
    {
        const bool branch_taken_0x1b6290 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6290u;
        // 0x1b6294: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6290) {
            ctx->pc = 0x1B63A8u;
            goto label_1b63a8;
        }
    }
    ctx->pc = 0x1B6298u;
    // 0x1b6298: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B6298u;
    SET_GPR_U32(ctx, 31, 0x1B62A0u);
    ctx->pc = 0x1B629Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6298u;
    // 0x1b629c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B6298u, 0x1B62A0u)) {
        return;
    }
    ctx->pc = 0x1B62A0u;
label_1b62a0:
    // 0x1b62a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b62a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b62a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b62a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b62a8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b62a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b62ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b62acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b62b0: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1b62b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x1b62b4: 0xc06daf4  jal         func_1B6BD0
    ctx->pc = 0x1B62B4u;
    SET_GPR_U32(ctx, 31, 0x1B62BCu);
    ctx->pc = 0x1B62B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B62B4u;
    // 0x1b62b8: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6BD0u, 0x1B62B4u, 0x1B62BCu)) {
        return;
    }
    ctx->pc = 0x1B62BCu;
label_1b62bc:
    // 0x1b62bc: 0xafb30004  sw          $s3, 0x4($sp)
    ctx->pc = 0x1b62bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 19));
    // 0x1b62c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b62c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b62c4: 0xc06da68  jal         func_1B69A0
    ctx->pc = 0x1B62C4u;
    SET_GPR_U32(ctx, 31, 0x1B62CCu);
    ctx->pc = 0x1B62C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B62C4u;
    // 0x1b62c8: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B69A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B69A0u, 0x1B62C4u, 0x1B62CCu)) {
        return;
    }
    ctx->pc = 0x1B62CCu;
label_1b62cc:
    // 0x1b62cc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1B62CCu;
    {
        const bool branch_taken_0x1b62cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B62D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B62CCu;
        // 0x1b62d0: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b62cc) {
            ctx->pc = 0x1B6350u;
            goto label_1b6350;
        }
    }
    ctx->pc = 0x1B62D4u;
    // 0x1b62d4: 0x1473000e  bne         $v1, $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x1B62D4u;
    {
        const bool branch_taken_0x1b62d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x1B62D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B62D4u;
        // 0x1b62d8: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b62d4) {
            ctx->pc = 0x1B6310u;
            goto label_1b6310;
        }
    }
    ctx->pc = 0x1B62DCu;
    // 0x1b62dc: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1b62dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1b62e0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B62E0u;
    {
        const bool branch_taken_0x1b62e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B62E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B62E0u;
        // 0x1b62e4: 0x2c420002  sltiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b62e0) {
            ctx->pc = 0x1B62F8u;
            goto label_1b62f8;
        }
    }
    ctx->pc = 0x1B62E8u;
    // 0x1b62e8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1b62e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1b62ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b62ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b62f0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1B62F0u;
    {
        const bool branch_taken_0x1b62f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B62F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B62F0u;
        // 0x1b62f4: 0xc620001c  lwc1        $f0, 0x1C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b62f0) {
            ctx->pc = 0x1B6340u;
            goto label_1b6340;
        }
    }
    ctx->pc = 0x1B62F8u;
label_1b62f8:
    // 0x1b62f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B62F8u;
    {
        const bool branch_taken_0x1b62f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B62FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B62F8u;
        // 0x1b62fc: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b62f8) {
            ctx->pc = 0x1B6310u;
            goto label_1b6310;
        }
    }
    ctx->pc = 0x1B6300u;
    // 0x1b6300: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1b6300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1b6304: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b6304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b6308: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B6308u;
    {
        const bool branch_taken_0x1b6308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6308u;
        // 0x1b630c: 0xc620001c  lwc1        $f0, 0x1C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6308) {
            ctx->pc = 0x1B6340u;
            goto label_1b6340;
        }
    }
    ctx->pc = 0x1B6310u;
label_1b6310:
    // 0x1b6310: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B6310u;
    {
        const bool branch_taken_0x1b6310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6310u;
        // 0x1b6314: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6310) {
            ctx->pc = 0x1B6334u;
            goto label_1b6334;
        }
    }
    ctx->pc = 0x1B6318u;
    // 0x1b6318: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1b6318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1b631c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B631Cu;
    {
        const bool branch_taken_0x1b631c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B6320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B631Cu;
        // 0x1b6320: 0xc620001c  lwc1        $f0, 0x1C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b631c) {
            ctx->pc = 0x1B6338u;
            goto label_1b6338;
        }
    }
    ctx->pc = 0x1B6324u;
    // 0x1b6324: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x1b6324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x1b6328: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b6328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b632c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B632Cu;
    {
        const bool branch_taken_0x1b632c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B632Cu;
        // 0x1b6330: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b632c) {
            ctx->pc = 0x1B6348u;
            goto label_1b6348;
        }
    }
    ctx->pc = 0x1B6334u;
label_1b6334:
    // 0x1b6334: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x1b6334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6338:
    // 0x1b6338: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1b6338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1b633c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b633cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b6340:
    // 0x1b6340: 0x0  nop
    ctx->pc = 0x1b6340u;
    // NOP
    // 0x1b6344: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b6344u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b6348:
    // 0x1b6348: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6348u;
    {
        const bool branch_taken_0x1b6348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6348u;
        // 0x1b634c: 0xe640029c  swc1        $f0, 0x29C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 668), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6348) {
            ctx->pc = 0x1B6358u;
            goto label_1b6358;
        }
    }
    ctx->pc = 0x1B6350u;
label_1b6350:
    // 0x1b6350: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b6350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6354: 0xae4202a0  sw          $v0, 0x2A0($s2)
    ctx->pc = 0x1b6354u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 672), GPR_U32(ctx, 2));
label_1b6358:
    // 0x1b6358: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1b6358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1b635c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1b635cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b6360: 0x2650028c  addiu       $s0, $s2, 0x28C
    ctx->pc = 0x1b6360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 652));
    // 0x1b6364: 0xc080858  jal         func_202160
    ctx->pc = 0x1B6364u;
    SET_GPR_U32(ctx, 31, 0x1B636Cu);
    ctx->pc = 0x1B6368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6364u;
    // 0x1b6368: 0xae420268  sw          $v0, 0x268($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 616), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x1B6364u, 0x1B636Cu)) {
        return;
    }
    ctx->pc = 0x1B636Cu;
label_1b636c:
    // 0x1b636c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b636cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6370: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1b6370u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x1b6374: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b6374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b6378: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1b6378u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1b637c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1b637cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1b6380: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b6380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b6384: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B6384u;
    {
        const bool branch_taken_0x1b6384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6384) {
            ctx->pc = 0x1B6388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6384u;
            // 0x1b6388: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B638Cu;
            goto label_1b638c;
        }
    }
    ctx->pc = 0x1B638Cu;
label_1b638c:
    // 0x1b638c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b638cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b6390: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B6390u;
    {
        const bool branch_taken_0x1b6390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6390) {
            ctx->pc = 0x1B6394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6390u;
            // 0x1b6394: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6398u;
            goto label_1b6398;
        }
    }
    ctx->pc = 0x1B6398u;
label_1b6398:
    // 0x1b6398: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1b6398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1b639c: 0x8e42028c  lw          $v0, 0x28C($s2)
    ctx->pc = 0x1b639cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 652)));
    // 0x1b63a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b63a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b63a4: 0xae42028c  sw          $v0, 0x28C($s2)
    ctx->pc = 0x1b63a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 652), GPR_U32(ctx, 2));
label_1b63a8:
    // 0x1b63a8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1b63a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b63ac: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1b63acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b63b0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b63b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b63b4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1b63b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b63b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b63b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b63bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B63BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B63C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B63BCu;
        // 0x1b63c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B63BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B63C4u;
    // 0x1b63c4: 0x0  nop
    ctx->pc = 0x1b63c4u;
    // NOP
    ctx->pc = 0x1b63c8u;
}
