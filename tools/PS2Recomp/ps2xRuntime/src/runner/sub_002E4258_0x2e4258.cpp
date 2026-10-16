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

// Function: sub_002E4258
// Address: 0x2e4258 - 0x2e4360
void sub_002E4258_0x2e4258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4258_0x2e4258");
#endif

    switch (ctx->pc) {
        case 0x2e4258u: goto label_2e4258;
        case 0x2e425cu: goto label_2e425c;
        case 0x2e4260u: goto label_2e4260;
        case 0x2e4264u: goto label_2e4264;
        case 0x2e4268u: goto label_2e4268;
        case 0x2e426cu: goto label_2e426c;
        case 0x2e4270u: goto label_2e4270;
        case 0x2e4274u: goto label_2e4274;
        case 0x2e4278u: goto label_2e4278;
        case 0x2e427cu: goto label_2e427c;
        case 0x2e4280u: goto label_2e4280;
        case 0x2e4284u: goto label_2e4284;
        case 0x2e4288u: goto label_2e4288;
        case 0x2e428cu: goto label_2e428c;
        case 0x2e4290u: goto label_2e4290;
        case 0x2e4294u: goto label_2e4294;
        case 0x2e4298u: goto label_2e4298;
        case 0x2e429cu: goto label_2e429c;
        case 0x2e42a0u: goto label_2e42a0;
        case 0x2e42a4u: goto label_2e42a4;
        case 0x2e42a8u: goto label_2e42a8;
        case 0x2e42acu: goto label_2e42ac;
        case 0x2e42b0u: goto label_2e42b0;
        case 0x2e42b4u: goto label_2e42b4;
        case 0x2e42b8u: goto label_2e42b8;
        case 0x2e42bcu: goto label_2e42bc;
        case 0x2e42c0u: goto label_2e42c0;
        case 0x2e42c4u: goto label_2e42c4;
        case 0x2e42c8u: goto label_2e42c8;
        case 0x2e42ccu: goto label_2e42cc;
        case 0x2e42d0u: goto label_2e42d0;
        case 0x2e42d4u: goto label_2e42d4;
        case 0x2e42d8u: goto label_2e42d8;
        case 0x2e42dcu: goto label_2e42dc;
        case 0x2e42e0u: goto label_2e42e0;
        case 0x2e42e4u: goto label_2e42e4;
        case 0x2e42e8u: goto label_2e42e8;
        case 0x2e42ecu: goto label_2e42ec;
        case 0x2e42f0u: goto label_2e42f0;
        case 0x2e42f4u: goto label_2e42f4;
        case 0x2e42f8u: goto label_2e42f8;
        case 0x2e42fcu: goto label_2e42fc;
        case 0x2e4300u: goto label_2e4300;
        case 0x2e4304u: goto label_2e4304;
        case 0x2e4308u: goto label_2e4308;
        case 0x2e430cu: goto label_2e430c;
        case 0x2e4310u: goto label_2e4310;
        case 0x2e4314u: goto label_2e4314;
        case 0x2e4318u: goto label_2e4318;
        case 0x2e431cu: goto label_2e431c;
        case 0x2e4320u: goto label_2e4320;
        case 0x2e4324u: goto label_2e4324;
        case 0x2e4328u: goto label_2e4328;
        case 0x2e432cu: goto label_2e432c;
        case 0x2e4330u: goto label_2e4330;
        case 0x2e4334u: goto label_2e4334;
        case 0x2e4338u: goto label_2e4338;
        case 0x2e433cu: goto label_2e433c;
        case 0x2e4340u: goto label_2e4340;
        case 0x2e4344u: goto label_2e4344;
        case 0x2e4348u: goto label_2e4348;
        case 0x2e434cu: goto label_2e434c;
        case 0x2e4350u: goto label_2e4350;
        case 0x2e4354u: goto label_2e4354;
        case 0x2e4358u: goto label_2e4358;
        case 0x2e435cu: goto label_2e435c;
        default: break;
    }

    ctx->pc = 0x2e4258u;

label_2e4258:
    // 0x2e4258: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e4258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2e425c:
    // 0x2e425c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e425cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2e4260:
    // 0x2e4260: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2e4260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2e4264:
    // 0x2e4264: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e4264u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e4268:
    // 0x2e4268: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2e4268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2e426c:
    // 0x2e426c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2e426cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e4270:
    // 0x2e4270: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2e4270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_2e4274:
    // 0x2e4274: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e4274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e4278:
    // 0x2e4278: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2e4278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2e427c:
    // 0x2e427c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2e427cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2e4280:
    // 0x2e4280: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e4280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2e4284:
    // 0x2e4284: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x2e4284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2e4288:
    // 0x2e4288: 0x30a20008  andi        $v0, $a1, 0x8
    ctx->pc = 0x2e4288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
label_2e428c:
    // 0x2e428c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2e4290:
    if (ctx->pc == 0x2E4290u) {
        ctx->pc = 0x2E4290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E428Cu;
        // 0x2e4290: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4294u;
        goto label_2e4294;
    }
    ctx->pc = 0x2E428Cu;
    {
        const bool branch_taken_0x2e428c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E428Cu;
        // 0x2e4290: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e428c) {
            ctx->pc = 0x2E429Cu;
            goto label_2e429c;
        }
    }
    ctx->pc = 0x2E4294u;
label_2e4294:
    // 0x2e4294: 0x10000009  b           . + 4 + (0x9 << 2)
label_2e4298:
    if (ctx->pc == 0x2E4298u) {
        ctx->pc = 0x2E4298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4294u;
        // 0x2e4298: 0x8e10fffc  lw          $s0, -0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E429Cu;
        goto label_2e429c;
    }
    ctx->pc = 0x2E4294u;
    {
        const bool branch_taken_0x2e4294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4294u;
        // 0x2e4298: 0x8e10fffc  lw          $s0, -0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4294) {
            ctx->pc = 0x2E42BCu;
            goto label_2e42bc;
        }
    }
    ctx->pc = 0x2E429Cu;
label_2e429c:
    // 0x2e429c: 0x30a20010  andi        $v0, $a1, 0x10
    ctx->pc = 0x2e429cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
label_2e42a0:
    // 0x2e42a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2e42a4:
    if (ctx->pc == 0x2E42A4u) {
        ctx->pc = 0x2E42A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E42A0u;
        // 0x2e42a4: 0x30a50007  andi        $a1, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E42A8u;
        goto label_2e42a8;
    }
    ctx->pc = 0x2E42A0u;
    {
        const bool branch_taken_0x2e42a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E42A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E42A0u;
        // 0x2e42a4: 0x30a50007  andi        $a1, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e42a0) {
            ctx->pc = 0x2E42BCu;
            goto label_2e42bc;
        }
    }
    ctx->pc = 0x2E42A8u;
label_2e42a8:
    // 0x2e42a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e42a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e42ac:
    // 0x2e42ac: 0xc0b6a00  jal         func_2DA800
label_2e42b0:
    if (ctx->pc == 0x2E42B0u) {
        ctx->pc = 0x2E42B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E42ACu;
        // 0x2e42b0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E42B4u;
        goto label_2e42b4;
    }
    ctx->pc = 0x2E42ACu;
    SET_GPR_U32(ctx, 31, 0x2E42B4u);
    ctx->pc = 0x2E42B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E42ACu;
    // 0x2e42b0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA800u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DA800u, 0x2E42ACu, 0x2E42B4u)) {
        return;
    }
    ctx->pc = 0x2E42B4u;
label_2e42b4:
    // 0x2e42b4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2e42b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2e42b8:
    // 0x2e42b8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2e42b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e42bc:
    // 0x2e42bc: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x2e42bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_2e42c0:
    // 0x2e42c0: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_2e42c4:
    if (ctx->pc == 0x2E42C4u) {
        ctx->pc = 0x2E42C8u;
        goto label_2e42c8;
    }
    ctx->pc = 0x2E42C0u;
    {
        const bool branch_taken_0x2e42c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e42c0) {
            ctx->pc = 0x2E432Cu;
            goto label_2e432c;
        }
    }
    ctx->pc = 0x2E42C8u;
label_2e42c8:
    // 0x2e42c8: 0x52400006  beql        $s2, $zero, . + 4 + (0x6 << 2)
label_2e42cc:
    if (ctx->pc == 0x2E42CCu) {
        ctx->pc = 0x2E42CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E42C8u;
        // 0x2e42cc: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E42D0u;
        goto label_2e42d0;
    }
    ctx->pc = 0x2E42C8u;
    {
        const bool branch_taken_0x2e42c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e42c8) {
            ctx->pc = 0x2E42CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E42C8u;
            // 0x2e42cc: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E42E4u;
            goto label_2e42e4;
        }
    }
    ctx->pc = 0x2E42D0u;
label_2e42d0:
    // 0x2e42d0: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x2e42d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_2e42d4:
    // 0x2e42d4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2e42d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_2e42d8:
    // 0x2e42d8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_2e42dc:
    if (ctx->pc == 0x2E42DCu) {
        ctx->pc = 0x2E42E0u;
        goto label_2e42e0;
    }
    ctx->pc = 0x2E42D8u;
    {
        const bool branch_taken_0x2e42d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e42d8) {
            ctx->pc = 0x2E432Cu;
            goto label_2e432c;
        }
    }
    ctx->pc = 0x2E42E0u;
label_2e42e0:
    // 0x2e42e0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2e42e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2e42e4:
    // 0x2e42e4: 0x30820040  andi        $v0, $a0, 0x40
    ctx->pc = 0x2e42e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
label_2e42e8:
    // 0x2e42e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2e42ec:
    if (ctx->pc == 0x2E42ECu) {
        ctx->pc = 0x2E42ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E42E8u;
        // 0x2e42ec: 0x30820080  andi        $v0, $a0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E42F0u;
        goto label_2e42f0;
    }
    ctx->pc = 0x2E42E8u;
    {
        const bool branch_taken_0x2e42e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E42ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E42E8u;
        // 0x2e42ec: 0x30820080  andi        $v0, $a0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e42e8) {
            ctx->pc = 0x2E4304u;
            goto label_2e4304;
        }
    }
    ctx->pc = 0x2E42F0u;
label_2e42f0:
    // 0x2e42f0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2e42f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2e42f4:
    // 0x2e42f4: 0xc0b81ea  jal         func_2E07A8
label_2e42f8:
    if (ctx->pc == 0x2E42F8u) {
        ctx->pc = 0x2E42F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E42F4u;
        // 0x2e42f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E42FCu;
        goto label_2e42fc;
    }
    ctx->pc = 0x2E42F4u;
    SET_GPR_U32(ctx, 31, 0x2E42FCu);
    ctx->pc = 0x2E42F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E42F4u;
    // 0x2e42f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E07A8u, 0x2E42F4u, 0x2E42FCu)) {
        return;
    }
    ctx->pc = 0x2E42FCu;
label_2e42fc:
    // 0x2e42fc: 0x10000010  b           . + 4 + (0x10 << 2)
label_2e4300:
    if (ctx->pc == 0x2E4300u) {
        ctx->pc = 0x2E4300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E42FCu;
        // 0x2e4300: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4304u;
        goto label_2e4304;
    }
    ctx->pc = 0x2E42FCu;
    {
        const bool branch_taken_0x2e42fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E42FCu;
        // 0x2e4300: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e42fc) {
            ctx->pc = 0x2E4340u;
            goto label_2e4340;
        }
    }
    ctx->pc = 0x2E4304u;
label_2e4304:
    // 0x2e4304: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2e4308:
    if (ctx->pc == 0x2E4308u) {
        ctx->pc = 0x2E4308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4304u;
        // 0x2e4308: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E430Cu;
        goto label_2e430c;
    }
    ctx->pc = 0x2E4304u;
    {
        const bool branch_taken_0x2e4304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4304u;
        // 0x2e4308: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4304) {
            ctx->pc = 0x2E431Cu;
            goto label_2e431c;
        }
    }
    ctx->pc = 0x2E430Cu;
label_2e430c:
    // 0x2e430c: 0xc0b84f0  jal         func_2E13C0
label_2e4310:
    if (ctx->pc == 0x2E4310u) {
        ctx->pc = 0x2E4310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E430Cu;
        // 0x2e4310: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4314u;
        goto label_2e4314;
    }
    ctx->pc = 0x2E430Cu;
    SET_GPR_U32(ctx, 31, 0x2E4314u);
    ctx->pc = 0x2E4310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E430Cu;
    // 0x2e4310: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E13C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E13C0u, 0x2E430Cu, 0x2E4314u)) {
        return;
    }
    ctx->pc = 0x2E4314u;
label_2e4314:
    // 0x2e4314: 0x1000000a  b           . + 4 + (0xA << 2)
label_2e4318:
    if (ctx->pc == 0x2E4318u) {
        ctx->pc = 0x2E4318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4314u;
        // 0x2e4318: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E431Cu;
        goto label_2e431c;
    }
    ctx->pc = 0x2E4314u;
    {
        const bool branch_taken_0x2e4314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4314u;
        // 0x2e4318: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4314) {
            ctx->pc = 0x2E4340u;
            goto label_2e4340;
        }
    }
    ctx->pc = 0x2E431Cu;
label_2e431c:
    // 0x2e431c: 0xc0b7080  jal         func_2DC200
label_2e4320:
    if (ctx->pc == 0x2E4320u) {
        ctx->pc = 0x2E4320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E431Cu;
        // 0x2e4320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4324u;
        goto label_2e4324;
    }
    ctx->pc = 0x2E431Cu;
    SET_GPR_U32(ctx, 31, 0x2E4324u);
    ctx->pc = 0x2E4320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E431Cu;
    // 0x2e4320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2E431Cu, 0x2E4324u)) {
        return;
    }
    ctx->pc = 0x2E4324u;
label_2e4324:
    // 0x2e4324: 0x10000006  b           . + 4 + (0x6 << 2)
label_2e4328:
    if (ctx->pc == 0x2E4328u) {
        ctx->pc = 0x2E4328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4324u;
        // 0x2e4328: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E432Cu;
        goto label_2e432c;
    }
    ctx->pc = 0x2E4324u;
    {
        const bool branch_taken_0x2e4324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4324u;
        // 0x2e4328: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4324) {
            ctx->pc = 0x2E4340u;
            goto label_2e4340;
        }
    }
    ctx->pc = 0x2E432Cu;
label_2e432c:
    // 0x2e432c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_2e4330:
    if (ctx->pc == 0x2E4330u) {
        ctx->pc = 0x2E4330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E432Cu;
        // 0x2e4330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4334u;
        goto label_2e4334;
    }
    ctx->pc = 0x2E432Cu;
    {
        const bool branch_taken_0x2e432c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E432Cu;
        // 0x2e4330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e432c) {
            ctx->pc = 0x2E433Cu;
            goto label_2e433c;
        }
    }
    ctx->pc = 0x2E4334u;
label_2e4334:
    // 0x2e4334: 0x240f809  jalr        $s2
label_2e4338:
    if (ctx->pc == 0x2E4338u) {
        ctx->pc = 0x2E4338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4334u;
        // 0x2e4338: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E433Cu;
        goto label_2e433c;
    }
    ctx->pc = 0x2E4334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x2E433Cu);
        ctx->pc = 0x2E4338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4334u;
        // 0x2e4338: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4334u, 0x2E433Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E433Cu;
label_2e433c:
    // 0x2e433c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2e433cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e4340:
    // 0x2e4340: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2e4340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2e4344:
    // 0x2e4344: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2e4344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e4348:
    // 0x2e4348: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e4348u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e434c:
    // 0x2e434c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2e434cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e4350:
    // 0x2e4350: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e4350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e4354:
    // 0x2e4354: 0x3e00008  jr          $ra
label_2e4358:
    if (ctx->pc == 0x2E4358u) {
        ctx->pc = 0x2E4358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4354u;
        // 0x2e4358: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E435Cu;
        goto label_2e435c;
    }
    ctx->pc = 0x2E4354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4354u;
        // 0x2e4358: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E435Cu;
label_2e435c:
    // 0x2e435c: 0x0  nop
    ctx->pc = 0x2e435cu;
    // NOP
    ctx->pc = 0x2e4360u;
}
