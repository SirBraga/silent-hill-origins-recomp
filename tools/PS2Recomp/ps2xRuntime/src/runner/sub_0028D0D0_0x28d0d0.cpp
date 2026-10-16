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

// Function: sub_0028D0D0
// Address: 0x28d0d0 - 0x28d288
void sub_0028D0D0_0x28d0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D0D0_0x28d0d0");
#endif

    switch (ctx->pc) {
        case 0x28d0d0u: goto label_28d0d0;
        case 0x28d0d4u: goto label_28d0d4;
        case 0x28d0d8u: goto label_28d0d8;
        case 0x28d0dcu: goto label_28d0dc;
        case 0x28d0e0u: goto label_28d0e0;
        case 0x28d0e4u: goto label_28d0e4;
        case 0x28d0e8u: goto label_28d0e8;
        case 0x28d0ecu: goto label_28d0ec;
        case 0x28d0f0u: goto label_28d0f0;
        case 0x28d0f4u: goto label_28d0f4;
        case 0x28d0f8u: goto label_28d0f8;
        case 0x28d0fcu: goto label_28d0fc;
        case 0x28d100u: goto label_28d100;
        case 0x28d104u: goto label_28d104;
        case 0x28d108u: goto label_28d108;
        case 0x28d10cu: goto label_28d10c;
        case 0x28d110u: goto label_28d110;
        case 0x28d114u: goto label_28d114;
        case 0x28d118u: goto label_28d118;
        case 0x28d11cu: goto label_28d11c;
        case 0x28d120u: goto label_28d120;
        case 0x28d124u: goto label_28d124;
        case 0x28d128u: goto label_28d128;
        case 0x28d12cu: goto label_28d12c;
        case 0x28d130u: goto label_28d130;
        case 0x28d134u: goto label_28d134;
        case 0x28d138u: goto label_28d138;
        case 0x28d13cu: goto label_28d13c;
        case 0x28d140u: goto label_28d140;
        case 0x28d144u: goto label_28d144;
        case 0x28d148u: goto label_28d148;
        case 0x28d14cu: goto label_28d14c;
        case 0x28d150u: goto label_28d150;
        case 0x28d154u: goto label_28d154;
        case 0x28d158u: goto label_28d158;
        case 0x28d15cu: goto label_28d15c;
        case 0x28d160u: goto label_28d160;
        case 0x28d164u: goto label_28d164;
        case 0x28d168u: goto label_28d168;
        case 0x28d16cu: goto label_28d16c;
        case 0x28d170u: goto label_28d170;
        case 0x28d174u: goto label_28d174;
        case 0x28d178u: goto label_28d178;
        case 0x28d17cu: goto label_28d17c;
        case 0x28d180u: goto label_28d180;
        case 0x28d184u: goto label_28d184;
        case 0x28d188u: goto label_28d188;
        case 0x28d18cu: goto label_28d18c;
        case 0x28d190u: goto label_28d190;
        case 0x28d194u: goto label_28d194;
        case 0x28d198u: goto label_28d198;
        case 0x28d19cu: goto label_28d19c;
        case 0x28d1a0u: goto label_28d1a0;
        case 0x28d1a4u: goto label_28d1a4;
        case 0x28d1a8u: goto label_28d1a8;
        case 0x28d1acu: goto label_28d1ac;
        case 0x28d1b0u: goto label_28d1b0;
        case 0x28d1b4u: goto label_28d1b4;
        case 0x28d1b8u: goto label_28d1b8;
        case 0x28d1bcu: goto label_28d1bc;
        case 0x28d1c0u: goto label_28d1c0;
        case 0x28d1c4u: goto label_28d1c4;
        case 0x28d1c8u: goto label_28d1c8;
        case 0x28d1ccu: goto label_28d1cc;
        case 0x28d1d0u: goto label_28d1d0;
        case 0x28d1d4u: goto label_28d1d4;
        case 0x28d1d8u: goto label_28d1d8;
        case 0x28d1dcu: goto label_28d1dc;
        case 0x28d1e0u: goto label_28d1e0;
        case 0x28d1e4u: goto label_28d1e4;
        case 0x28d1e8u: goto label_28d1e8;
        case 0x28d1ecu: goto label_28d1ec;
        case 0x28d1f0u: goto label_28d1f0;
        case 0x28d1f4u: goto label_28d1f4;
        case 0x28d1f8u: goto label_28d1f8;
        case 0x28d1fcu: goto label_28d1fc;
        case 0x28d200u: goto label_28d200;
        case 0x28d204u: goto label_28d204;
        case 0x28d208u: goto label_28d208;
        case 0x28d20cu: goto label_28d20c;
        case 0x28d210u: goto label_28d210;
        case 0x28d214u: goto label_28d214;
        case 0x28d218u: goto label_28d218;
        case 0x28d21cu: goto label_28d21c;
        case 0x28d220u: goto label_28d220;
        case 0x28d224u: goto label_28d224;
        case 0x28d228u: goto label_28d228;
        case 0x28d22cu: goto label_28d22c;
        case 0x28d230u: goto label_28d230;
        case 0x28d234u: goto label_28d234;
        case 0x28d238u: goto label_28d238;
        case 0x28d23cu: goto label_28d23c;
        case 0x28d240u: goto label_28d240;
        case 0x28d244u: goto label_28d244;
        case 0x28d248u: goto label_28d248;
        case 0x28d24cu: goto label_28d24c;
        case 0x28d250u: goto label_28d250;
        case 0x28d254u: goto label_28d254;
        case 0x28d258u: goto label_28d258;
        case 0x28d25cu: goto label_28d25c;
        case 0x28d260u: goto label_28d260;
        case 0x28d264u: goto label_28d264;
        case 0x28d268u: goto label_28d268;
        case 0x28d26cu: goto label_28d26c;
        case 0x28d270u: goto label_28d270;
        case 0x28d274u: goto label_28d274;
        case 0x28d278u: goto label_28d278;
        case 0x28d27cu: goto label_28d27c;
        case 0x28d280u: goto label_28d280;
        case 0x28d284u: goto label_28d284;
        default: break;
    }

    ctx->pc = 0x28d0d0u;

label_28d0d0:
    // 0x28d0d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28d0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_28d0d4:
    // 0x28d0d4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x28d0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_28d0d8:
    // 0x28d0d8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x28d0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_28d0dc:
    // 0x28d0dc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28d0dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28d0e0:
    // 0x28d0e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x28d0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_28d0e4:
    // 0x28d0e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28d0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_28d0e8:
    // 0x28d0e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28d0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28d0ec:
    // 0x28d0ec: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x28d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_28d0f0:
    // 0x28d0f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28d0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_28d0f4:
    // 0x28d0f4: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
label_28d0f8:
    if (ctx->pc == 0x28D0F8u) {
        ctx->pc = 0x28D0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0F4u;
        // 0x28d0f8: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D0FCu;
        goto label_28d0fc;
    }
    ctx->pc = 0x28D0F4u;
    {
        const bool branch_taken_0x28d0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0F4u;
        // 0x28d0f8: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d0f4) {
            ctx->pc = 0x28D264u;
            goto label_28d264;
        }
    }
    ctx->pc = 0x28D0FCu;
label_28d0fc:
    // 0x28d0fc: 0xc09294c  jal         func_24A530
label_28d100:
    if (ctx->pc == 0x28D100u) {
        ctx->pc = 0x28D100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0FCu;
        // 0x28d100: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D104u;
        goto label_28d104;
    }
    ctx->pc = 0x28D0FCu;
    SET_GPR_U32(ctx, 31, 0x28D104u);
    ctx->pc = 0x28D100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D0FCu;
    // 0x28d100: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x28D0FCu, 0x28D104u)) {
        return;
    }
    ctx->pc = 0x28D104u;
label_28d104:
    // 0x28d104: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x28d104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_28d108:
    // 0x28d108: 0xc09292a  jal         func_24A4A8
label_28d10c:
    if (ctx->pc == 0x28D10Cu) {
        ctx->pc = 0x28D10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D108u;
        // 0x28d10c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D110u;
        goto label_28d110;
    }
    ctx->pc = 0x28D108u;
    SET_GPR_U32(ctx, 31, 0x28D110u);
    ctx->pc = 0x28D10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D108u;
    // 0x28d10c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x28D108u, 0x28D110u)) {
        return;
    }
    ctx->pc = 0x28D110u;
label_28d110:
    // 0x28d110: 0x1a000045  blez        $s0, . + 4 + (0x45 << 2)
label_28d114:
    if (ctx->pc == 0x28D114u) {
        ctx->pc = 0x28D114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D110u;
        // 0x28d114: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D118u;
        goto label_28d118;
    }
    ctx->pc = 0x28D110u;
    {
        const bool branch_taken_0x28d110 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x28D114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D110u;
        // 0x28d114: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d110) {
            ctx->pc = 0x28D228u;
            goto label_28d228;
        }
    }
    ctx->pc = 0x28D118u;
label_28d118:
    // 0x28d118: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x28d118u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28d11c:
    // 0x28d11c: 0x121023  negu        $v0, $s2
    ctx->pc = 0x28d11cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
label_28d120:
    // 0x28d120: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x28d120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_28d124:
    // 0x28d124: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_28d128:
    if (ctx->pc == 0x28D128u) {
        ctx->pc = 0x28D128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D124u;
        // 0x28d128: 0x26300008  addiu       $s0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D12Cu;
        goto label_28d12c;
    }
    ctx->pc = 0x28D124u;
    {
        const bool branch_taken_0x28d124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D124u;
        // 0x28d128: 0x26300008  addiu       $s0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d124) {
            ctx->pc = 0x28D1A4u;
            goto label_28d1a4;
        }
    }
    ctx->pc = 0x28D12Cu;
label_28d12c:
    // 0x28d12c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x28d12cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_28d130:
    // 0x28d130: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_28d134:
    if (ctx->pc == 0x28D134u) {
        ctx->pc = 0x28D134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D130u;
        // 0x28d134: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D138u;
        goto label_28d138;
    }
    ctx->pc = 0x28D130u;
    {
        const bool branch_taken_0x28d130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D130u;
        // 0x28d134: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d130) {
            ctx->pc = 0x28D180u;
            goto label_28d180;
        }
    }
    ctx->pc = 0x28D138u;
label_28d138:
    // 0x28d138: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_28d13c:
    if (ctx->pc == 0x28D13Cu) {
        ctx->pc = 0x28D13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D138u;
        // 0x28d13c: 0x8e04fffc  lw          $a0, -0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D140u;
        goto label_28d140;
    }
    ctx->pc = 0x28D138u;
    {
        const bool branch_taken_0x28d138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D138u;
        // 0x28d13c: 0x8e04fffc  lw          $a0, -0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d138) {
            ctx->pc = 0x28D160u;
            goto label_28d160;
        }
    }
    ctx->pc = 0x28D140u;
label_28d140:
    // 0x28d140: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_28d144:
    if (ctx->pc == 0x28D144u) {
        ctx->pc = 0x28D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D140u;
        // 0x28d144: 0x26300014  addiu       $s0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D148u;
        goto label_28d148;
    }
    ctx->pc = 0x28D140u;
    {
        const bool branch_taken_0x28d140 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D140u;
        // 0x28d144: 0x26300014  addiu       $s0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d140) {
            ctx->pc = 0x28D158u;
            goto label_28d158;
        }
    }
    ctx->pc = 0x28D148u;
label_28d148:
    // 0x28d148: 0xc0a22a6  jal         func_288A98
label_28d14c:
    if (ctx->pc == 0x28D14Cu) {
        ctx->pc = 0x28D150u;
        goto label_28d150;
    }
    ctx->pc = 0x28D148u;
    SET_GPR_U32(ctx, 31, 0x28D150u);
    ctx->pc = 0x288A98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288A98u, 0x28D148u, 0x28D150u)) {
        return;
    }
    ctx->pc = 0x28D150u;
label_28d150:
    // 0x28d150: 0xc0a3c0c  jal         func_28F030
label_28d154:
    if (ctx->pc == 0x28D154u) {
        ctx->pc = 0x28D154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D150u;
        // 0x28d154: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D158u;
        goto label_28d158;
    }
    ctx->pc = 0x28D150u;
    SET_GPR_U32(ctx, 31, 0x28D158u);
    ctx->pc = 0x28D154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D150u;
    // 0x28d154: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F030u, 0x28D150u, 0x28D158u)) {
        return;
    }
    ctx->pc = 0x28D158u;
label_28d158:
    // 0x28d158: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x28d158u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_28d15c:
    // 0x28d15c: 0x8e04fffc  lw          $a0, -0x4($s0)
    ctx->pc = 0x28d15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
label_28d160:
    // 0x28d160: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_28d164:
    if (ctx->pc == 0x28D164u) {
        ctx->pc = 0x28D164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D160u;
        // 0x28d164: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D168u;
        goto label_28d168;
    }
    ctx->pc = 0x28D160u;
    {
        const bool branch_taken_0x28d160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d160) {
            ctx->pc = 0x28D164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D160u;
            // 0x28d164: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D17Cu;
            goto label_28d17c;
        }
    }
    ctx->pc = 0x28D168u;
label_28d168:
    // 0x28d168: 0xc0a22a6  jal         func_288A98
label_28d16c:
    if (ctx->pc == 0x28D16Cu) {
        ctx->pc = 0x28D170u;
        goto label_28d170;
    }
    ctx->pc = 0x28D168u;
    SET_GPR_U32(ctx, 31, 0x28D170u);
    ctx->pc = 0x288A98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288A98u, 0x28D168u, 0x28D170u)) {
        return;
    }
    ctx->pc = 0x28D170u;
label_28d170:
    // 0x28d170: 0xc0a3c0c  jal         func_28F030
label_28d174:
    if (ctx->pc == 0x28D174u) {
        ctx->pc = 0x28D174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D170u;
        // 0x28d174: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D178u;
        goto label_28d178;
    }
    ctx->pc = 0x28D170u;
    SET_GPR_U32(ctx, 31, 0x28D178u);
    ctx->pc = 0x28D174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D170u;
    // 0x28d174: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F030u, 0x28D170u, 0x28D178u)) {
        return;
    }
    ctx->pc = 0x28D178u;
label_28d178:
    // 0x28d178: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x28d178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_28d17c:
    // 0x28d17c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x28d17cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_28d180:
    // 0x28d180: 0x8e04fffc  lw          $a0, -0x4($s0)
    ctx->pc = 0x28d180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
label_28d184:
    // 0x28d184: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_28d188:
    if (ctx->pc == 0x28D188u) {
        ctx->pc = 0x28D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D184u;
        // 0x28d188: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D18Cu;
        goto label_28d18c;
    }
    ctx->pc = 0x28D184u;
    {
        const bool branch_taken_0x28d184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D184u;
        // 0x28d188: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d184) {
            ctx->pc = 0x28D19Cu;
            goto label_28d19c;
        }
    }
    ctx->pc = 0x28D18Cu;
label_28d18c:
    // 0x28d18c: 0xc0a22a6  jal         func_288A98
label_28d190:
    if (ctx->pc == 0x28D190u) {
        ctx->pc = 0x28D194u;
        goto label_28d194;
    }
    ctx->pc = 0x28D18Cu;
    SET_GPR_U32(ctx, 31, 0x28D194u);
    ctx->pc = 0x288A98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288A98u, 0x28D18Cu, 0x28D194u)) {
        return;
    }
    ctx->pc = 0x28D194u;
label_28d194:
    // 0x28d194: 0xc0a3c0c  jal         func_28F030
label_28d198:
    if (ctx->pc == 0x28D198u) {
        ctx->pc = 0x28D198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D194u;
        // 0x28d198: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D19Cu;
        goto label_28d19c;
    }
    ctx->pc = 0x28D194u;
    SET_GPR_U32(ctx, 31, 0x28D19Cu);
    ctx->pc = 0x28D198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D194u;
    // 0x28d198: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F030u, 0x28D194u, 0x28D19Cu)) {
        return;
    }
    ctx->pc = 0x28D19Cu;
label_28d19c:
    // 0x28d19c: 0x12400022  beqz        $s2, . + 4 + (0x22 << 2)
label_28d1a0:
    if (ctx->pc == 0x28D1A0u) {
        ctx->pc = 0x28D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D19Cu;
        // 0x28d1a0: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D1A4u;
        goto label_28d1a4;
    }
    ctx->pc = 0x28D19Cu;
    {
        const bool branch_taken_0x28d19c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D19Cu;
        // 0x28d1a0: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d19c) {
            ctx->pc = 0x28D228u;
            goto label_28d228;
        }
    }
    ctx->pc = 0x28D1A4u;
label_28d1a4:
    // 0x28d1a4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x28d1a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28d1a8:
    // 0x28d1a8: 0x8e24fffc  lw          $a0, -0x4($s1)
    ctx->pc = 0x28d1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
label_28d1ac:
    // 0x28d1ac: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_28d1b0:
    if (ctx->pc == 0x28D1B0u) {
        ctx->pc = 0x28D1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D1ACu;
        // 0x28d1b0: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D1B4u;
        goto label_28d1b4;
    }
    ctx->pc = 0x28D1ACu;
    {
        const bool branch_taken_0x28d1ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d1ac) {
            ctx->pc = 0x28D1B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D1ACu;
            // 0x28d1b0: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D1C8u;
            goto label_28d1c8;
        }
    }
    ctx->pc = 0x28D1B4u;
label_28d1b4:
    // 0x28d1b4: 0xc0a22a6  jal         func_288A98
label_28d1b8:
    if (ctx->pc == 0x28D1B8u) {
        ctx->pc = 0x28D1BCu;
        goto label_28d1bc;
    }
    ctx->pc = 0x28D1B4u;
    SET_GPR_U32(ctx, 31, 0x28D1BCu);
    ctx->pc = 0x288A98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288A98u, 0x28D1B4u, 0x28D1BCu)) {
        return;
    }
    ctx->pc = 0x28D1BCu;
label_28d1bc:
    // 0x28d1bc: 0xc0a3c0c  jal         func_28F030
label_28d1c0:
    if (ctx->pc == 0x28D1C0u) {
        ctx->pc = 0x28D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D1BCu;
        // 0x28d1c0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D1C4u;
        goto label_28d1c4;
    }
    ctx->pc = 0x28D1BCu;
    SET_GPR_U32(ctx, 31, 0x28D1C4u);
    ctx->pc = 0x28D1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D1BCu;
    // 0x28d1c0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F030u, 0x28D1BCu, 0x28D1C4u)) {
        return;
    }
    ctx->pc = 0x28D1C4u;
label_28d1c4:
    // 0x28d1c4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x28d1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_28d1c8:
    // 0x28d1c8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_28d1cc:
    if (ctx->pc == 0x28D1CCu) {
        ctx->pc = 0x28D1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D1C8u;
        // 0x28d1cc: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D1D0u;
        goto label_28d1d0;
    }
    ctx->pc = 0x28D1C8u;
    {
        const bool branch_taken_0x28d1c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d1c8) {
            ctx->pc = 0x28D1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D1C8u;
            // 0x28d1cc: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D1E4u;
            goto label_28d1e4;
        }
    }
    ctx->pc = 0x28D1D0u;
label_28d1d0:
    // 0x28d1d0: 0xc0a22a6  jal         func_288A98
label_28d1d4:
    if (ctx->pc == 0x28D1D4u) {
        ctx->pc = 0x28D1D8u;
        goto label_28d1d8;
    }
    ctx->pc = 0x28D1D0u;
    SET_GPR_U32(ctx, 31, 0x28D1D8u);
    ctx->pc = 0x288A98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288A98u, 0x28D1D0u, 0x28D1D8u)) {
        return;
    }
    ctx->pc = 0x28D1D8u;
label_28d1d8:
    // 0x28d1d8: 0xc0a3c0c  jal         func_28F030
label_28d1dc:
    if (ctx->pc == 0x28D1DCu) {
        ctx->pc = 0x28D1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D1D8u;
        // 0x28d1dc: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D1E0u;
        goto label_28d1e0;
    }
    ctx->pc = 0x28D1D8u;
    SET_GPR_U32(ctx, 31, 0x28D1E0u);
    ctx->pc = 0x28D1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D1D8u;
    // 0x28d1dc: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F030u, 0x28D1D8u, 0x28D1E0u)) {
        return;
    }
    ctx->pc = 0x28D1E0u;
label_28d1e0:
    // 0x28d1e0: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x28d1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_28d1e4:
    // 0x28d1e4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_28d1e8:
    if (ctx->pc == 0x28D1E8u) {
        ctx->pc = 0x28D1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D1E4u;
        // 0x28d1e8: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D1ECu;
        goto label_28d1ec;
    }
    ctx->pc = 0x28D1E4u;
    {
        const bool branch_taken_0x28d1e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d1e4) {
            ctx->pc = 0x28D1E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D1E4u;
            // 0x28d1e8: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D200u;
            goto label_28d200;
        }
    }
    ctx->pc = 0x28D1ECu;
label_28d1ec:
    // 0x28d1ec: 0xc0a22a6  jal         func_288A98
label_28d1f0:
    if (ctx->pc == 0x28D1F0u) {
        ctx->pc = 0x28D1F4u;
        goto label_28d1f4;
    }
    ctx->pc = 0x28D1ECu;
    SET_GPR_U32(ctx, 31, 0x28D1F4u);
    ctx->pc = 0x288A98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288A98u, 0x28D1ECu, 0x28D1F4u)) {
        return;
    }
    ctx->pc = 0x28D1F4u;
label_28d1f4:
    // 0x28d1f4: 0xc0a3c0c  jal         func_28F030
label_28d1f8:
    if (ctx->pc == 0x28D1F8u) {
        ctx->pc = 0x28D1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D1F4u;
        // 0x28d1f8: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D1FCu;
        goto label_28d1fc;
    }
    ctx->pc = 0x28D1F4u;
    SET_GPR_U32(ctx, 31, 0x28D1FCu);
    ctx->pc = 0x28D1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D1F4u;
    // 0x28d1f8: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F030u, 0x28D1F4u, 0x28D1FCu)) {
        return;
    }
    ctx->pc = 0x28D1FCu;
label_28d1fc:
    // 0x28d1fc: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x28d1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_28d200:
    // 0x28d200: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_28d204:
    if (ctx->pc == 0x28D204u) {
        ctx->pc = 0x28D204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D200u;
        // 0x28d204: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D208u;
        goto label_28d208;
    }
    ctx->pc = 0x28D200u;
    {
        const bool branch_taken_0x28d200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d200) {
            ctx->pc = 0x28D204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D200u;
            // 0x28d204: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D21Cu;
            goto label_28d21c;
        }
    }
    ctx->pc = 0x28D208u;
label_28d208:
    // 0x28d208: 0xc0a22a6  jal         func_288A98
label_28d20c:
    if (ctx->pc == 0x28D20Cu) {
        ctx->pc = 0x28D210u;
        goto label_28d210;
    }
    ctx->pc = 0x28D208u;
    SET_GPR_U32(ctx, 31, 0x28D210u);
    ctx->pc = 0x288A98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288A98u, 0x28D208u, 0x28D210u)) {
        return;
    }
    ctx->pc = 0x28D210u;
label_28d210:
    // 0x28d210: 0xc0a3c0c  jal         func_28F030
label_28d214:
    if (ctx->pc == 0x28D214u) {
        ctx->pc = 0x28D214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D210u;
        // 0x28d214: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D218u;
        goto label_28d218;
    }
    ctx->pc = 0x28D210u;
    SET_GPR_U32(ctx, 31, 0x28D218u);
    ctx->pc = 0x28D214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D210u;
    // 0x28d214: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F030u, 0x28D210u, 0x28D218u)) {
        return;
    }
    ctx->pc = 0x28D218u;
label_28d218:
    // 0x28d218: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x28d218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_28d21c:
    // 0x28d21c: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x28d21cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
label_28d220:
    // 0x28d220: 0x1640ffe1  bnez        $s2, . + 4 + (-0x1F << 2)
label_28d224:
    if (ctx->pc == 0x28D224u) {
        ctx->pc = 0x28D224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D220u;
        // 0x28d224: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D228u;
        goto label_28d228;
    }
    ctx->pc = 0x28D220u;
    {
        const bool branch_taken_0x28d220 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D220u;
        // 0x28d224: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d220) {
            ctx->pc = 0x28D1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d1a8;
        }
    }
    ctx->pc = 0x28D228u;
label_28d228:
    // 0x28d228: 0xc092932  jal         func_24A4C8
label_28d22c:
    if (ctx->pc == 0x28D22Cu) {
        ctx->pc = 0x28D22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D228u;
        // 0x28d22c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D230u;
        goto label_28d230;
    }
    ctx->pc = 0x28D228u;
    SET_GPR_U32(ctx, 31, 0x28D230u);
    ctx->pc = 0x28D22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D228u;
    // 0x28d22c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4C8u, 0x28D228u, 0x28D230u)) {
        return;
    }
    ctx->pc = 0x28D230u;
label_28d230:
    // 0x28d230: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x28d230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_28d234:
    // 0x28d234: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_28d238:
    if (ctx->pc == 0x28D238u) {
        ctx->pc = 0x28D238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D234u;
        // 0x28d238: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D23Cu;
        goto label_28d23c;
    }
    ctx->pc = 0x28D234u;
    {
        const bool branch_taken_0x28d234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d234) {
            ctx->pc = 0x28D238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D234u;
            // 0x28d238: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D24Cu;
            goto label_28d24c;
        }
    }
    ctx->pc = 0x28D23Cu;
label_28d23c:
    // 0x28d23c: 0xc095b08  jal         func_256C20
label_28d240:
    if (ctx->pc == 0x28D240u) {
        ctx->pc = 0x28D244u;
        goto label_28d244;
    }
    ctx->pc = 0x28D23Cu;
    SET_GPR_U32(ctx, 31, 0x28D244u);
    ctx->pc = 0x256C20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256C20u, 0x28D23Cu, 0x28D244u)) {
        return;
    }
    ctx->pc = 0x28D244u;
label_28d244:
    // 0x28d244: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x28d244u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_28d248:
    // 0x28d248: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x28d248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_28d24c:
    // 0x28d24c: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x28d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_28d250:
    // 0x28d250: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x28d250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_28d254:
    // 0x28d254: 0x60f809  jalr        $v1
label_28d258:
    if (ctx->pc == 0x28D258u) {
        ctx->pc = 0x28D258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D254u;
        // 0x28d258: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D25Cu;
        goto label_28d25c;
    }
    ctx->pc = 0x28D254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x28D25Cu);
        ctx->pc = 0x28D258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D254u;
        // 0x28d258: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D254u, 0x28D25Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28D25Cu;
label_28d25c:
    // 0x28d25c: 0x10000002  b           . + 4 + (0x2 << 2)
label_28d260:
    if (ctx->pc == 0x28D260u) {
        ctx->pc = 0x28D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D25Cu;
        // 0x28d260: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D264u;
        goto label_28d264;
    }
    ctx->pc = 0x28D25Cu;
    {
        const bool branch_taken_0x28d25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D25Cu;
        // 0x28d260: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d25c) {
            ctx->pc = 0x28D268u;
            goto label_28d268;
        }
    }
    ctx->pc = 0x28D264u;
label_28d264:
    // 0x28d264: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28d264u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d268:
    // 0x28d268: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x28d268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28d26c:
    // 0x28d26c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x28d26cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28d270:
    // 0x28d270: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28d270u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28d274:
    // 0x28d274: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x28d274u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28d278:
    // 0x28d278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28d278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28d27c:
    // 0x28d27c: 0x3e00008  jr          $ra
label_28d280:
    if (ctx->pc == 0x28D280u) {
        ctx->pc = 0x28D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D27Cu;
        // 0x28d280: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D284u;
        goto label_28d284;
    }
    ctx->pc = 0x28D27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D27Cu;
        // 0x28d280: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D27Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D284u;
label_28d284:
    // 0x28d284: 0x0  nop
    ctx->pc = 0x28d284u;
    // NOP
    ctx->pc = 0x28d288u;
}
