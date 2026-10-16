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

// Function: sub_002B19A8
// Address: 0x2b19a8 - 0x2b1b88
void sub_002B19A8_0x2b19a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B19A8_0x2b19a8");
#endif

    switch (ctx->pc) {
        case 0x2b19a8u: goto label_2b19a8;
        case 0x2b19acu: goto label_2b19ac;
        case 0x2b19b0u: goto label_2b19b0;
        case 0x2b19b4u: goto label_2b19b4;
        case 0x2b19b8u: goto label_2b19b8;
        case 0x2b19bcu: goto label_2b19bc;
        case 0x2b19c0u: goto label_2b19c0;
        case 0x2b19c4u: goto label_2b19c4;
        case 0x2b19c8u: goto label_2b19c8;
        case 0x2b19ccu: goto label_2b19cc;
        case 0x2b19d0u: goto label_2b19d0;
        case 0x2b19d4u: goto label_2b19d4;
        case 0x2b19d8u: goto label_2b19d8;
        case 0x2b19dcu: goto label_2b19dc;
        case 0x2b19e0u: goto label_2b19e0;
        case 0x2b19e4u: goto label_2b19e4;
        case 0x2b19e8u: goto label_2b19e8;
        case 0x2b19ecu: goto label_2b19ec;
        case 0x2b19f0u: goto label_2b19f0;
        case 0x2b19f4u: goto label_2b19f4;
        case 0x2b19f8u: goto label_2b19f8;
        case 0x2b19fcu: goto label_2b19fc;
        case 0x2b1a00u: goto label_2b1a00;
        case 0x2b1a04u: goto label_2b1a04;
        case 0x2b1a08u: goto label_2b1a08;
        case 0x2b1a0cu: goto label_2b1a0c;
        case 0x2b1a10u: goto label_2b1a10;
        case 0x2b1a14u: goto label_2b1a14;
        case 0x2b1a18u: goto label_2b1a18;
        case 0x2b1a1cu: goto label_2b1a1c;
        case 0x2b1a20u: goto label_2b1a20;
        case 0x2b1a24u: goto label_2b1a24;
        case 0x2b1a28u: goto label_2b1a28;
        case 0x2b1a2cu: goto label_2b1a2c;
        case 0x2b1a30u: goto label_2b1a30;
        case 0x2b1a34u: goto label_2b1a34;
        case 0x2b1a38u: goto label_2b1a38;
        case 0x2b1a3cu: goto label_2b1a3c;
        case 0x2b1a40u: goto label_2b1a40;
        case 0x2b1a44u: goto label_2b1a44;
        case 0x2b1a48u: goto label_2b1a48;
        case 0x2b1a4cu: goto label_2b1a4c;
        case 0x2b1a50u: goto label_2b1a50;
        case 0x2b1a54u: goto label_2b1a54;
        case 0x2b1a58u: goto label_2b1a58;
        case 0x2b1a5cu: goto label_2b1a5c;
        case 0x2b1a60u: goto label_2b1a60;
        case 0x2b1a64u: goto label_2b1a64;
        case 0x2b1a68u: goto label_2b1a68;
        case 0x2b1a6cu: goto label_2b1a6c;
        case 0x2b1a70u: goto label_2b1a70;
        case 0x2b1a74u: goto label_2b1a74;
        case 0x2b1a78u: goto label_2b1a78;
        case 0x2b1a7cu: goto label_2b1a7c;
        case 0x2b1a80u: goto label_2b1a80;
        case 0x2b1a84u: goto label_2b1a84;
        case 0x2b1a88u: goto label_2b1a88;
        case 0x2b1a8cu: goto label_2b1a8c;
        case 0x2b1a90u: goto label_2b1a90;
        case 0x2b1a94u: goto label_2b1a94;
        case 0x2b1a98u: goto label_2b1a98;
        case 0x2b1a9cu: goto label_2b1a9c;
        case 0x2b1aa0u: goto label_2b1aa0;
        case 0x2b1aa4u: goto label_2b1aa4;
        case 0x2b1aa8u: goto label_2b1aa8;
        case 0x2b1aacu: goto label_2b1aac;
        case 0x2b1ab0u: goto label_2b1ab0;
        case 0x2b1ab4u: goto label_2b1ab4;
        case 0x2b1ab8u: goto label_2b1ab8;
        case 0x2b1abcu: goto label_2b1abc;
        case 0x2b1ac0u: goto label_2b1ac0;
        case 0x2b1ac4u: goto label_2b1ac4;
        case 0x2b1ac8u: goto label_2b1ac8;
        case 0x2b1accu: goto label_2b1acc;
        case 0x2b1ad0u: goto label_2b1ad0;
        case 0x2b1ad4u: goto label_2b1ad4;
        case 0x2b1ad8u: goto label_2b1ad8;
        case 0x2b1adcu: goto label_2b1adc;
        case 0x2b1ae0u: goto label_2b1ae0;
        case 0x2b1ae4u: goto label_2b1ae4;
        case 0x2b1ae8u: goto label_2b1ae8;
        case 0x2b1aecu: goto label_2b1aec;
        case 0x2b1af0u: goto label_2b1af0;
        case 0x2b1af4u: goto label_2b1af4;
        case 0x2b1af8u: goto label_2b1af8;
        case 0x2b1afcu: goto label_2b1afc;
        case 0x2b1b00u: goto label_2b1b00;
        case 0x2b1b04u: goto label_2b1b04;
        case 0x2b1b08u: goto label_2b1b08;
        case 0x2b1b0cu: goto label_2b1b0c;
        case 0x2b1b10u: goto label_2b1b10;
        case 0x2b1b14u: goto label_2b1b14;
        case 0x2b1b18u: goto label_2b1b18;
        case 0x2b1b1cu: goto label_2b1b1c;
        case 0x2b1b20u: goto label_2b1b20;
        case 0x2b1b24u: goto label_2b1b24;
        case 0x2b1b28u: goto label_2b1b28;
        case 0x2b1b2cu: goto label_2b1b2c;
        case 0x2b1b30u: goto label_2b1b30;
        case 0x2b1b34u: goto label_2b1b34;
        case 0x2b1b38u: goto label_2b1b38;
        case 0x2b1b3cu: goto label_2b1b3c;
        case 0x2b1b40u: goto label_2b1b40;
        case 0x2b1b44u: goto label_2b1b44;
        case 0x2b1b48u: goto label_2b1b48;
        case 0x2b1b4cu: goto label_2b1b4c;
        case 0x2b1b50u: goto label_2b1b50;
        case 0x2b1b54u: goto label_2b1b54;
        case 0x2b1b58u: goto label_2b1b58;
        case 0x2b1b5cu: goto label_2b1b5c;
        case 0x2b1b60u: goto label_2b1b60;
        case 0x2b1b64u: goto label_2b1b64;
        case 0x2b1b68u: goto label_2b1b68;
        case 0x2b1b6cu: goto label_2b1b6c;
        case 0x2b1b70u: goto label_2b1b70;
        case 0x2b1b74u: goto label_2b1b74;
        case 0x2b1b78u: goto label_2b1b78;
        case 0x2b1b7cu: goto label_2b1b7c;
        case 0x2b1b80u: goto label_2b1b80;
        case 0x2b1b84u: goto label_2b1b84;
        default: break;
    }

    ctx->pc = 0x2b19a8u;

label_2b19a8:
    // 0x2b19a8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2b19a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2b19ac:
    // 0x2b19ac: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2b19acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_2b19b0:
    // 0x2b19b0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2b19b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2b19b4:
    // 0x2b19b4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2b19b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_2b19b8:
    // 0x2b19b8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2b19b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b19bc:
    // 0x2b19bc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2b19bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_2b19c0:
    // 0x2b19c0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2b19c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_2b19c4:
    // 0x2b19c4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2b19c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_2b19c8:
    // 0x2b19c8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2b19c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_2b19cc:
    // 0x2b19cc: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2b19ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_2b19d0:
    // 0x2b19d0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x2b19d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_2b19d4:
    // 0x2b19d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b19d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2b19d8:
    // 0x2b19d8: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x2b19d8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2b19dc:
    // 0x2b19dc: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x2b19dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_2b19e0:
    // 0x2b19e0: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2b19e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_2b19e4:
    // 0x2b19e4: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x2b19e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_2b19e8:
    // 0x2b19e8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2b19e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_2b19ec:
    // 0x2b19ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2b19f0:
    if (ctx->pc == 0x2B19F0u) {
        ctx->pc = 0x2B19F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B19ECu;
        // 0x2b19f0: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B19F4u;
        goto label_2b19f4;
    }
    ctx->pc = 0x2B19ECu;
    {
        const bool branch_taken_0x2b19ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B19F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B19ECu;
        // 0x2b19f0: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b19ec) {
            ctx->pc = 0x2B19FCu;
            goto label_2b19fc;
        }
    }
    ctx->pc = 0x2B19F4u;
label_2b19f4:
    // 0x2b19f4: 0x10000054  b           . + 4 + (0x54 << 2)
label_2b19f8:
    if (ctx->pc == 0x2B19F8u) {
        ctx->pc = 0x2B19F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B19F4u;
        // 0x2b19f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B19FCu;
        goto label_2b19fc;
    }
    ctx->pc = 0x2B19F4u;
    {
        const bool branch_taken_0x2b19f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B19F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B19F4u;
        // 0x2b19f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b19f4) {
            ctx->pc = 0x2B1B48u;
            goto label_2b1b48;
        }
    }
    ctx->pc = 0x2B19FCu;
label_2b19fc:
    // 0x2b19fc: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2b19fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_2b1a00:
    // 0x2b1a00: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
label_2b1a04:
    if (ctx->pc == 0x2B1A04u) {
        ctx->pc = 0x2B1A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A00u;
        // 0x2b1a04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1A08u;
        goto label_2b1a08;
    }
    ctx->pc = 0x2B1A00u;
    {
        const bool branch_taken_0x2b1a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A00u;
        // 0x2b1a04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1a00) {
            ctx->pc = 0x2B1B48u;
            goto label_2b1b48;
        }
    }
    ctx->pc = 0x2B1A08u;
label_2b1a08:
    // 0x2b1a08: 0x96b3000c  lhu         $s3, 0xC($s5)
    ctx->pc = 0x2b1a08u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
label_2b1a0c:
    // 0x2b1a0c: 0x1260004e  beqz        $s3, . + 4 + (0x4E << 2)
label_2b1a10:
    if (ctx->pc == 0x2B1A10u) {
        ctx->pc = 0x2B1A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A0Cu;
        // 0x2b1a10: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1A14u;
        goto label_2b1a14;
    }
    ctx->pc = 0x2B1A0Cu;
    {
        const bool branch_taken_0x2b1a0c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A0Cu;
        // 0x2b1a10: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1a0c) {
            ctx->pc = 0x2B1B48u;
            goto label_2b1b48;
        }
    }
    ctx->pc = 0x2B1A14u;
label_2b1a14:
    // 0x2b1a14: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b1a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2b1a18:
    // 0x2b1a18: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2b1a18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_2b1a1c:
    // 0x2b1a1c: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x2b1a1cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b1a20:
    // 0x2b1a20: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x2b1a20u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b1a24:
    // 0x2b1a24: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2b1a24u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1a28:
    // 0x2b1a28: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x2b1a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_2b1a2c:
    // 0x2b1a2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b1a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1a30:
    // 0x2b1a30: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2b1a30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b1a34:
    // 0x2b1a34: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x2b1a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_2b1a38:
    // 0x2b1a38: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2b1a38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b1a3c:
    // 0x2b1a3c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x2b1a3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2b1a40:
    // 0x2b1a40: 0xc0aa486  jal         func_2A9218
label_2b1a44:
    if (ctx->pc == 0x2B1A44u) {
        ctx->pc = 0x2B1A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A40u;
        // 0x2b1a44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1A48u;
        goto label_2b1a48;
    }
    ctx->pc = 0x2B1A40u;
    SET_GPR_U32(ctx, 31, 0x2B1A48u);
    ctx->pc = 0x2B1A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1A40u;
    // 0x2b1a44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9218u, 0x2B1A40u, 0x2B1A48u)) {
        return;
    }
    ctx->pc = 0x2B1A48u;
label_2b1a48:
    // 0x2b1a48: 0x5040003b  beql        $v0, $zero, . + 4 + (0x3B << 2)
label_2b1a4c:
    if (ctx->pc == 0x2B1A4Cu) {
        ctx->pc = 0x2B1A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A48u;
        // 0x2b1a4c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1A50u;
        goto label_2b1a50;
    }
    ctx->pc = 0x2B1A48u;
    {
        const bool branch_taken_0x2b1a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1a48) {
            ctx->pc = 0x2B1A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1A48u;
            // 0x2b1a4c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1B38u;
            goto label_2b1b38;
        }
    }
    ctx->pc = 0x2B1A50u;
label_2b1a50:
    // 0x2b1a50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b1a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b1a54:
    // 0x2b1a54: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2b1a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2b1a58:
    // 0x2b1a58: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x2b1a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2b1a5c:
    // 0x2b1a5c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2b1a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2b1a60:
    // 0x2b1a60: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2b1a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2b1a64:
    // 0x2b1a64: 0xc093aa8  jal         func_24EAA0
label_2b1a68:
    if (ctx->pc == 0x2B1A68u) {
        ctx->pc = 0x2B1A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A64u;
        // 0x2b1a68: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1A6Cu;
        goto label_2b1a6c;
    }
    ctx->pc = 0x2B1A64u;
    SET_GPR_U32(ctx, 31, 0x2B1A6Cu);
    ctx->pc = 0x2B1A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1A64u;
    // 0x2b1a68: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x2B1A64u, 0x2B1A6Cu)) {
        return;
    }
    ctx->pc = 0x2B1A6Cu;
label_2b1a6c:
    // 0x2b1a6c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b1a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b1a70:
    // 0x2b1a70: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2b1a70u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2b1a74:
    // 0x2b1a74: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2b1a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2b1a78:
    // 0x2b1a78: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x2b1a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2b1a7c:
    // 0x2b1a7c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2b1a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2b1a80:
    // 0x2b1a80: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2b1a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2b1a84:
    // 0x2b1a84: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2b1a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2b1a88:
    // 0x2b1a88: 0xc093aa8  jal         func_24EAA0
label_2b1a8c:
    if (ctx->pc == 0x2B1A8Cu) {
        ctx->pc = 0x2B1A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A88u;
        // 0x2b1a8c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1A90u;
        goto label_2b1a90;
    }
    ctx->pc = 0x2B1A88u;
    SET_GPR_U32(ctx, 31, 0x2B1A90u);
    ctx->pc = 0x2B1A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1A88u;
    // 0x2b1a8c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x2B1A88u, 0x2B1A90u)) {
        return;
    }
    ctx->pc = 0x2B1A90u;
label_2b1a90:
    // 0x2b1a90: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b1a90u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2b1a94:
    // 0x2b1a94: 0xc093aa8  jal         func_24EAA0
label_2b1a98:
    if (ctx->pc == 0x2B1A98u) {
        ctx->pc = 0x2B1A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A94u;
        // 0x2b1a98: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1A9Cu;
        goto label_2b1a9c;
    }
    ctx->pc = 0x2B1A94u;
    SET_GPR_U32(ctx, 31, 0x2B1A9Cu);
    ctx->pc = 0x2B1A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1A94u;
    // 0x2b1a98: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x2B1A94u, 0x2B1A9Cu)) {
        return;
    }
    ctx->pc = 0x2B1A9Cu;
label_2b1a9c:
    // 0x2b1a9c: 0x167e000d  bne         $s3, $fp, . + 4 + (0xD << 2)
label_2b1aa0:
    if (ctx->pc == 0x2B1AA0u) {
        ctx->pc = 0x2B1AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A9Cu;
        // 0x2b1aa0: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1AA4u;
        goto label_2b1aa4;
    }
    ctx->pc = 0x2B1A9Cu;
    {
        const bool branch_taken_0x2b1a9c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 30));
        ctx->pc = 0x2B1AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A9Cu;
        // 0x2b1aa0: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1a9c) {
            ctx->pc = 0x2B1AD4u;
            goto label_2b1ad4;
        }
    }
    ctx->pc = 0x2B1AA4u;
label_2b1aa4:
    // 0x2b1aa4: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x2b1aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2b1aa8:
    // 0x2b1aa8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2b1aa8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2b1aac:
    // 0x2b1aac: 0x1477000b  bne         $v1, $s7, . + 4 + (0xB << 2)
label_2b1ab0:
    if (ctx->pc == 0x2B1AB0u) {
        ctx->pc = 0x2B1AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1AACu;
        // 0x2b1ab0: 0xc7a0000c  lwc1        $f0, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1AB4u;
        goto label_2b1ab4;
    }
    ctx->pc = 0x2B1AACu;
    {
        const bool branch_taken_0x2b1aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x2B1AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1AACu;
        // 0x2b1ab0: 0xc7a0000c  lwc1        $f0, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1aac) {
            ctx->pc = 0x2B1ADCu;
            goto label_2b1adc;
        }
    }
    ctx->pc = 0x2B1AB4u;
label_2b1ab4:
    // 0x2b1ab4: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x2b1ab4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_2b1ab8:
    // 0x2b1ab8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b1ab8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b1abc:
    // 0x2b1abc: 0x0  nop
    ctx->pc = 0x2b1abcu;
    // NOP
label_2b1ac0:
    // 0x2b1ac0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2b1ac4:
    if (ctx->pc == 0x2B1AC4u) {
        ctx->pc = 0x2B1AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1AC0u;
        // 0x2b1ac4: 0xc7a0000c  lwc1        $f0, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1AC8u;
        goto label_2b1ac8;
    }
    ctx->pc = 0x2B1AC0u;
    {
        const bool branch_taken_0x2b1ac0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B1AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1AC0u;
        // 0x2b1ac4: 0xc7a0000c  lwc1        $f0, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ac0) {
            ctx->pc = 0x2B1ADCu;
            goto label_2b1adc;
        }
    }
    ctx->pc = 0x2B1AC8u;
label_2b1ac8:
    // 0x2b1ac8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2b1ac8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b1acc:
    // 0x2b1acc: 0x10000005  b           . + 4 + (0x5 << 2)
label_2b1ad0:
    if (ctx->pc == 0x2B1AD0u) {
        ctx->pc = 0x2B1AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1ACCu;
        // 0x2b1ad0: 0x4601a002  mul.s       $f0, $f20, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1AD4u;
        goto label_2b1ad4;
    }
    ctx->pc = 0x2B1ACCu;
    {
        const bool branch_taken_0x2b1acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1ACCu;
        // 0x2b1ad0: 0x4601a002  mul.s       $f0, $f20, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1acc) {
            ctx->pc = 0x2B1AE4u;
            goto label_2b1ae4;
        }
    }
    ctx->pc = 0x2B1AD4u;
label_2b1ad4:
    // 0x2b1ad4: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2b1ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b1ad8:
    // 0x2b1ad8: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x2b1ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2b1adc:
    // 0x2b1adc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b1adcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b1ae0:
    // 0x2b1ae0: 0x4601a002  mul.s       $f0, $f20, $f1
    ctx->pc = 0x2b1ae0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_2b1ae4:
    // 0x2b1ae4: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x2b1ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2b1ae8:
    // 0x2b1ae8: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x2b1ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b1aec:
    // 0x2b1aec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b1af0:
    // 0x2b1af0: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x2b1af0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_2b1af4:
    // 0x2b1af4: 0x40f809  jalr        $v0
label_2b1af8:
    if (ctx->pc == 0x2B1AF8u) {
        ctx->pc = 0x2B1AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1AF4u;
        // 0x2b1af8: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1AFCu;
        goto label_2b1afc;
    }
    ctx->pc = 0x2B1AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B1AFCu);
        ctx->pc = 0x2B1AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1AF4u;
        // 0x2b1af8: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1AF4u, 0x2B1AFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B1AFCu;
label_2b1afc:
    // 0x2b1afc: 0xc622004c  lwc1        $f2, 0x4C($s1)
    ctx->pc = 0x2b1afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b1b00:
    // 0x2b1b00: 0xc681001c  lwc1        $f1, 0x1C($s4)
    ctx->pc = 0x2b1b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b1b04:
    // 0x2b1b04: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2b1b04u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2b1b08:
    // 0x2b1b08: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x2b1b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2b1b0c:
    // 0x2b1b0c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2b1b0cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_2b1b10:
    // 0x2b1b10: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b1b10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2b1b14:
    // 0x2b1b14: 0x46160042  mul.s       $f1, $f0, $f22
    ctx->pc = 0x2b1b14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_2b1b18:
    // 0x2b1b18: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x2b1b18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b1b1c:
    // 0x2b1b1c: 0x0  nop
    ctx->pc = 0x2b1b1cu;
    // NOP
label_2b1b20:
    // 0x2b1b20: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2b1b24:
    if (ctx->pc == 0x2B1B24u) {
        ctx->pc = 0x2B1B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B20u;
        // 0x2b1b24: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1B28u;
        goto label_2b1b28;
    }
    ctx->pc = 0x2B1B20u;
    {
        const bool branch_taken_0x2b1b20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B1B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B20u;
        // 0x2b1b24: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1b20) {
            ctx->pc = 0x2B1B38u;
            goto label_2b1b38;
        }
    }
    ctx->pc = 0x2B1B28u;
label_2b1b28:
    // 0x2b1b28: 0x46141834  c.lt.s      $f3, $f20
    ctx->pc = 0x2b1b28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b1b2c:
    // 0x2b1b2c: 0x0  nop
    ctx->pc = 0x2b1b2cu;
    // NOP
label_2b1b30:
    // 0x2b1b30: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2b1b34:
    if (ctx->pc == 0x2B1B34u) {
        ctx->pc = 0x2B1B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B30u;
        // 0x2b1b34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1B38u;
        goto label_2b1b38;
    }
    ctx->pc = 0x2B1B30u;
    {
        const bool branch_taken_0x2b1b30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B1B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B30u;
        // 0x2b1b34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1b30) {
            ctx->pc = 0x2B1B48u;
            goto label_2b1b48;
        }
    }
    ctx->pc = 0x2B1B38u;
label_2b1b38:
    // 0x2b1b38: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x2b1b38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_2b1b3c:
    // 0x2b1b3c: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
label_2b1b40:
    if (ctx->pc == 0x2B1B40u) {
        ctx->pc = 0x2B1B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B3Cu;
        // 0x2b1b40: 0x26d6000c  addiu       $s6, $s6, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1B44u;
        goto label_2b1b44;
    }
    ctx->pc = 0x2B1B3Cu;
    {
        const bool branch_taken_0x2b1b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B3Cu;
        // 0x2b1b40: 0x26d6000c  addiu       $s6, $s6, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1b3c) {
            ctx->pc = 0x2B1A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b1a28;
        }
    }
    ctx->pc = 0x2B1B44u;
label_2b1b44:
    // 0x2b1b44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b1b44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1b48:
    // 0x2b1b48: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2b1b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2b1b4c:
    // 0x2b1b4c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2b1b4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2b1b50:
    // 0x2b1b50: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2b1b50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2b1b54:
    // 0x2b1b54: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2b1b54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2b1b58:
    // 0x2b1b58: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2b1b58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2b1b5c:
    // 0x2b1b5c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2b1b5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2b1b60:
    // 0x2b1b60: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2b1b60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2b1b64:
    // 0x2b1b64: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2b1b64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b1b68:
    // 0x2b1b68: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x2b1b68u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b1b6c:
    // 0x2b1b6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b1b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b1b70:
    // 0x2b1b70: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x2b1b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2b1b74:
    // 0x2b1b74: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x2b1b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2b1b78:
    // 0x2b1b78: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2b1b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2b1b7c:
    // 0x2b1b7c: 0x3e00008  jr          $ra
label_2b1b80:
    if (ctx->pc == 0x2B1B80u) {
        ctx->pc = 0x2B1B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B7Cu;
        // 0x2b1b80: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1B84u;
        goto label_2b1b84;
    }
    ctx->pc = 0x2B1B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B7Cu;
        // 0x2b1b80: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1B84u;
label_2b1b84:
    // 0x2b1b84: 0x0  nop
    ctx->pc = 0x2b1b84u;
    // NOP
    ctx->pc = 0x2b1b88u;
}
