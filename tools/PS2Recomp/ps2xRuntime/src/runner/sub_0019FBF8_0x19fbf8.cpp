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

// Function: sub_0019FBF8
// Address: 0x19fbf8 - 0x19fd90
void sub_0019FBF8_0x19fbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019FBF8_0x19fbf8");
#endif

    switch (ctx->pc) {
        case 0x19fbf8u: goto label_19fbf8;
        case 0x19fbfcu: goto label_19fbfc;
        case 0x19fc00u: goto label_19fc00;
        case 0x19fc04u: goto label_19fc04;
        case 0x19fc08u: goto label_19fc08;
        case 0x19fc0cu: goto label_19fc0c;
        case 0x19fc10u: goto label_19fc10;
        case 0x19fc14u: goto label_19fc14;
        case 0x19fc18u: goto label_19fc18;
        case 0x19fc1cu: goto label_19fc1c;
        case 0x19fc20u: goto label_19fc20;
        case 0x19fc24u: goto label_19fc24;
        case 0x19fc28u: goto label_19fc28;
        case 0x19fc2cu: goto label_19fc2c;
        case 0x19fc30u: goto label_19fc30;
        case 0x19fc34u: goto label_19fc34;
        case 0x19fc38u: goto label_19fc38;
        case 0x19fc3cu: goto label_19fc3c;
        case 0x19fc40u: goto label_19fc40;
        case 0x19fc44u: goto label_19fc44;
        case 0x19fc48u: goto label_19fc48;
        case 0x19fc4cu: goto label_19fc4c;
        case 0x19fc50u: goto label_19fc50;
        case 0x19fc54u: goto label_19fc54;
        case 0x19fc58u: goto label_19fc58;
        case 0x19fc5cu: goto label_19fc5c;
        case 0x19fc60u: goto label_19fc60;
        case 0x19fc64u: goto label_19fc64;
        case 0x19fc68u: goto label_19fc68;
        case 0x19fc6cu: goto label_19fc6c;
        case 0x19fc70u: goto label_19fc70;
        case 0x19fc74u: goto label_19fc74;
        case 0x19fc78u: goto label_19fc78;
        case 0x19fc7cu: goto label_19fc7c;
        case 0x19fc80u: goto label_19fc80;
        case 0x19fc84u: goto label_19fc84;
        case 0x19fc88u: goto label_19fc88;
        case 0x19fc8cu: goto label_19fc8c;
        case 0x19fc90u: goto label_19fc90;
        case 0x19fc94u: goto label_19fc94;
        case 0x19fc98u: goto label_19fc98;
        case 0x19fc9cu: goto label_19fc9c;
        case 0x19fca0u: goto label_19fca0;
        case 0x19fca4u: goto label_19fca4;
        case 0x19fca8u: goto label_19fca8;
        case 0x19fcacu: goto label_19fcac;
        case 0x19fcb0u: goto label_19fcb0;
        case 0x19fcb4u: goto label_19fcb4;
        case 0x19fcb8u: goto label_19fcb8;
        case 0x19fcbcu: goto label_19fcbc;
        case 0x19fcc0u: goto label_19fcc0;
        case 0x19fcc4u: goto label_19fcc4;
        case 0x19fcc8u: goto label_19fcc8;
        case 0x19fcccu: goto label_19fccc;
        case 0x19fcd0u: goto label_19fcd0;
        case 0x19fcd4u: goto label_19fcd4;
        case 0x19fcd8u: goto label_19fcd8;
        case 0x19fcdcu: goto label_19fcdc;
        case 0x19fce0u: goto label_19fce0;
        case 0x19fce4u: goto label_19fce4;
        case 0x19fce8u: goto label_19fce8;
        case 0x19fcecu: goto label_19fcec;
        case 0x19fcf0u: goto label_19fcf0;
        case 0x19fcf4u: goto label_19fcf4;
        case 0x19fcf8u: goto label_19fcf8;
        case 0x19fcfcu: goto label_19fcfc;
        case 0x19fd00u: goto label_19fd00;
        case 0x19fd04u: goto label_19fd04;
        case 0x19fd08u: goto label_19fd08;
        case 0x19fd0cu: goto label_19fd0c;
        case 0x19fd10u: goto label_19fd10;
        case 0x19fd14u: goto label_19fd14;
        case 0x19fd18u: goto label_19fd18;
        case 0x19fd1cu: goto label_19fd1c;
        case 0x19fd20u: goto label_19fd20;
        case 0x19fd24u: goto label_19fd24;
        case 0x19fd28u: goto label_19fd28;
        case 0x19fd2cu: goto label_19fd2c;
        case 0x19fd30u: goto label_19fd30;
        case 0x19fd34u: goto label_19fd34;
        case 0x19fd38u: goto label_19fd38;
        case 0x19fd3cu: goto label_19fd3c;
        case 0x19fd40u: goto label_19fd40;
        case 0x19fd44u: goto label_19fd44;
        case 0x19fd48u: goto label_19fd48;
        case 0x19fd4cu: goto label_19fd4c;
        case 0x19fd50u: goto label_19fd50;
        case 0x19fd54u: goto label_19fd54;
        case 0x19fd58u: goto label_19fd58;
        case 0x19fd5cu: goto label_19fd5c;
        case 0x19fd60u: goto label_19fd60;
        case 0x19fd64u: goto label_19fd64;
        case 0x19fd68u: goto label_19fd68;
        case 0x19fd6cu: goto label_19fd6c;
        case 0x19fd70u: goto label_19fd70;
        case 0x19fd74u: goto label_19fd74;
        case 0x19fd78u: goto label_19fd78;
        case 0x19fd7cu: goto label_19fd7c;
        case 0x19fd80u: goto label_19fd80;
        case 0x19fd84u: goto label_19fd84;
        case 0x19fd88u: goto label_19fd88;
        case 0x19fd8cu: goto label_19fd8c;
        default: break;
    }

    ctx->pc = 0x19fbf8u;

label_19fbf8:
    // 0x19fbf8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19fbf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_19fbfc:
    // 0x19fbfc: 0x24020098  addiu       $v0, $zero, 0x98
    ctx->pc = 0x19fbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
label_19fc00:
    // 0x19fc00: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x19fc00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_19fc04:
    // 0x19fc04: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x19fc04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_19fc08:
    // 0x19fc08: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19fc08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19fc0c:
    // 0x19fc0c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19fc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_19fc10:
    // 0x19fc10: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x19fc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_19fc14:
    // 0x19fc14: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x19fc14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19fc18:
    // 0x19fc18: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x19fc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_19fc1c:
    // 0x19fc1c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x19fc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_19fc20:
    // 0x19fc20: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x19fc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_19fc24:
    // 0x19fc24: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x19fc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_19fc28:
    // 0x19fc28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19fc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19fc2c:
    // 0x19fc2c: 0x8e46080c  lw          $a2, 0x80C($s2)
    ctx->pc = 0x19fc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2060)));
label_19fc30:
    // 0x19fc30: 0x8e450804  lw          $a1, 0x804($s2)
    ctx->pc = 0x19fc30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2052)));
label_19fc34:
    // 0x19fc34: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x19fc34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_19fc38:
    // 0x19fc38: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x19fc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_19fc3c:
    // 0x19fc3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19fc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19fc40:
    // 0x19fc40: 0x8c440068  lw          $a0, 0x68($v0)
    ctx->pc = 0x19fc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_19fc44:
    // 0x19fc44: 0x18800046  blez        $a0, . + 4 + (0x46 << 2)
label_19fc48:
    if (ctx->pc == 0x19FC48u) {
        ctx->pc = 0x19FC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC44u;
        // 0x19fc48: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC4Cu;
        goto label_19fc4c;
    }
    ctx->pc = 0x19FC44u;
    {
        const bool branch_taken_0x19fc44 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x19FC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC44u;
        // 0x19fc48: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc44) {
            ctx->pc = 0x19FD60u;
            goto label_19fd60;
        }
    }
    ctx->pc = 0x19FC4Cu;
label_19fc4c:
    // 0x19fc4c: 0x24160098  addiu       $s6, $zero, 0x98
    ctx->pc = 0x19fc4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
label_19fc50:
    // 0x19fc50: 0x26950310  addiu       $s5, $s4, 0x310
    ctx->pc = 0x19fc50u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 784));
label_19fc54:
    // 0x19fc54: 0x26970044  addiu       $s7, $s4, 0x44
    ctx->pc = 0x19fc54u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 68));
label_19fc58:
    // 0x19fc58: 0x26510850  addiu       $s1, $s2, 0x850
    ctx->pc = 0x19fc58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 2128));
label_19fc5c:
    // 0x19fc5c: 0x0  nop
    ctx->pc = 0x19fc5cu;
    // NOP
label_19fc60:
    // 0x19fc60: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x19fc60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_19fc64:
    // 0x19fc64: 0x54400035  bnel        $v0, $zero, . + 4 + (0x35 << 2)
label_19fc68:
    if (ctx->pc == 0x19FC68u) {
        ctx->pc = 0x19FC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC64u;
        // 0x19fc68: 0x8e46080c  lw          $a2, 0x80C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2060)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC6Cu;
        goto label_19fc6c;
    }
    ctx->pc = 0x19FC64u;
    {
        const bool branch_taken_0x19fc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fc64) {
            ctx->pc = 0x19FC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FC64u;
            // 0x19fc68: 0x8e46080c  lw          $a2, 0x80C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2060)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FD3Cu;
            goto label_19fd3c;
        }
    }
    ctx->pc = 0x19FC6Cu;
label_19fc6c:
    // 0x19fc6c: 0xd61018  mult        $v0, $a2, $s6
    ctx->pc = 0x19fc6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_19fc70:
    // 0x19fc70: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x19fc70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_19fc74:
    // 0x19fc74: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x19fc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_19fc78:
    // 0x19fc78: 0x2642018  mult        $a0, $s3, $a0
    ctx->pc = 0x19fc78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_19fc7c:
    // 0x19fc7c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x19fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_19fc80:
    // 0x19fc80: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x19fc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_19fc84:
    // 0x19fc84: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x19fc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19fc88:
    // 0x19fc88: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x19fc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_19fc8c:
    // 0x19fc8c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x19fc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_19fc90:
    // 0x19fc90: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_19fc94:
    if (ctx->pc == 0x19FC94u) {
        ctx->pc = 0x19FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC90u;
        // 0x19fc94: 0xc641081c  lwc1        $f1, 0x81C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC98u;
        goto label_19fc98;
    }
    ctx->pc = 0x19FC90u;
    {
        const bool branch_taken_0x19fc90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fc90) {
            ctx->pc = 0x19FC94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FC90u;
            // 0x19fc94: 0xc641081c  lwc1        $f1, 0x81C($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FCB8u;
            goto label_19fcb8;
        }
    }
    ctx->pc = 0x19FC98u;
label_19fc98:
    // 0x19fc98: 0xc6410828  lwc1        $f1, 0x828($s2)
    ctx->pc = 0x19fc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19fc9c:
    // 0x19fc9c: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x19fc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19fca0:
    // 0x19fca0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19fca0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19fca4:
    // 0x19fca4: 0x0  nop
    ctx->pc = 0x19fca4u;
    // NOP
label_19fca8:
    // 0x19fca8: 0x45030024  bc1tl       . + 4 + (0x24 << 2)
label_19fcac:
    if (ctx->pc == 0x19FCACu) {
        ctx->pc = 0x19FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCA8u;
        // 0x19fcac: 0x8e46080c  lw          $a2, 0x80C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2060)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FCB0u;
        goto label_19fcb0;
    }
    ctx->pc = 0x19FCA8u;
    {
        const bool branch_taken_0x19fca8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19fca8) {
            ctx->pc = 0x19FCACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FCA8u;
            // 0x19fcac: 0x8e46080c  lw          $a2, 0x80C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2060)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FD3Cu;
            goto label_19fd3c;
        }
    }
    ctx->pc = 0x19FCB0u;
label_19fcb0:
    // 0x19fcb0: 0x10000007  b           . + 4 + (0x7 << 2)
label_19fcb4:
    if (ctx->pc == 0x19FCB4u) {
        ctx->pc = 0x19FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCB0u;
        // 0x19fcb4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FCB8u;
        goto label_19fcb8;
    }
    ctx->pc = 0x19FCB0u;
    {
        const bool branch_taken_0x19fcb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCB0u;
        // 0x19fcb4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fcb0) {
            ctx->pc = 0x19FCD0u;
            goto label_19fcd0;
        }
    }
    ctx->pc = 0x19FCB8u;
label_19fcb8:
    // 0x19fcb8: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x19fcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19fcbc:
    // 0x19fcbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19fcbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19fcc0:
    // 0x19fcc0: 0x0  nop
    ctx->pc = 0x19fcc0u;
    // NOP
label_19fcc4:
    // 0x19fcc4: 0x4503001d  bc1tl       . + 4 + (0x1D << 2)
label_19fcc8:
    if (ctx->pc == 0x19FCC8u) {
        ctx->pc = 0x19FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCC4u;
        // 0x19fcc8: 0x8e46080c  lw          $a2, 0x80C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2060)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FCCCu;
        goto label_19fccc;
    }
    ctx->pc = 0x19FCC4u;
    {
        const bool branch_taken_0x19fcc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19fcc4) {
            ctx->pc = 0x19FCC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FCC4u;
            // 0x19fcc8: 0x8e46080c  lw          $a2, 0x80C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2060)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FD3Cu;
            goto label_19fd3c;
        }
    }
    ctx->pc = 0x19FCCCu;
label_19fccc:
    // 0x19fccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19fcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19fcd0:
    // 0x19fcd0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x19fcd0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_19fcd4:
    // 0x19fcd4: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x19fcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_19fcd8:
    // 0x19fcd8: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x19fcd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19fcdc:
    // 0x19fcdc: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
label_19fce0:
    if (ctx->pc == 0x19FCE0u) {
        ctx->pc = 0x19FCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCDCu;
        // 0x19fce0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FCE4u;
        goto label_19fce4;
    }
    ctx->pc = 0x19FCDCu;
    {
        const bool branch_taken_0x19fcdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCDCu;
        // 0x19fce0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fcdc) {
            ctx->pc = 0x19FD10u;
            goto label_19fd10;
        }
    }
    ctx->pc = 0x19FCE4u;
label_19fce4:
    // 0x19fce4: 0xc043ce6  jal         func_10F398
label_19fce8:
    if (ctx->pc == 0x19FCE8u) {
        ctx->pc = 0x19FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCE4u;
        // 0x19fce8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FCECu;
        goto label_19fcec;
    }
    ctx->pc = 0x19FCE4u;
    SET_GPR_U32(ctx, 31, 0x19FCECu);
    ctx->pc = 0x19FCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FCE4u;
    // 0x19fce8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x19FCE4u, 0x19FCECu)) {
        return;
    }
    ctx->pc = 0x19FCECu;
label_19fcec:
    // 0x19fcec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19fcecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19fcf0:
    // 0x19fcf0: 0xc04f0cc  jal         func_13C330
label_19fcf4:
    if (ctx->pc == 0x19FCF4u) {
        ctx->pc = 0x19FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCF0u;
        // 0x19fcf4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FCF8u;
        goto label_19fcf8;
    }
    ctx->pc = 0x19FCF0u;
    SET_GPR_U32(ctx, 31, 0x19FCF8u);
    ctx->pc = 0x19FCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FCF0u;
    // 0x19fcf4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x19FCF0u, 0x19FCF8u)) {
        return;
    }
    ctx->pc = 0x19FCF8u;
label_19fcf8:
    // 0x19fcf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19fcf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fcfc:
    // 0x19fcfc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x19fcfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19fd00:
    // 0x19fd00: 0xc043c7c  jal         func_10F1F0
label_19fd04:
    if (ctx->pc == 0x19FD04u) {
        ctx->pc = 0x19FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD00u;
        // 0x19fd04: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FD08u;
        goto label_19fd08;
    }
    ctx->pc = 0x19FD00u;
    SET_GPR_U32(ctx, 31, 0x19FD08u);
    ctx->pc = 0x19FD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FD00u;
    // 0x19fd04: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F1F0u, 0x19FD00u, 0x19FD08u)) {
        return;
    }
    ctx->pc = 0x19FD08u;
label_19fd08:
    // 0x19fd08: 0x1000000c  b           . + 4 + (0xC << 2)
label_19fd0c:
    if (ctx->pc == 0x19FD0Cu) {
        ctx->pc = 0x19FD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD08u;
        // 0x19fd0c: 0x8e46080c  lw          $a2, 0x80C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2060)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FD10u;
        goto label_19fd10;
    }
    ctx->pc = 0x19FD08u;
    {
        const bool branch_taken_0x19fd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD08u;
        // 0x19fd0c: 0x8e46080c  lw          $a2, 0x80C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2060)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd08) {
            ctx->pc = 0x19FD3Cu;
            goto label_19fd3c;
        }
    }
    ctx->pc = 0x19FD10u;
label_19fd10:
    // 0x19fd10: 0x5482000a  bnel        $a0, $v0, . + 4 + (0xA << 2)
label_19fd14:
    if (ctx->pc == 0x19FD14u) {
        ctx->pc = 0x19FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD10u;
        // 0x19fd14: 0x8e46080c  lw          $a2, 0x80C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2060)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FD18u;
        goto label_19fd18;
    }
    ctx->pc = 0x19FD10u;
    {
        const bool branch_taken_0x19fd10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x19fd10) {
            ctx->pc = 0x19FD14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FD10u;
            // 0x19fd14: 0x8e46080c  lw          $a2, 0x80C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2060)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FD3Cu;
            goto label_19fd3c;
        }
    }
    ctx->pc = 0x19FD18u;
label_19fd18:
    // 0x19fd18: 0x8e820048  lw          $v0, 0x48($s4)
    ctx->pc = 0x19fd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_19fd1c:
    // 0x19fd1c: 0xc4ac0018  lwc1        $f12, 0x18($a1)
    ctx->pc = 0x19fd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19fd20:
    // 0x19fd20: 0x84440108  lh          $a0, 0x108($v0)
    ctx->pc = 0x19fd20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 264)));
label_19fd24:
    // 0x19fd24: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x19fd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_19fd28:
    // 0x19fd28: 0xc4ad001c  lwc1        $f13, 0x1C($a1)
    ctx->pc = 0x19fd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_19fd2c:
    // 0x19fd2c: 0x2e42021  addu        $a0, $s7, $a0
    ctx->pc = 0x19fd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
label_19fd30:
    // 0x19fd30: 0x60f809  jalr        $v1
label_19fd34:
    if (ctx->pc == 0x19FD34u) {
        ctx->pc = 0x19FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD30u;
        // 0x19fd34: 0xc4ae0020  lwc1        $f14, 0x20($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FD38u;
        goto label_19fd38;
    }
    ctx->pc = 0x19FD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19FD38u);
        ctx->pc = 0x19FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD30u;
        // 0x19fd34: 0xc4ae0020  lwc1        $f14, 0x20($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FD30u, 0x19FD38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19FD38u;
label_19fd38:
    // 0x19fd38: 0x8e46080c  lw          $a2, 0x80C($s2)
    ctx->pc = 0x19fd38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2060)));
label_19fd3c:
    // 0x19fd3c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19fd3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_19fd40:
    // 0x19fd40: 0x8e450804  lw          $a1, 0x804($s2)
    ctx->pc = 0x19fd40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2052)));
label_19fd44:
    // 0x19fd44: 0xd61018  mult        $v0, $a2, $s6
    ctx->pc = 0x19fd44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_19fd48:
    // 0x19fd48: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x19fd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_19fd4c:
    // 0x19fd4c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x19fd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_19fd50:
    // 0x19fd50: 0x8c430068  lw          $v1, 0x68($v0)
    ctx->pc = 0x19fd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_19fd54:
    // 0x19fd54: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x19fd54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_19fd58:
    // 0x19fd58: 0x1460ffc1  bnez        $v1, . + 4 + (-0x3F << 2)
label_19fd5c:
    if (ctx->pc == 0x19FD5Cu) {
        ctx->pc = 0x19FD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD58u;
        // 0x19fd5c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FD60u;
        goto label_19fd60;
    }
    ctx->pc = 0x19FD58u;
    {
        const bool branch_taken_0x19fd58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD58u;
        // 0x19fd5c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd58) {
            ctx->pc = 0x19FC60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fc60;
        }
    }
    ctx->pc = 0x19FD60u;
label_19fd60:
    // 0x19fd60: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x19fd60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_19fd64:
    // 0x19fd64: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x19fd64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_19fd68:
    // 0x19fd68: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x19fd68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19fd6c:
    // 0x19fd6c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x19fd6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_19fd70:
    // 0x19fd70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19fd70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19fd74:
    // 0x19fd74: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x19fd74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19fd78:
    // 0x19fd78: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x19fd78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19fd7c:
    // 0x19fd7c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x19fd7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19fd80:
    // 0x19fd80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19fd80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19fd84:
    // 0x19fd84: 0x3e00008  jr          $ra
label_19fd88:
    if (ctx->pc == 0x19FD88u) {
        ctx->pc = 0x19FD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD84u;
        // 0x19fd88: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FD8Cu;
        goto label_19fd8c;
    }
    ctx->pc = 0x19FD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD84u;
        // 0x19fd88: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FD84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FD8Cu;
label_19fd8c:
    // 0x19fd8c: 0x0  nop
    ctx->pc = 0x19fd8cu;
    // NOP
    ctx->pc = 0x19fd90u;
}
