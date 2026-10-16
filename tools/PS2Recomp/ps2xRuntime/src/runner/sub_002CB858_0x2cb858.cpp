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

// Function: sub_002CB858
// Address: 0x2cb858 - 0x2cbc70
void sub_002CB858_0x2cb858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB858_0x2cb858");
#endif

    switch (ctx->pc) {
        case 0x2cb8f4u: goto label_2cb8f4;
        case 0x2cb900u: goto label_2cb900;
        case 0x2cb9e4u: goto label_2cb9e4;
        case 0x2cb9e8u: goto label_2cb9e8;
        case 0x2cba10u: goto label_2cba10;
        case 0x2cba14u: goto label_2cba14;
        case 0x2cba54u: goto label_2cba54;
        case 0x2cba78u: goto label_2cba78;
        case 0x2cba94u: goto label_2cba94;
        case 0x2cbab0u: goto label_2cbab0;
        case 0x2cbaf0u: goto label_2cbaf0;
        case 0x2cbb40u: goto label_2cbb40;
        case 0x2cbb60u: goto label_2cbb60;
        case 0x2cbb84u: goto label_2cbb84;
        case 0x2cbb90u: goto label_2cbb90;
        case 0x2cbba8u: goto label_2cbba8;
        case 0x2cbbc8u: goto label_2cbbc8;
        case 0x2cbbe8u: goto label_2cbbe8;
        case 0x2cbc0cu: goto label_2cbc0c;
        default: break;
    }

    ctx->pc = 0x2cb858u;

    // 0x2cb858: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2cb858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2cb85c: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x2cb85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x2cb860: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x2cb860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x2cb864: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2cb864u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb868: 0xafa60044  sw          $a2, 0x44($sp)
    ctx->pc = 0x2cb868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 6));
    // 0x2cb86c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2cb86cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb870: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x2cb870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x2cb874: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x2cb874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x2cb878: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x2cb878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x2cb87c: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x2cb87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x2cb880: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x2cb880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x2cb884: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x2cb884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x2cb888: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2cb888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2cb88c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2cb88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2cb890: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2cb890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2cb894: 0xafa70048  sw          $a3, 0x48($sp)
    ctx->pc = 0x2cb894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
    // 0x2cb898: 0xafa8004c  sw          $t0, 0x4C($sp)
    ctx->pc = 0x2cb898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 8));
    // 0x2cb89c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB89Cu;
    {
        const bool branch_taken_0x2cb89c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB89Cu;
        // 0x2cb8a0: 0xafa90050  sw          $t1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb89c) {
            ctx->pc = 0x2CB8ACu;
            goto label_2cb8ac;
        }
    }
    ctx->pc = 0x2CB8A4u;
    // 0x2cb8a4: 0x55400003  bnel        $t2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB8A4u;
    {
        const bool branch_taken_0x2cb8a4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb8a4) {
            ctx->pc = 0x2CB8A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB8A4u;
            // 0x2cb8a8: 0x8ea20070  lw          $v0, 0x70($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB8B4u;
            goto label_2cb8b4;
        }
    }
    ctx->pc = 0x2CB8ACu;
label_2cb8ac:
    // 0x2cb8ac: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x2CB8ACu;
    {
        const bool branch_taken_0x2cb8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB8ACu;
        // 0x2cb8b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb8ac) {
            ctx->pc = 0x2CBC40u;
            goto label_2cbc40;
        }
    }
    ctx->pc = 0x2CB8B4u;
label_2cb8b4:
    // 0x2cb8b4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2cb8b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2cb8b8: 0x26b2037c  addiu       $s2, $s5, 0x37C
    ctx->pc = 0x2cb8b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 892));
    // 0x2cb8bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cb8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb8c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cb8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cb8c4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2cb8c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb8c8: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x2cb8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x2cb8cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cb8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cb8d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cb8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb8d4: 0x8c434018  lw          $v1, 0x4018($v0)
    ctx->pc = 0x2cb8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16408)));
    // 0x2cb8d8: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x2cb8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x2cb8dc: 0xc4404014  lwc1        $f0, 0x4014($v0)
    ctx->pc = 0x2cb8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb8e0: 0xe6400070  swc1        $f0, 0x70($s2)
    ctx->pc = 0x2cb8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x2cb8e4: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x2cb8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2cb8e8: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2cb8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb8ec: 0xc0b51de  jal         func_2D4778
    ctx->pc = 0x2CB8ECu;
    SET_GPR_U32(ctx, 31, 0x2CB8F4u);
    ctx->pc = 0x2CB8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB8ECu;
    // 0x2cb8f0: 0xe6410074  swc1        $f1, 0x74($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4778u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D4778u, 0x2CB8ECu, 0x2CB8F4u)) {
        return;
    }
    ctx->pc = 0x2CB8F4u;
label_2cb8f4:
    // 0x2cb8f4: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x2CB8F4u;
    {
        const bool branch_taken_0x2cb8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB8F4u;
        // 0x2cb8f8: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb8f4) {
            ctx->pc = 0x2CBC28u;
            goto label_2cbc28;
        }
    }
    ctx->pc = 0x2CB8FCu;
    // 0x2cb8fc: 0x0  nop
    ctx->pc = 0x2cb8fcu;
    // NOP
label_2cb900:
    // 0x2cb900: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x2cb900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x2cb904: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2cb904u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2cb908: 0x400013  mtlo        $v0
    ctx->pc = 0x2cb908u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x2cb90c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2cb90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2cb910: 0x72c21800  madd        $v1, $s6, $v0
    ctx->pc = 0x2cb910u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2cb914: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x2cb914u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2cb918: 0x1044000f  beq         $v0, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2CB918u;
    {
        const bool branch_taken_0x2cb918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2CB91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB918u;
        // 0x2cb91c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb918) {
            ctx->pc = 0x2CB958u;
            goto label_2cb958;
        }
    }
    ctx->pc = 0x2CB920u;
    // 0x2cb920: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2cb920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cb924: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2cb924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb928: 0x94620020  lhu         $v0, 0x20($v1)
    ctx->pc = 0x2cb928u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2cb92c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2cb92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2cb930: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2cb930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2cb934: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2cb934u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cb938: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CB938u;
    {
        const bool branch_taken_0x2cb938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB938u;
        // 0x2cb93c: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb938) {
            ctx->pc = 0x2CB958u;
            goto label_2cb958;
        }
    }
    ctx->pc = 0x2CB940u;
    // 0x2cb940: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2cb940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2cb944: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x2cb944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2cb948: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2cb948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2cb94c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2cb94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2cb950: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x2cb950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
    // 0x2cb954: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x2cb954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2cb958:
    // 0x2cb958: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2cb958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cb95c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x2cb95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x2cb960: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2cb960u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2cb964: 0x400013  mtlo        $v0
    ctx->pc = 0x2cb964u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x2cb968: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2cb968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2cb96c: 0x72c21800  madd        $v1, $s6, $v0
    ctx->pc = 0x2cb96cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2cb970: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2cb970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2cb974: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x2cb974u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2cb978: 0x1044000f  beq         $v0, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2CB978u;
    {
        const bool branch_taken_0x2cb978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2CB97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB978u;
        // 0x2cb97c: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb978) {
            ctx->pc = 0x2CB9B8u;
            goto label_2cb9b8;
        }
    }
    ctx->pc = 0x2CB980u;
    // 0x2cb980: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2cb980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cb984: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2cb984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb988: 0x94620020  lhu         $v0, 0x20($v1)
    ctx->pc = 0x2cb988u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2cb98c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2cb98cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2cb990: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2cb990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2cb994: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2cb994u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cb998: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CB998u;
    {
        const bool branch_taken_0x2cb998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB998u;
        // 0x2cb99c: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb998) {
            ctx->pc = 0x2CB9B8u;
            goto label_2cb9b8;
        }
    }
    ctx->pc = 0x2CB9A0u;
    // 0x2cb9a0: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x2cb9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2cb9a4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2cb9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2cb9a8: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2cb9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cb9ac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2cb9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cb9b0: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x2cb9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x2cb9b4: 0xa3f021  addu        $fp, $a1, $v1
    ctx->pc = 0x2cb9b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2cb9b8:
    // 0x2cb9b8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2cb9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cb9bc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2cb9bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2cb9c0: 0x400013  mtlo        $v0
    ctx->pc = 0x2cb9c0u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x2cb9c4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2cb9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2cb9c8: 0x72c22000  madd        $a0, $s6, $v0
    ctx->pc = 0x2cb9c8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2cb9cc: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x2cb9ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2cb9d0: 0x10430032  beq         $v0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2CB9D0u;
    {
        const bool branch_taken_0x2cb9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CB9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB9D0u;
        // 0x2cb9d4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb9d0) {
            ctx->pc = 0x2CBA9Cu;
            goto label_2cba9c;
        }
    }
    ctx->pc = 0x2CB9D8u;
    // 0x2cb9d8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2cb9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cb9dc: 0xc0ab4b8  jal         func_2AD2E0
    ctx->pc = 0x2CB9DCu;
    SET_GPR_U32(ctx, 31, 0x2CB9E4u);
    ctx->pc = 0x2CB9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB9DCu;
    // 0x2cb9e0: 0x8fa40054  lw          $a0, 0x54($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD2E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD2E0u, 0x2CB9DCu, 0x2CB9E4u)) {
        return;
    }
    ctx->pc = 0x2CB9E4u;
label_2cb9e4:
    // 0x2cb9e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2cb9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2cb9e8:
    // 0x2cb9e8: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2cb9e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2cb9ec: 0x400013  mtlo        $v0
    ctx->pc = 0x2cb9ecu;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x2cb9f0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2cb9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2cb9f4: 0x72c21800  madd        $v1, $s6, $v0
    ctx->pc = 0x2cb9f4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2cb9f8: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x2cb9f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2cb9fc: 0x10440020  beq         $v0, $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2CB9FCu;
    {
        const bool branch_taken_0x2cb9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2CBA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB9FCu;
        // 0x2cba00: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb9fc) {
            ctx->pc = 0x2CBA80u;
            goto label_2cba80;
        }
    }
    ctx->pc = 0x2CBA04u;
    // 0x2cba04: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x2cba04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2cba08: 0xc0ab4b8  jal         func_2AD2E0
    ctx->pc = 0x2CBA08u;
    SET_GPR_U32(ctx, 31, 0x2CBA10u);
    ctx->pc = 0x2CBA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBA08u;
    // 0x2cba0c: 0x8fa40054  lw          $a0, 0x54($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD2E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD2E0u, 0x2CBA08u, 0x2CBA10u)) {
        return;
    }
    ctx->pc = 0x2CBA10u;
label_2cba10:
    // 0x2cba10: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x2cba10u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2cba14:
    // 0x2cba14: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2cba14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cba18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2cba18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba1c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2cba1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x2cba20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cba20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba24: 0x400013  mtlo        $v0
    ctx->pc = 0x2cba24u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x2cba28: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x2cba28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x2cba2c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2cba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2cba30: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x2cba30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x2cba34: 0x72c28800  madd        $s1, $s6, $v0
    ctx->pc = 0x2cba34u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x2cba38: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x2cba38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
    // 0x2cba3c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2cba3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba40: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x2cba40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba44: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x2cba44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2cba48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cba48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba4c: 0xc0b1722  jal         func_2C5C88
    ctx->pc = 0x2CBA4Cu;
    SET_GPR_U32(ctx, 31, 0x2CBA54u);
    ctx->pc = 0x2CBA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBA4Cu;
    // 0x2cba50: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5C88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C5C88u, 0x2CBA4Cu, 0x2CBA54u)) {
        return;
    }
    ctx->pc = 0x2CBA54u;
label_2cba54:
    // 0x2cba54: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2cba54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba58: 0x12600017  beqz        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x2CBA58u;
    {
        const bool branch_taken_0x2cba58 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA58u;
        // 0x2cba5c: 0x8fa60060  lw          $a2, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cba58) {
            ctx->pc = 0x2CBAB8u;
            goto label_2cbab8;
        }
    }
    ctx->pc = 0x2CBA60u;
    // 0x2cba60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cba60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba64: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2cba64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba68: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2cba68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cba6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba70: 0xc0b1722  jal         func_2C5C88
    ctx->pc = 0x2CBA70u;
    SET_GPR_U32(ctx, 31, 0x2CBA78u);
    ctx->pc = 0x2CBA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBA70u;
    // 0x2cba74: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5C88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C5C88u, 0x2CBA70u, 0x2CBA78u)) {
        return;
    }
    ctx->pc = 0x2CBA78u;
label_2cba78:
    // 0x2cba78: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2CBA78u;
    {
        const bool branch_taken_0x2cba78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA78u;
        // 0x2cba7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cba78) {
            ctx->pc = 0x2CBABCu;
            goto label_2cbabc;
        }
    }
    ctx->pc = 0x2CBA80u;
label_2cba80:
    // 0x2cba80: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2cba80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2cba84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cba84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cba88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba8c: 0xc0aa730  jal         func_2A9CC0
    ctx->pc = 0x2CBA8Cu;
    SET_GPR_U32(ctx, 31, 0x2CBA94u);
    ctx->pc = 0x2CBA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBA8Cu;
    // 0x2cba90: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9CC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9CC0u, 0x2CBA8Cu, 0x2CBA94u)) {
        return;
    }
    ctx->pc = 0x2CBA94u;
label_2cba94:
    // 0x2cba94: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x2CBA94u;
    {
        const bool branch_taken_0x2cba94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA94u;
        // 0x2cba98: 0x27b70020  addiu       $s7, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cba94) {
            ctx->pc = 0x2CBA14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cba14;
        }
    }
    ctx->pc = 0x2CBA9Cu;
label_2cba9c:
    // 0x2cba9c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2cba9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cbaa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cbaa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbaa4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cbaa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbaa8: 0xc0aa730  jal         func_2A9CC0
    ctx->pc = 0x2CBAA8u;
    SET_GPR_U32(ctx, 31, 0x2CBAB0u);
    ctx->pc = 0x2CBAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBAA8u;
    // 0x2cbaac: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9CC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9CC0u, 0x2CBAA8u, 0x2CBAB0u)) {
        return;
    }
    ctx->pc = 0x2CBAB0u;
label_2cbab0:
    // 0x2cbab0: 0x1000ffcd  b           . + 4 + (-0x33 << 2)
    ctx->pc = 0x2CBAB0u;
    {
        const bool branch_taken_0x2cbab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBAB0u;
        // 0x2cbab4: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbab0) {
            ctx->pc = 0x2CB9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb9e8;
        }
    }
    ctx->pc = 0x2CBAB8u;
label_2cbab8:
    // 0x2cbab8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2cbab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cbabc:
    // 0x2cbabc: 0x12000057  beqz        $s0, . + 4 + (0x57 << 2)
    ctx->pc = 0x2CBABCu;
    {
        const bool branch_taken_0x2cbabc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBABCu;
        // 0x2cbac0: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbabc) {
            ctx->pc = 0x2CBC1Cu;
            goto label_2cbc1c;
        }
    }
    ctx->pc = 0x2CBAC4u;
    // 0x2cbac4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2cbac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cbac8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2cbac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbacc: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x2cbaccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbad0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2cbad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbad4: 0x600013  mtlo        $v1
    ctx->pc = 0x2cbad4u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x2cbad8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cbad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbadc: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2cbadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2cbae0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2cbae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbae4: 0x72c31000  madd        $v0, $s6, $v1
    ctx->pc = 0x2cbae4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2cbae8: 0xc0b184e  jal         func_2C6138
    ctx->pc = 0x2CBAE8u;
    SET_GPR_U32(ctx, 31, 0x2CBAF0u);
    ctx->pc = 0x2CBAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBAE8u;
    // 0x2cbaec: 0x8c470010  lw          $a3, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6138u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C6138u, 0x2CBAE8u, 0x2CBAF0u)) {
        return;
    }
    ctx->pc = 0x2CBAF0u;
label_2cbaf0:
    // 0x2cbaf0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2cbaf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbaf4: 0x1260004a  beqz        $s3, . + 4 + (0x4A << 2)
    ctx->pc = 0x2CBAF4u;
    {
        const bool branch_taken_0x2cbaf4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBAF4u;
        // 0x2cbaf8: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbaf4) {
            ctx->pc = 0x2CBC20u;
            goto label_2cbc20;
        }
    }
    ctx->pc = 0x2CBAFCu;
    // 0x2cbafc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2cbafcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb00: 0x1a600019  blez        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x2CBB00u;
    {
        const bool branch_taken_0x2cbb00 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x2CBB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBB00u;
        // 0x2cbb04: 0x32630003  andi        $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb00) {
            ctx->pc = 0x2CBB68u;
            goto label_2cbb68;
        }
    }
    ctx->pc = 0x2CBB08u;
    // 0x2cbb08: 0x50600021  beql        $v1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x2CBB08u;
    {
        const bool branch_taken_0x2cbb08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbb08) {
            ctx->pc = 0x2CBB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBB08u;
            // 0x2cbb0c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBB90u;
            goto label_2cbb90;
        }
    }
    ctx->pc = 0x2CBB10u;
    // 0x2cbb10: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2cbb10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2cbb14: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CBB14u;
    {
        const bool branch_taken_0x2cbb14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBB14u;
        // 0x2cbb18: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb14) {
            ctx->pc = 0x2CBB6Cu;
            goto label_2cbb6c;
        }
    }
    ctx->pc = 0x2CBB1Cu;
    // 0x2cbb1c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2cbb1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2cbb20: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CBB20u;
    {
        const bool branch_taken_0x2cbb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cbb20) {
            ctx->pc = 0x2CBB48u;
            goto label_2cbb48;
        }
    }
    ctx->pc = 0x2CBB28u;
    // 0x2cbb28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cbb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb2c: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x2cbb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2cbb30: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2cbb30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb34: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x2cbb34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2cbb38: 0xc0b2a8e  jal         func_2CAA38
    ctx->pc = 0x2CBB38u;
    SET_GPR_U32(ctx, 31, 0x2CBB40u);
    ctx->pc = 0x2CBB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBB38u;
    // 0x2cbb3c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAA38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2CAA38u, 0x2CBB38u, 0x2CBB40u)) {
        return;
    }
    ctx->pc = 0x2CBB40u;
label_2cbb40:
    // 0x2cbb40: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2cbb40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2cbb44: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2cbb44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cbb48:
    // 0x2cbb48: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cbb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb4c: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x2cbb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2cbb50: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2cbb50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb54: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2cbb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2cbb58: 0xc0b2a8e  jal         func_2CAA38
    ctx->pc = 0x2CBB58u;
    SET_GPR_U32(ctx, 31, 0x2CBB60u);
    ctx->pc = 0x2CBB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBB58u;
    // 0x2cbb5c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAA38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2CAA38u, 0x2CBB58u, 0x2CBB60u)) {
        return;
    }
    ctx->pc = 0x2CBB60u;
label_2cbb60:
    // 0x2cbb60: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2cbb60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2cbb64: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2cbb64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2cbb68:
    // 0x2cbb68: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2cbb68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cbb6c:
    // 0x2cbb6c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cbb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb70: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x2cbb70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2cbb74: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2cbb74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb78: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2cbb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2cbb7c: 0xc0b2a8e  jal         func_2CAA38
    ctx->pc = 0x2CBB7Cu;
    SET_GPR_U32(ctx, 31, 0x2CBB84u);
    ctx->pc = 0x2CBB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBB7Cu;
    // 0x2cbb80: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAA38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2CAA38u, 0x2CBB7Cu, 0x2CBB84u)) {
        return;
    }
    ctx->pc = 0x2CBB84u;
label_2cbb84:
    // 0x2cbb84: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2CBB84u;
    {
        const bool branch_taken_0x2cbb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBB84u;
        // 0x2cbb88: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb84) {
            ctx->pc = 0x2CBC0Cu;
            goto label_2cbc0c;
        }
    }
    ctx->pc = 0x2CBB8Cu;
    // 0x2cbb8c: 0x0  nop
    ctx->pc = 0x2cbb8cu;
    // NOP
label_2cbb90:
    // 0x2cbb90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cbb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb94: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x2cbb94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2cbb98: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2cbb98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb9c: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2cbb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2cbba0: 0xc0b2a8e  jal         func_2CAA38
    ctx->pc = 0x2CBBA0u;
    SET_GPR_U32(ctx, 31, 0x2CBBA8u);
    ctx->pc = 0x2CBBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBBA0u;
    // 0x2cbba4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAA38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2CAA38u, 0x2CBBA0u, 0x2CBBA8u)) {
        return;
    }
    ctx->pc = 0x2CBBA8u;
label_2cbba8:
    // 0x2cbba8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2cbba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2cbbac: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x2cbbacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2cbbb0: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x2cbbb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2cbbb4: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2cbbb4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2cbbb8: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2cbbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2cbbbc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cbbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbbc0: 0xc0b2a8e  jal         func_2CAA38
    ctx->pc = 0x2CBBC0u;
    SET_GPR_U32(ctx, 31, 0x2CBBC8u);
    ctx->pc = 0x2CBBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBBC0u;
    // 0x2cbbc4: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAA38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2CAA38u, 0x2CBBC0u, 0x2CBBC8u)) {
        return;
    }
    ctx->pc = 0x2CBBC8u;
label_2cbbc8:
    // 0x2cbbc8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2cbbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2cbbcc: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x2cbbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2cbbd0: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x2cbbd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2cbbd4: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2cbbd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2cbbd8: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2cbbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2cbbdc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cbbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbbe0: 0xc0b2a8e  jal         func_2CAA38
    ctx->pc = 0x2CBBE0u;
    SET_GPR_U32(ctx, 31, 0x2CBBE8u);
    ctx->pc = 0x2CBBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBBE0u;
    // 0x2cbbe4: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAA38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2CAA38u, 0x2CBBE0u, 0x2CBBE8u)) {
        return;
    }
    ctx->pc = 0x2CBBE8u;
label_2cbbe8:
    // 0x2cbbe8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2cbbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2cbbec: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x2cbbecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x2cbbf0: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x2cbbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2cbbf4: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2cbbf4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2cbbf8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cbbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbbfc: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2cbbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2cbc00: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2cbc00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbc04: 0xc0b2a8e  jal         func_2CAA38
    ctx->pc = 0x2CBC04u;
    SET_GPR_U32(ctx, 31, 0x2CBC0Cu);
    ctx->pc = 0x2CBC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBC04u;
    // 0x2cbc08: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAA38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2CAA38u, 0x2CBC04u, 0x2CBC0Cu)) {
        return;
    }
    ctx->pc = 0x2CBC0Cu;
label_2cbc0c:
    // 0x2cbc0c: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2cbc0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2cbc10: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x2cbc10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2cbc14: 0x5440ffde  bnel        $v0, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2CBC14u;
    {
        const bool branch_taken_0x2cbc14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cbc14) {
            ctx->pc = 0x2CBC18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBC14u;
            // 0x2cbc18: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cbb90;
        }
    }
    ctx->pc = 0x2CBC1Cu;
label_2cbc1c:
    // 0x2cbc1c: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x2cbc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2cbc20:
    // 0x2cbc20: 0x2e0b02d  daddu       $s6, $s7, $zero
    ctx->pc = 0x2cbc20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbc24: 0x2c4102b  sltu        $v0, $s6, $a0
    ctx->pc = 0x2cbc24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2cbc28:
    // 0x2cbc28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CBC28u;
    {
        const bool branch_taken_0x2cbc28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC28u;
        // 0x2cbc2c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbc28) {
            ctx->pc = 0x2CBC40u;
            goto label_2cbc40;
        }
    }
    ctx->pc = 0x2CBC30u;
    // 0x2cbc30: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x2cbc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x2cbc34: 0x1040ff32  beqz        $v0, . + 4 + (-0xCE << 2)
    ctx->pc = 0x2CBC34u;
    {
        const bool branch_taken_0x2cbc34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC34u;
        // 0x2cbc38: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbc34) {
            ctx->pc = 0x2CB900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb900;
        }
    }
    ctx->pc = 0x2CBC3Cu;
    // 0x2cbc3c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2cbc3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2cbc40:
    // 0x2cbc40: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x2cbc40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2cbc44: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x2cbc44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2cbc48: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x2cbc48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2cbc4c: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x2cbc4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2cbc50: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x2cbc50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2cbc54: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x2cbc54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2cbc58: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x2cbc58u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2cbc5c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x2cbc5cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2cbc60: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2cbc60u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2cbc64: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2cbc64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cbc68: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC68u;
        // 0x2cbc6c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBC70u;
}
