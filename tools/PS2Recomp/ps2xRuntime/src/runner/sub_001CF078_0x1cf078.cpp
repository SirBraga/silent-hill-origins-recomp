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

// Function: sub_001CF078
// Address: 0x1cf078 - 0x1cf220
void sub_001CF078_0x1cf078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF078_0x1cf078");
#endif

    switch (ctx->pc) {
        case 0x1cf078u: goto label_1cf078;
        case 0x1cf07cu: goto label_1cf07c;
        case 0x1cf080u: goto label_1cf080;
        case 0x1cf084u: goto label_1cf084;
        case 0x1cf088u: goto label_1cf088;
        case 0x1cf08cu: goto label_1cf08c;
        case 0x1cf090u: goto label_1cf090;
        case 0x1cf094u: goto label_1cf094;
        case 0x1cf098u: goto label_1cf098;
        case 0x1cf09cu: goto label_1cf09c;
        case 0x1cf0a0u: goto label_1cf0a0;
        case 0x1cf0a4u: goto label_1cf0a4;
        case 0x1cf0a8u: goto label_1cf0a8;
        case 0x1cf0acu: goto label_1cf0ac;
        case 0x1cf0b0u: goto label_1cf0b0;
        case 0x1cf0b4u: goto label_1cf0b4;
        case 0x1cf0b8u: goto label_1cf0b8;
        case 0x1cf0bcu: goto label_1cf0bc;
        case 0x1cf0c0u: goto label_1cf0c0;
        case 0x1cf0c4u: goto label_1cf0c4;
        case 0x1cf0c8u: goto label_1cf0c8;
        case 0x1cf0ccu: goto label_1cf0cc;
        case 0x1cf0d0u: goto label_1cf0d0;
        case 0x1cf0d4u: goto label_1cf0d4;
        case 0x1cf0d8u: goto label_1cf0d8;
        case 0x1cf0dcu: goto label_1cf0dc;
        case 0x1cf0e0u: goto label_1cf0e0;
        case 0x1cf0e4u: goto label_1cf0e4;
        case 0x1cf0e8u: goto label_1cf0e8;
        case 0x1cf0ecu: goto label_1cf0ec;
        case 0x1cf0f0u: goto label_1cf0f0;
        case 0x1cf0f4u: goto label_1cf0f4;
        case 0x1cf0f8u: goto label_1cf0f8;
        case 0x1cf0fcu: goto label_1cf0fc;
        case 0x1cf100u: goto label_1cf100;
        case 0x1cf104u: goto label_1cf104;
        case 0x1cf108u: goto label_1cf108;
        case 0x1cf10cu: goto label_1cf10c;
        case 0x1cf110u: goto label_1cf110;
        case 0x1cf114u: goto label_1cf114;
        case 0x1cf118u: goto label_1cf118;
        case 0x1cf11cu: goto label_1cf11c;
        case 0x1cf120u: goto label_1cf120;
        case 0x1cf124u: goto label_1cf124;
        case 0x1cf128u: goto label_1cf128;
        case 0x1cf12cu: goto label_1cf12c;
        case 0x1cf130u: goto label_1cf130;
        case 0x1cf134u: goto label_1cf134;
        case 0x1cf138u: goto label_1cf138;
        case 0x1cf13cu: goto label_1cf13c;
        case 0x1cf140u: goto label_1cf140;
        case 0x1cf144u: goto label_1cf144;
        case 0x1cf148u: goto label_1cf148;
        case 0x1cf14cu: goto label_1cf14c;
        case 0x1cf150u: goto label_1cf150;
        case 0x1cf154u: goto label_1cf154;
        case 0x1cf158u: goto label_1cf158;
        case 0x1cf15cu: goto label_1cf15c;
        case 0x1cf160u: goto label_1cf160;
        case 0x1cf164u: goto label_1cf164;
        case 0x1cf168u: goto label_1cf168;
        case 0x1cf16cu: goto label_1cf16c;
        case 0x1cf170u: goto label_1cf170;
        case 0x1cf174u: goto label_1cf174;
        case 0x1cf178u: goto label_1cf178;
        case 0x1cf17cu: goto label_1cf17c;
        case 0x1cf180u: goto label_1cf180;
        case 0x1cf184u: goto label_1cf184;
        case 0x1cf188u: goto label_1cf188;
        case 0x1cf18cu: goto label_1cf18c;
        case 0x1cf190u: goto label_1cf190;
        case 0x1cf194u: goto label_1cf194;
        case 0x1cf198u: goto label_1cf198;
        case 0x1cf19cu: goto label_1cf19c;
        case 0x1cf1a0u: goto label_1cf1a0;
        case 0x1cf1a4u: goto label_1cf1a4;
        case 0x1cf1a8u: goto label_1cf1a8;
        case 0x1cf1acu: goto label_1cf1ac;
        case 0x1cf1b0u: goto label_1cf1b0;
        case 0x1cf1b4u: goto label_1cf1b4;
        case 0x1cf1b8u: goto label_1cf1b8;
        case 0x1cf1bcu: goto label_1cf1bc;
        case 0x1cf1c0u: goto label_1cf1c0;
        case 0x1cf1c4u: goto label_1cf1c4;
        case 0x1cf1c8u: goto label_1cf1c8;
        case 0x1cf1ccu: goto label_1cf1cc;
        case 0x1cf1d0u: goto label_1cf1d0;
        case 0x1cf1d4u: goto label_1cf1d4;
        case 0x1cf1d8u: goto label_1cf1d8;
        case 0x1cf1dcu: goto label_1cf1dc;
        case 0x1cf1e0u: goto label_1cf1e0;
        case 0x1cf1e4u: goto label_1cf1e4;
        case 0x1cf1e8u: goto label_1cf1e8;
        case 0x1cf1ecu: goto label_1cf1ec;
        case 0x1cf1f0u: goto label_1cf1f0;
        case 0x1cf1f4u: goto label_1cf1f4;
        case 0x1cf1f8u: goto label_1cf1f8;
        case 0x1cf1fcu: goto label_1cf1fc;
        case 0x1cf200u: goto label_1cf200;
        case 0x1cf204u: goto label_1cf204;
        case 0x1cf208u: goto label_1cf208;
        case 0x1cf20cu: goto label_1cf20c;
        case 0x1cf210u: goto label_1cf210;
        case 0x1cf214u: goto label_1cf214;
        case 0x1cf218u: goto label_1cf218;
        case 0x1cf21cu: goto label_1cf21c;
        default: break;
    }

    ctx->pc = 0x1cf078u;

label_1cf078:
    // 0x1cf078: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1cf078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1cf07c:
    // 0x1cf07c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1cf07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_1cf080:
    // 0x1cf080: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1cf080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1cf084:
    // 0x1cf084: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cf088:
    // 0x1cf088: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x1cf088u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1cf08c:
    // 0x1cf08c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1cf08cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cf090:
    // 0x1cf090: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1cf090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_1cf094:
    // 0x1cf094: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1cf094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_1cf098:
    // 0x1cf098: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1cf098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1cf09c:
    // 0x1cf09c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1cf09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_1cf0a0:
    // 0x1cf0a0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1cf0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_1cf0a4:
    // 0x1cf0a4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1cf0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_1cf0a8:
    // 0x1cf0a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cf0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1cf0ac:
    // 0x1cf0ac: 0x8e02027c  lw          $v0, 0x27C($s0)
    ctx->pc = 0x1cf0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 636)));
label_1cf0b0:
    // 0x1cf0b0: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
label_1cf0b4:
    if (ctx->pc == 0x1CF0B4u) {
        ctx->pc = 0x1CF0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF0B0u;
        // 0x1cf0b4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF0B8u;
        goto label_1cf0b8;
    }
    ctx->pc = 0x1CF0B0u;
    {
        const bool branch_taken_0x1cf0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF0B0u;
        // 0x1cf0b4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf0b0) {
            ctx->pc = 0x1CF1ECu;
            goto label_1cf1ec;
        }
    }
    ctx->pc = 0x1CF0B8u;
label_1cf0b8:
    // 0x1cf0b8: 0xc06ba6c  jal         func_1AE9B0
label_1cf0bc:
    if (ctx->pc == 0x1CF0BCu) {
        ctx->pc = 0x1CF0C0u;
        goto label_1cf0c0;
    }
    ctx->pc = 0x1CF0B8u;
    SET_GPR_U32(ctx, 31, 0x1CF0C0u);
    ctx->pc = 0x1AE9B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE9B0u, 0x1CF0B8u, 0x1CF0C0u)) {
        return;
    }
    ctx->pc = 0x1CF0C0u;
label_1cf0c0:
    // 0x1cf0c0: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1cf0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1cf0c4:
    // 0x1cf0c4: 0x16620030  bne         $s3, $v0, . + 4 + (0x30 << 2)
label_1cf0c8:
    if (ctx->pc == 0x1CF0C8u) {
        ctx->pc = 0x1CF0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF0C4u;
        // 0x1cf0c8: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF0CCu;
        goto label_1cf0cc;
    }
    ctx->pc = 0x1CF0C4u;
    {
        const bool branch_taken_0x1cf0c4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CF0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF0C4u;
        // 0x1cf0c8: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf0c4) {
            ctx->pc = 0x1CF188u;
            goto label_1cf188;
        }
    }
    ctx->pc = 0x1CF0CCu;
label_1cf0cc:
    // 0x1cf0cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1cf0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1cf0d0:
    // 0x1cf0d0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cf0d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf0d4:
    // 0x1cf0d4: 0x24510728  addiu       $s1, $v0, 0x728
    ctx->pc = 0x1cf0d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1832));
label_1cf0d8:
    // 0x1cf0d8: 0x27b60004  addiu       $s6, $sp, 0x4
    ctx->pc = 0x1cf0d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1cf0dc:
    // 0x1cf0dc: 0x27b50008  addiu       $s5, $sp, 0x8
    ctx->pc = 0x1cf0dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_1cf0e0:
    // 0x1cf0e0: 0x27b4000c  addiu       $s4, $sp, 0xC
    ctx->pc = 0x1cf0e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_1cf0e4:
    // 0x1cf0e4: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1cf0e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf0e8:
    // 0x1cf0e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cf0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1cf0ec:
    // 0x1cf0ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf0f0:
    // 0x1cf0f0: 0xc0c493d  jal         func_3124F4
label_1cf0f4:
    if (ctx->pc == 0x1CF0F4u) {
        ctx->pc = 0x1CF0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF0F0u;
        // 0x1cf0f4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF0F8u;
        goto label_1cf0f8;
    }
    ctx->pc = 0x1CF0F0u;
    SET_GPR_U32(ctx, 31, 0x1CF0F8u);
    ctx->pc = 0x1CF0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0F0u;
    // 0x1cf0f4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CF0F0u, 0x1CF0F8u)) {
        return;
    }
    ctx->pc = 0x1CF0F8u;
label_1cf0f8:
    // 0x1cf0f8: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1cf0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cf0fc:
    // 0x1cf0fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cf0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1cf100:
    // 0x1cf100: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x1cf100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1cf104:
    // 0x1cf104: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1cf104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1cf108:
    // 0x1cf108: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1cf108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf10c:
    // 0x1cf10c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1cf10cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1cf110:
    // 0x1cf110: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1cf110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf114:
    // 0x1cf114: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1cf114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1cf118:
    // 0x1cf118: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1cf118u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1cf11c:
    // 0x1cf11c: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x1cf11cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1cf120:
    // 0x1cf120: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1cf120u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1cf124:
    // 0x1cf124: 0xc06cda0  jal         func_1B3680
label_1cf128:
    if (ctx->pc == 0x1CF128u) {
        ctx->pc = 0x1CF128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF124u;
        // 0x1cf128: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF12Cu;
        goto label_1cf12c;
    }
    ctx->pc = 0x1CF124u;
    SET_GPR_U32(ctx, 31, 0x1CF12Cu);
    ctx->pc = 0x1CF128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF124u;
    // 0x1cf128: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3680u, 0x1CF124u, 0x1CF12Cu)) {
        return;
    }
    ctx->pc = 0x1CF12Cu;
label_1cf12c:
    // 0x1cf12c: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1cf12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1cf130:
    // 0x1cf130: 0xc06dc32  jal         func_1B70C8
label_1cf134:
    if (ctx->pc == 0x1CF134u) {
        ctx->pc = 0x1CF134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF130u;
        // 0x1cf134: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF138u;
        goto label_1cf138;
    }
    ctx->pc = 0x1CF130u;
    SET_GPR_U32(ctx, 31, 0x1CF138u);
    ctx->pc = 0x1CF134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF130u;
    // 0x1cf134: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B70C8u, 0x1CF130u, 0x1CF138u)) {
        return;
    }
    ctx->pc = 0x1CF138u;
label_1cf138:
    // 0x1cf138: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_1cf13c:
    if (ctx->pc == 0x1CF13Cu) {
        ctx->pc = 0x1CF13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF138u;
        // 0x1cf13c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF140u;
        goto label_1cf140;
    }
    ctx->pc = 0x1CF138u;
    {
        const bool branch_taken_0x1cf138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf138) {
            ctx->pc = 0x1CF13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF138u;
            // 0x1cf13c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF174u;
            goto label_1cf174;
        }
    }
    ctx->pc = 0x1CF140u;
label_1cf140:
    // 0x1cf140: 0x8e020280  lw          $v0, 0x280($s0)
    ctx->pc = 0x1cf140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
label_1cf144:
    // 0x1cf144: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_1cf148:
    if (ctx->pc == 0x1CF148u) {
        ctx->pc = 0x1CF148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF144u;
        // 0x1cf148: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF14Cu;
        goto label_1cf14c;
    }
    ctx->pc = 0x1CF144u;
    {
        const bool branch_taken_0x1cf144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf144) {
            ctx->pc = 0x1CF148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF144u;
            // 0x1cf148: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF174u;
            goto label_1cf174;
        }
    }
    ctx->pc = 0x1CF14Cu;
label_1cf14c:
    // 0x1cf14c: 0x8e060264  lw          $a2, 0x264($s0)
    ctx->pc = 0x1cf14cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1cf150:
    // 0x1cf150: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf154:
    // 0x1cf154: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1cf154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1cf158:
    // 0x1cf158: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1cf158u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1cf15c:
    // 0x1cf15c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1cf15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1cf160:
    // 0x1cf160: 0x60f809  jalr        $v1
label_1cf164:
    if (ctx->pc == 0x1CF164u) {
        ctx->pc = 0x1CF164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF160u;
        // 0x1cf164: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF168u;
        goto label_1cf168;
    }
    ctx->pc = 0x1CF160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CF168u);
        ctx->pc = 0x1CF164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF160u;
        // 0x1cf164: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF160u, 0x1CF168u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CF168u;
label_1cf168:
    // 0x1cf168: 0xae170280  sw          $s7, 0x280($s0)
    ctx->pc = 0x1cf168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 23));
label_1cf16c:
    // 0x1cf16c: 0xae12028c  sw          $s2, 0x28C($s0)
    ctx->pc = 0x1cf16cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 18));
label_1cf170:
    // 0x1cf170: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1cf170u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1cf174:
    // 0x1cf174: 0x2a42000d  slti        $v0, $s2, 0xD
    ctx->pc = 0x1cf174u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)13) ? 1 : 0);
label_1cf178:
    // 0x1cf178: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
label_1cf17c:
    if (ctx->pc == 0x1CF17Cu) {
        ctx->pc = 0x1CF17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF178u;
        // 0x1cf17c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF180u;
        goto label_1cf180;
    }
    ctx->pc = 0x1CF178u;
    {
        const bool branch_taken_0x1cf178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF178u;
        // 0x1cf17c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf178) {
            ctx->pc = 0x1CF0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf0e8;
        }
    }
    ctx->pc = 0x1CF180u;
label_1cf180:
    // 0x1cf180: 0x10000012  b           . + 4 + (0x12 << 2)
label_1cf184:
    if (ctx->pc == 0x1CF184u) {
        ctx->pc = 0x1CF184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF180u;
        // 0x1cf184: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF188u;
        goto label_1cf188;
    }
    ctx->pc = 0x1CF180u;
    {
        const bool branch_taken_0x1cf180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF180u;
        // 0x1cf184: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf180) {
            ctx->pc = 0x1CF1CCu;
            goto label_1cf1cc;
        }
    }
    ctx->pc = 0x1CF188u;
label_1cf188:
    // 0x1cf188: 0x56620010  bnel        $s3, $v0, . + 4 + (0x10 << 2)
label_1cf18c:
    if (ctx->pc == 0x1CF18Cu) {
        ctx->pc = 0x1CF18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF188u;
        // 0x1cf18c: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF190u;
        goto label_1cf190;
    }
    ctx->pc = 0x1CF188u;
    {
        const bool branch_taken_0x1cf188 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cf188) {
            ctx->pc = 0x1CF18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF188u;
            // 0x1cf18c: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF1CCu;
            goto label_1cf1cc;
        }
    }
    ctx->pc = 0x1CF190u;
label_1cf190:
    // 0x1cf190: 0x8e020280  lw          $v0, 0x280($s0)
    ctx->pc = 0x1cf190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
label_1cf194:
    // 0x1cf194: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1cf198:
    if (ctx->pc == 0x1CF198u) {
        ctx->pc = 0x1CF198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF194u;
        // 0x1cf198: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF19Cu;
        goto label_1cf19c;
    }
    ctx->pc = 0x1CF194u;
    {
        const bool branch_taken_0x1cf194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF194u;
        // 0x1cf198: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf194) {
            ctx->pc = 0x1CF1C8u;
            goto label_1cf1c8;
        }
    }
    ctx->pc = 0x1CF19Cu;
label_1cf19c:
    // 0x1cf19c: 0x8e060264  lw          $a2, 0x264($s0)
    ctx->pc = 0x1cf19cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1cf1a0:
    // 0x1cf1a0: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1cf1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1cf1a4:
    // 0x1cf1a4: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1cf1a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1cf1a8:
    // 0x1cf1a8: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1cf1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1cf1ac:
    // 0x1cf1ac: 0x60f809  jalr        $v1
label_1cf1b0:
    if (ctx->pc == 0x1CF1B0u) {
        ctx->pc = 0x1CF1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1ACu;
        // 0x1cf1b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF1B4u;
        goto label_1cf1b4;
    }
    ctx->pc = 0x1CF1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CF1B4u);
        ctx->pc = 0x1CF1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1ACu;
        // 0x1cf1b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF1ACu, 0x1CF1B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CF1B4u;
label_1cf1b4:
    // 0x1cf1b4: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x1cf1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
label_1cf1b8:
    // 0x1cf1b8: 0xc073d82  jal         func_1CF608
label_1cf1bc:
    if (ctx->pc == 0x1CF1BCu) {
        ctx->pc = 0x1CF1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1B8u;
        // 0x1cf1bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF1C0u;
        goto label_1cf1c0;
    }
    ctx->pc = 0x1CF1B8u;
    SET_GPR_U32(ctx, 31, 0x1CF1C0u);
    ctx->pc = 0x1CF1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1B8u;
    // 0x1cf1bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CF608u, 0x1CF1B8u, 0x1CF1C0u)) {
        return;
    }
    ctx->pc = 0x1CF1C0u;
label_1cf1c0:
    // 0x1cf1c0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1cf1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1cf1c4:
    // 0x1cf1c4: 0xae02028c  sw          $v0, 0x28C($s0)
    ctx->pc = 0x1cf1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 2));
label_1cf1c8:
    // 0x1cf1c8: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1cf1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1cf1cc:
    // 0x1cf1cc: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_1cf1d0:
    if (ctx->pc == 0x1CF1D0u) {
        ctx->pc = 0x1CF1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1CCu;
        // 0x1cf1d0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF1D4u;
        goto label_1cf1d4;
    }
    ctx->pc = 0x1CF1CCu;
    {
        const bool branch_taken_0x1cf1cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf1cc) {
            ctx->pc = 0x1CF1D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF1CCu;
            // 0x1cf1d0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF1F0u;
            goto label_1cf1f0;
        }
    }
    ctx->pc = 0x1CF1D4u;
label_1cf1d4:
    // 0x1cf1d4: 0x8e020280  lw          $v0, 0x280($s0)
    ctx->pc = 0x1cf1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
label_1cf1d8:
    // 0x1cf1d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1cf1dc:
    if (ctx->pc == 0x1CF1DCu) {
        ctx->pc = 0x1CF1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1D8u;
        // 0x1cf1dc: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF1E0u;
        goto label_1cf1e0;
    }
    ctx->pc = 0x1CF1D8u;
    {
        const bool branch_taken_0x1cf1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1D8u;
        // 0x1cf1dc: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1d8) {
            ctx->pc = 0x1CF1F0u;
            goto label_1cf1f0;
        }
    }
    ctx->pc = 0x1CF1E0u;
label_1cf1e0:
    // 0x1cf1e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1cf1e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1cf1e4:
    // 0x1cf1e4: 0xc06dbc8  jal         func_1B6F20
label_1cf1e8:
    if (ctx->pc == 0x1CF1E8u) {
        ctx->pc = 0x1CF1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1E4u;
        // 0x1cf1e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF1ECu;
        goto label_1cf1ec;
    }
    ctx->pc = 0x1CF1E4u;
    SET_GPR_U32(ctx, 31, 0x1CF1ECu);
    ctx->pc = 0x1CF1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1E4u;
    // 0x1cf1e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6F20u, 0x1CF1E4u, 0x1CF1ECu)) {
        return;
    }
    ctx->pc = 0x1CF1ECu;
label_1cf1ec:
    // 0x1cf1ec: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1cf1ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1cf1f0:
    // 0x1cf1f0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1cf1f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1cf1f4:
    // 0x1cf1f4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1cf1f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1cf1f8:
    // 0x1cf1f8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1cf1f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1cf1fc:
    // 0x1cf1fc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1cf1fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1cf200:
    // 0x1cf200: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1cf200u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1cf204:
    // 0x1cf204: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1cf204u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cf208:
    // 0x1cf208: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1cf208u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cf20c:
    // 0x1cf20c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cf20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cf210:
    // 0x1cf210: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1cf210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1cf214:
    // 0x1cf214: 0x3e00008  jr          $ra
label_1cf218:
    if (ctx->pc == 0x1CF218u) {
        ctx->pc = 0x1CF218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF214u;
        // 0x1cf218: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF21Cu;
        goto label_1cf21c;
    }
    ctx->pc = 0x1CF214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF214u;
        // 0x1cf218: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF21Cu;
label_1cf21c:
    // 0x1cf21c: 0x0  nop
    ctx->pc = 0x1cf21cu;
    // NOP
    ctx->pc = 0x1cf220u;
}
