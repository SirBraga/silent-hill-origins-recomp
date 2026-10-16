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

// Function: sub_002C6138
// Address: 0x2c6138 - 0x2c6388
void sub_002C6138_0x2c6138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6138_0x2c6138");
#endif

    switch (ctx->pc) {
        case 0x2c61c0u: goto label_2c61c0;
        case 0x2c6200u: goto label_2c6200;
        default: break;
    }

    ctx->pc = 0x2c6138u;

    // 0x2c6138: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2c6138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2c613c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2c613cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c6140: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2c6140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2c6144: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x2c6144u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6148: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2c6148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2c614c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c614cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6150: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2c6150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x2c6154: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2c6154u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6158: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2c6158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2c615c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2c615cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6160: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2c6160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2c6164: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x2c6164u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c6168: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2c6168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2c616c: 0x161940  sll         $v1, $s6, 5
    ctx->pc = 0x2c616cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 5));
    // 0x2c6170: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2c6170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2c6174: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x2c6174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6178: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2c6178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x2c617c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2c617cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x2c6180: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2c6180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c6184: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x2c6184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6188: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x2c6188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x2c618c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c618cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6190: 0x8e0a000c  lw          $t2, 0xC($s0)
    ctx->pc = 0x2c6190u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2c6194: 0x8e190024  lw          $t9, 0x24($s0)
    ctx->pc = 0x2c6194u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2c6198: 0x8e140008  lw          $s4, 0x8($s0)
    ctx->pc = 0x2c6198u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c619c: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x2c619cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x2c61a0: 0x3231821  addu        $v1, $t9, $v1
    ctx->pc = 0x2c61a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x2c61a4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2c61a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2c61a8: 0x12c0006a  beqz        $s6, . + 4 + (0x6A << 2)
    ctx->pc = 0x2C61A8u;
    {
        const bool branch_taken_0x2c61a8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C61ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C61A8u;
        // 0x2c61ac: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c61a8) {
            ctx->pc = 0x2C6354u;
            goto label_2c6354;
        }
    }
    ctx->pc = 0x2C61B0u;
    // 0x2c61b0: 0x12800068  beqz        $s4, . + 4 + (0x68 << 2)
    ctx->pc = 0x2C61B0u;
    {
        const bool branch_taken_0x2c61b0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C61B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C61B0u;
        // 0x2c61b4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c61b0) {
            ctx->pc = 0x2C6354u;
            goto label_2c6354;
        }
    }
    ctx->pc = 0x2C61B8u;
    // 0x2c61b8: 0x8d420008  lw          $v0, 0x8($t2)
    ctx->pc = 0x2c61b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x2c61bc: 0x0  nop
    ctx->pc = 0x2c61bcu;
    // NOP
label_2c61c0:
    // 0x2c61c0: 0x249e0001  addiu       $fp, $a0, 0x1
    ctx->pc = 0x2c61c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2c61c4: 0x25430014  addiu       $v1, $t2, 0x14
    ctx->pc = 0x2c61c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 20));
    // 0x2c61c8: 0x27370020  addiu       $s7, $t9, 0x20
    ctx->pc = 0x2c61c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 25), 32));
    // 0x2c61cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c61ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c61d0: 0x10440058  beq         $v0, $a0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2C61D0u;
    {
        const bool branch_taken_0x2c61d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2C61D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C61D0u;
        // 0x2c61d4: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c61d0) {
            ctx->pc = 0x2C6334u;
            goto label_2c6334;
        }
    }
    ctx->pc = 0x2C61D8u;
    // 0x2c61d8: 0x8fac0000  lw          $t4, 0x0($sp)
    ctx->pc = 0x2c61d8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c61dc: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2c61dcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c61e0: 0x12a00054  beqz        $s5, . + 4 + (0x54 << 2)
    ctx->pc = 0x2C61E0u;
    {
        const bool branch_taken_0x2c61e0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C61E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C61E0u;
        // 0x2c61e4: 0x8fae0008  lw          $t6, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c61e0) {
            ctx->pc = 0x2C6334u;
            goto label_2c6334;
        }
    }
    ctx->pc = 0x2C61E8u;
    // 0x2c61e8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2c61e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2c61ec: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x2c61ecu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c61f0: 0x24f2000c  addiu       $s2, $a3, 0xC
    ctx->pc = 0x2c61f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x2c61f4: 0x24d1000c  addiu       $s1, $a2, 0xC
    ctx->pc = 0x2c61f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x2c61f8: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x2c61f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c61fc: 0x2625821  addu        $t3, $s3, $v0
    ctx->pc = 0x2c61fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2c6200:
    // 0x2c6200: 0x8d280008  lw          $t0, 0x8($t1)
    ctx->pc = 0x2c6200u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2c6204: 0x51180046  beql        $t0, $t8, . + 4 + (0x46 << 2)
    ctx->pc = 0x2C6204u;
    {
        const bool branch_taken_0x2c6204 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 24));
        if (branch_taken_0x2c6204) {
            ctx->pc = 0x2C6208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6204u;
            // 0x2c6208: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6320u;
            goto label_2c6320;
        }
    }
    ctx->pc = 0x2C620Cu;
    // 0x2c620c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x2c620cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2c6210: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2c6210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2c6214: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6214u;
    {
        const bool branch_taken_0x2c6214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C6218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6214u;
        // 0x2c6218: 0x95440004  lhu         $a0, 0x4($t2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6214) {
            ctx->pc = 0x2C6228u;
            goto label_2c6228;
        }
    }
    ctx->pc = 0x2C621Cu;
    // 0x2c621c: 0x95220004  lhu         $v0, 0x4($t1)
    ctx->pc = 0x2c621cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2c6220: 0x5082003f  beql        $a0, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2C6220u;
    {
        const bool branch_taken_0x2c6220 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c6220) {
            ctx->pc = 0x2C6224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6220u;
            // 0x2c6224: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6320u;
            goto label_2c6320;
        }
    }
    ctx->pc = 0x2C6228u;
label_2c6228:
    // 0x2c6228: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x2c6228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2c622c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2c622cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c6230: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6230u;
    {
        const bool branch_taken_0x2c6230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2c6230) {
            ctx->pc = 0x2C6244u;
            goto label_2c6244;
        }
    }
    ctx->pc = 0x2C6238u;
    // 0x2c6238: 0x95220004  lhu         $v0, 0x4($t1)
    ctx->pc = 0x2c6238u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2c623c: 0x50430038  beql        $v0, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x2C623Cu;
    {
        const bool branch_taken_0x2c623c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c623c) {
            ctx->pc = 0x2C6240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C623Cu;
            // 0x2c6240: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6320u;
            goto label_2c6320;
        }
    }
    ctx->pc = 0x2C6244u;
label_2c6244:
    // 0x2c6244: 0x10e0000f  beqz        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x2C6244u;
    {
        const bool branch_taken_0x2c6244 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6244) {
            ctx->pc = 0x2C6284u;
            goto label_2c6284;
        }
    }
    ctx->pc = 0x2C624Cu;
    // 0x2c624c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2c624cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c6250: 0x95430004  lhu         $v1, 0x4($t2)
    ctx->pc = 0x2c6250u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x2c6254: 0x95250004  lhu         $a1, 0x4($t1)
    ctx->pc = 0x2c6254u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2c6258: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2c6258u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c625c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c625cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c6260: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x2c6260u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x2c6264: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2c6264u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c6268: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x2c6268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x2c626c: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x2c626cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2c6270: 0x781804  sllv        $v1, $t8, $v1
    ctx->pc = 0x2c6270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 3) & 0x1F));
    // 0x2c6274: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c6274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c6278: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c6278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c627c: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x2C627Cu;
    {
        const bool branch_taken_0x2c627c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c627c) {
            ctx->pc = 0x2C6280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C627Cu;
            // 0x2c6280: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6320u;
            goto label_2c6320;
        }
    }
    ctx->pc = 0x2C6284u;
label_2c6284:
    // 0x2c6284: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C6284u;
    {
        const bool branch_taken_0x2c6284 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6284) {
            ctx->pc = 0x2C62C8u;
            goto label_2c62c8;
        }
    }
    ctx->pc = 0x2C628Cu;
    // 0x2c628c: 0x8d420008  lw          $v0, 0x8($t2)
    ctx->pc = 0x2c628cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x2c6290: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x2c6290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2c6294: 0x9443005a  lhu         $v1, 0x5A($v0)
    ctx->pc = 0x2c6294u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 90)));
    // 0x2c6298: 0x9505005a  lhu         $a1, 0x5A($t0)
    ctx->pc = 0x2c6298u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 90)));
    // 0x2c629c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2c629cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c62a0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c62a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c62a4: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x2c62a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x2c62a8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2c62a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c62ac: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x2c62acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x2c62b0: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x2c62b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2c62b4: 0x781804  sllv        $v1, $t8, $v1
    ctx->pc = 0x2c62b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 3) & 0x1F));
    // 0x2c62b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c62b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c62bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c62bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c62c0: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C62C0u;
    {
        const bool branch_taken_0x2c62c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c62c0) {
            ctx->pc = 0x2C62C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C62C0u;
            // 0x2c62c4: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6320u;
            goto label_2c6320;
        }
    }
    ctx->pc = 0x2C62C8u;
label_2c62c8:
    // 0x2c62c8: 0xdb220000  lqc2        $vf2, 0x0($t9)
    ctx->pc = 0x2c62c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x2c62cc: 0xdb210010  lqc2        $vf1, 0x10($t9)
    ctx->pc = 0x2c62ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 25), 16)));
    // 0x2c62d0: 0xd9c40000  lqc2        $vf4, 0x0($t6)
    ctx->pc = 0x2c62d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x2c62d4: 0xd9c30010  lqc2        $vf3, 0x10($t6)
    ctx->pc = 0x2c62d4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x2c62d8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2c62d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2c62dc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2c62dcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2c62e0: 0x4a006fb8  vcallms     0xDF0
    ctx->pc = 0x2c62e0u;
    {     ctx->vu0_tpc = 0xDF0;     runtime->executeVU0Microprogram(rdram, ctx, 0xDF0); }
    // 0x2c62e4: 0x4a0002ff  vnop
    ctx->pc = 0x2c62e4u;
    // NOP operation, no action needed for VU0
    // 0x2c62e8: 0x48420801  cfc2.i      $v0, $vi1
    ctx->pc = 0x2c62e8u;
    SET_GPR_U32(ctx, 2, static_cast<uint32_t>(ctx->vi[1]));
    // 0x2c62ec: 0x0  nop
    ctx->pc = 0x2c62ecu;
    // NOP
    // 0x2c62f0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2C62F0u;
    {
        const bool branch_taken_0x2c62f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c62f0) {
            ctx->pc = 0x2C62F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C62F0u;
            // 0x2c62f4: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6320u;
            goto label_2c6320;
        }
    }
    ctx->pc = 0x2C62F8u;
    // 0x2c62f8: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x2c62f8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x2c62fc: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2c62fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x2c6300: 0xad6c0004  sw          $t4, 0x4($t3)
    ctx->pc = 0x2c6300u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 12));
    // 0x2c6304: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2c6304u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2c6308: 0x1f4102b  sltu        $v0, $t7, $s4
    ctx->pc = 0x2c6308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2c630c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C630Cu;
    {
        const bool branch_taken_0x2c630c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C630Cu;
        // 0x2c6310: 0x256b0008  addiu       $t3, $t3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c630c) {
            ctx->pc = 0x2C631Cu;
            goto label_2c631c;
        }
    }
    ctx->pc = 0x2C6314u;
    // 0x2c6314: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C6314u;
    {
        const bool branch_taken_0x2c6314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6314u;
        // 0x2c6318: 0xae180078  sw          $t8, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6314) {
            ctx->pc = 0x2C6334u;
            goto label_2c6334;
        }
    }
    ctx->pc = 0x2C631Cu;
label_2c631c:
    // 0x2c631c: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x2c631cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_2c6320:
    // 0x2c6320: 0x25ce0020  addiu       $t6, $t6, 0x20
    ctx->pc = 0x2c6320u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 32));
    // 0x2c6324: 0x25290014  addiu       $t1, $t1, 0x14
    ctx->pc = 0x2c6324u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
    // 0x2c6328: 0x1b5102b  sltu        $v0, $t5, $s5
    ctx->pc = 0x2c6328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x2c632c: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x2C632Cu;
    {
        const bool branch_taken_0x2c632c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C632Cu;
        // 0x2c6330: 0x258c0014  addiu       $t4, $t4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c632c) {
            ctx->pc = 0x2C6200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6200;
        }
    }
    ctx->pc = 0x2C6334u;
label_2c6334:
    // 0x2c6334: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2c6334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6338: 0x2e0c82d  daddu       $t9, $s7, $zero
    ctx->pc = 0x2c6338u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c633c: 0x96102b  sltu        $v0, $a0, $s6
    ctx->pc = 0x2c633cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x2c6340: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6340u;
    {
        const bool branch_taken_0x2c6340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6340u;
        // 0x2c6344: 0x8faa000c  lw          $t2, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6340) {
            ctx->pc = 0x2C6354u;
            goto label_2c6354;
        }
    }
    ctx->pc = 0x2C6348u;
    // 0x2c6348: 0x1f4102b  sltu        $v0, $t7, $s4
    ctx->pc = 0x2c6348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2c634c: 0x5440ff9c  bnel        $v0, $zero, . + 4 + (-0x64 << 2)
    ctx->pc = 0x2C634Cu;
    {
        const bool branch_taken_0x2c634c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c634c) {
            ctx->pc = 0x2C6350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C634Cu;
            // 0x2c6350: 0x8d420008  lw          $v0, 0x8($t2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C61C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c61c0;
        }
    }
    ctx->pc = 0x2C6354u;
label_2c6354:
    // 0x2c6354: 0xae0f0004  sw          $t7, 0x4($s0)
    ctx->pc = 0x2c6354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 15));
    // 0x2c6358: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x2c6358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c635c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2c635cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c6360: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2c6360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c6364: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2c6364u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c6368: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2c6368u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c636c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2c636cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c6370: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2c6370u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c6374: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2c6374u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c6378: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2c6378u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c637c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2c637cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c6380: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6380u;
        // 0x2c6384: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6388u;
}
