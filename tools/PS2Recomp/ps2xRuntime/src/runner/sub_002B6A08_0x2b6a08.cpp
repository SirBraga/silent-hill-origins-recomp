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

// Function: sub_002B6A08
// Address: 0x2b6a08 - 0x2b7160
void sub_002B6A08_0x2b6a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6A08_0x2b6a08");
#endif

    switch (ctx->pc) {
        case 0x2b6ab0u: goto label_2b6ab0;
        case 0x2b6b38u: goto label_2b6b38;
        case 0x2b6c58u: goto label_2b6c58;
        case 0x2b6da8u: goto label_2b6da8;
        case 0x2b6e28u: goto label_2b6e28;
        case 0x2b6f5cu: goto label_2b6f5c;
        default: break;
    }

    ctx->pc = 0x2b6a08u;

    // 0x2b6a08: 0x27bdd3d0  addiu       $sp, $sp, -0x2C30
    ctx->pc = 0x2b6a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294955984));
    // 0x2b6a0c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2b6a0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6a10: 0x7fb12c00  sq          $s1, 0x2C00($sp)
    ctx->pc = 0x2b6a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 11264), GPR_VEC(ctx, 17));
    // 0x2b6a14: 0x3403981c  ori         $v1, $zero, 0x981C
    ctx->pc = 0x2b6a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38940);
    // 0x2b6a18: 0xe7b52c28  swc1        $f21, 0x2C28($sp)
    ctx->pc = 0x2b6a18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 11304), bits); }
    // 0x2b6a1c: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2b6a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2b6a20: 0xe7b42c20  swc1        $f20, 0x2C20($sp)
    ctx->pc = 0x2b6a20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 11296), bits); }
    // 0x2b6a24: 0x30cfffff  andi        $t7, $a2, 0xFFFF
    ctx->pc = 0x2b6a24u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2b6a28: 0x7fb02c10  sq          $s0, 0x2C10($sp)
    ctx->pc = 0x2b6a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 11280), GPR_VEC(ctx, 16));
    // 0x2b6a2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b6a2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6a30: 0x7fb22bf0  sq          $s2, 0x2BF0($sp)
    ctx->pc = 0x2b6a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 11248), GPR_VEC(ctx, 18));
    // 0x2b6a34: 0x27ab0020  addiu       $t3, $sp, 0x20
    ctx->pc = 0x2b6a34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b6a38: 0x7fb32be0  sq          $s3, 0x2BE0($sp)
    ctx->pc = 0x2b6a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 11232), GPR_VEC(ctx, 19));
    // 0x2b6a3c: 0x27ac2802  addiu       $t4, $sp, 0x2802
    ctx->pc = 0x2b6a3cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 10242));
    // 0x2b6a40: 0x7fb42bd0  sq          $s4, 0x2BD0($sp)
    ctx->pc = 0x2b6a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 11216), GPR_VEC(ctx, 20));
    // 0x2b6a44: 0x7fb52bc0  sq          $s5, 0x2BC0($sp)
    ctx->pc = 0x2b6a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 11200), GPR_VEC(ctx, 21));
    // 0x2b6a48: 0x7fb62bb0  sq          $s6, 0x2BB0($sp)
    ctx->pc = 0x2b6a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 11184), GPR_VEC(ctx, 22));
    // 0x2b6a4c: 0x7fb72ba0  sq          $s7, 0x2BA0($sp)
    ctx->pc = 0x2b6a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 11168), GPR_VEC(ctx, 23));
    // 0x2b6a50: 0x7fbe2b90  sq          $fp, 0x2B90($sp)
    ctx->pc = 0x2b6a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 11152), GPR_VEC(ctx, 30));
    // 0x2b6a54: 0xffbf2b80  sd          $ra, 0x2B80($sp)
    ctx->pc = 0x2b6a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 11136), GPR_U64(ctx, 31));
    // 0x2b6a58: 0xc795814c  lwc1        $f21, -0x7EB4($gp)
    ctx->pc = 0x2b6a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b6a5c: 0x79027fe0  lq          $v0, 0x7FE0($t0)
    ctx->pc = 0x2b6a5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 32736)));
    // 0x2b6a60: 0x79047ff0  lq          $a0, 0x7FF0($t0)
    ctx->pc = 0x2b6a60u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 8), 32752)));
    // 0x2b6a64: 0xafa32ac8  sw          $v1, 0x2AC8($sp)
    ctx->pc = 0x2b6a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10952), GPR_U32(ctx, 3));
    // 0x2b6a68: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2b6a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2b6a6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b6a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6a70: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x2b6a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x2b6a74: 0xf1040  sll         $v0, $t7, 1
    ctx->pc = 0x2b6a74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
    // 0x2b6a78: 0x27a42800  addiu       $a0, $sp, 0x2800
    ctx->pc = 0x2b6a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10240));
    // 0x2b6a7c: 0xafa22acc  sw          $v0, 0x2ACC($sp)
    ctx->pc = 0x2b6a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10956), GPR_U32(ctx, 2));
    // 0x2b6a80: 0xafa32ac0  sw          $v1, 0x2AC0($sp)
    ctx->pc = 0x2b6a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10944), GPR_U32(ctx, 3));
    // 0x2b6a84: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2b6a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b6a88: 0xafa42ad8  sw          $a0, 0x2AD8($sp)
    ctx->pc = 0x2b6a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10968), GPR_U32(ctx, 4));
    // 0x2b6a8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b6a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b6a90: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2b6a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b6a94: 0xa7a02800  sh          $zero, 0x2800($sp)
    ctx->pc = 0x2b6a94u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 10240), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b6a98: 0xc7948150  lwc1        $f20, -0x7EB0($gp)
    ctx->pc = 0x2b6a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b6a9c: 0xafa22adc  sw          $v0, 0x2ADC($sp)
    ctx->pc = 0x2b6a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10972), GPR_U32(ctx, 2));
    // 0x2b6aa0: 0xafa32ae0  sw          $v1, 0x2AE0($sp)
    ctx->pc = 0x2b6aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10976), GPR_U32(ctx, 3));
    // 0x2b6aa4: 0xafa42ae4  sw          $a0, 0x2AE4($sp)
    ctx->pc = 0x2b6aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10980), GPR_U32(ctx, 4));
    // 0x2b6aa8: 0x8fa22ae0  lw          $v0, 0x2AE0($sp)
    ctx->pc = 0x2b6aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10976)));
    // 0x2b6aac: 0x0  nop
    ctx->pc = 0x2b6aacu;
    // NOP
label_2b6ab0:
    // 0x2b6ab0: 0x256bffe0  addiu       $t3, $t3, -0x20
    ctx->pc = 0x2b6ab0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967264));
    // 0x2b6ab4: 0x79630000  lq          $v1, 0x0($t3)
    ctx->pc = 0x2b6ab4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2b6ab8: 0x258cfffe  addiu       $t4, $t4, -0x2
    ctx->pc = 0x2b6ab8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967294));
    // 0x2b6abc: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2b6abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2b6ac0: 0x8fa42ae4  lw          $a0, 0x2AE4($sp)
    ctx->pc = 0x2b6ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10980)));
    // 0x2b6ac4: 0xafa22ae0  sw          $v0, 0x2AE0($sp)
    ctx->pc = 0x2b6ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10976), GPR_U32(ctx, 2));
    // 0x2b6ac8: 0x8fa22ac0  lw          $v0, 0x2AC0($sp)
    ctx->pc = 0x2b6ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10944)));
    // 0x2b6acc: 0x2484ffe0  addiu       $a0, $a0, -0x20
    ctx->pc = 0x2b6accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x2b6ad0: 0xafa42ae4  sw          $a0, 0x2AE4($sp)
    ctx->pc = 0x2b6ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10980), GPR_U32(ctx, 4));
    // 0x2b6ad4: 0x7fa32aa0  sq          $v1, 0x2AA0($sp)
    ctx->pc = 0x2b6ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10912), GPR_VEC(ctx, 3));
    // 0x2b6ad8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b6ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b6adc: 0xafa22ac0  sw          $v0, 0x2AC0($sp)
    ctx->pc = 0x2b6adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10944), GPR_U32(ctx, 2));
    // 0x2b6ae0: 0x79620010  lq          $v0, 0x10($t3)
    ctx->pc = 0x2b6ae0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x2b6ae4: 0x8fa42ac8  lw          $a0, 0x2AC8($sp)
    ctx->pc = 0x2b6ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10952)));
    // 0x2b6ae8: 0x7fa22ab0  sq          $v0, 0x2AB0($sp)
    ctx->pc = 0x2b6ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10928), GPR_VEC(ctx, 2));
    // 0x2b6aec: 0x800013  mtlo        $a0
    ctx->pc = 0x2b6aecu;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x2b6af0: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x2b6af0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2b6af4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b6af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b6af8: 0x70641000  madd        $v0, $v1, $a0
    ctx->pc = 0x2b6af8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b6afc: 0xafa32ac4  sw          $v1, 0x2AC4($sp)
    ctx->pc = 0x2b6afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10948), GPR_U32(ctx, 3));
    // 0x2b6b00: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2b6b00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6b04: 0x306203ff  andi        $v0, $v1, 0x3FF
    ctx->pc = 0x2b6b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1023);
    // 0x2b6b08: 0x240303ff  addiu       $v1, $zero, 0x3FF
    ctx->pc = 0x2b6b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x2b6b0c: 0x1043005a  beq         $v0, $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x2B6B0Cu;
    {
        const bool branch_taken_0x2b6b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B6B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B0Cu;
        // 0x2b6b10: 0x34048000  ori         $a0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6b0c) {
            ctx->pc = 0x2B6C78u;
            goto label_2b6c78;
        }
    }
    ctx->pc = 0x2B6B14u;
    // 0x2b6b14: 0x8fa32acc  lw          $v1, 0x2ACC($sp)
    ctx->pc = 0x2b6b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10956)));
    // 0x2b6b18: 0x1048021  addu        $s0, $t0, $a0
    ctx->pc = 0x2b6b18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2b6b1c: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x2b6b1cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6b20: 0x26123810  addiu       $s2, $s0, 0x3810
    ctx->pc = 0x2b6b20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 14352));
    // 0x2b6b24: 0x2616081e  addiu       $s6, $s0, 0x81E
    ctx->pc = 0x2b6b24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 2078));
    // 0x2b6b28: 0x243a821  addu        $s5, $s2, $v1
    ctx->pc = 0x2b6b28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2b6b2c: 0x26130820  addiu       $s3, $s0, 0x820
    ctx->pc = 0x2b6b2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
    // 0x2b6b30: 0x241703ff  addiu       $s7, $zero, 0x3FF
    ctx->pc = 0x2b6b30u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x2b6b34: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2b6b34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2b6b38:
    // 0x2b6b38: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2b6b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6b3c: 0x2c41021  addu        $v0, $s6, $a0
    ctx->pc = 0x2b6b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x2b6b40: 0x8f8389f0  lw          $v1, -0x7610($gp)
    ctx->pc = 0x2b6b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937072)));
    // 0x2b6b44: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x2b6b44u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6b48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b6b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b6b4c: 0x30a603ff  andi        $a2, $a1, 0x3FF
    ctx->pc = 0x2b6b4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1023);
    // 0x2b6b50: 0xaf8389f0  sw          $v1, -0x7610($gp)
    ctx->pc = 0x2b6b50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937072), GPR_U32(ctx, 3));
    // 0x2b6b54: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x2b6b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x2b6b58: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2b6b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2b6b5c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2b6b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6b60: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b6b60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6b64: 0x0  nop
    ctx->pc = 0x2b6b64u;
    // NOP
    // 0x2b6b68: 0x4500003f  bc1f        . + 4 + (0x3F << 2)
    ctx->pc = 0x2B6B68u;
    {
        const bool branch_taken_0x2b6b68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B6B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B68u;
        // 0x2b6b6c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6b68) {
            ctx->pc = 0x2B6C68u;
            goto label_2b6c68;
        }
    }
    ctx->pc = 0x2B6B70u;
    // 0x2b6b70: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x2b6b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6b74: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2b6b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6b78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b6b78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6b7c: 0x0  nop
    ctx->pc = 0x2b6b7cu;
    // NOP
    // 0x2b6b80: 0x4502003a  bc1fl       . + 4 + (0x3A << 2)
    ctx->pc = 0x2B6B80u;
    {
        const bool branch_taken_0x2b6b80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6b80) {
            ctx->pc = 0x2B6B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6B80u;
            // 0x2b6b84: 0x2741021  addu        $v0, $s3, $s4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6C6Cu;
            goto label_2b6c6c;
        }
    }
    ctx->pc = 0x2B6B88u;
    // 0x2b6b88: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2b6b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6b8c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2b6b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6b90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b6b90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6b94: 0x0  nop
    ctx->pc = 0x2b6b94u;
    // NOP
    // 0x2b6b98: 0x45020034  bc1fl       . + 4 + (0x34 << 2)
    ctx->pc = 0x2B6B98u;
    {
        const bool branch_taken_0x2b6b98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6b98) {
            ctx->pc = 0x2B6B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6B98u;
            // 0x2b6b9c: 0x2741021  addu        $v0, $s3, $s4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6C6Cu;
            goto label_2b6c6c;
        }
    }
    ctx->pc = 0x2B6BA0u;
    // 0x2b6ba0: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x2b6ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6ba4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b6ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6ba8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b6ba8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6bac: 0x0  nop
    ctx->pc = 0x2b6bacu;
    // NOP
    // 0x2b6bb0: 0x4502002e  bc1fl       . + 4 + (0x2E << 2)
    ctx->pc = 0x2B6BB0u;
    {
        const bool branch_taken_0x2b6bb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6bb0) {
            ctx->pc = 0x2B6BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6BB0u;
            // 0x2b6bb4: 0x2741021  addu        $v0, $s3, $s4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6C6Cu;
            goto label_2b6c6c;
        }
    }
    ctx->pc = 0x2B6BB8u;
    // 0x2b6bb8: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2b6bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6bbc: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2b6bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6bc0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b6bc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6bc4: 0x0  nop
    ctx->pc = 0x2b6bc4u;
    // NOP
    // 0x2b6bc8: 0x45020028  bc1fl       . + 4 + (0x28 << 2)
    ctx->pc = 0x2B6BC8u;
    {
        const bool branch_taken_0x2b6bc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6bc8) {
            ctx->pc = 0x2B6BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6BC8u;
            // 0x2b6bcc: 0x2741021  addu        $v0, $s3, $s4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6C6Cu;
            goto label_2b6c6c;
        }
    }
    ctx->pc = 0x2B6BD0u;
    // 0x2b6bd0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b6bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6bd4: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2b6bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6bd8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b6bd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6bdc: 0x0  nop
    ctx->pc = 0x2b6bdcu;
    // NOP
    // 0x2b6be0: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x2B6BE0u;
    {
        const bool branch_taken_0x2b6be0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B6BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6BE0u;
        // 0x2b6be4: 0x2741021  addu        $v0, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6be0) {
            ctx->pc = 0x2B6C6Cu;
            goto label_2b6c6c;
        }
    }
    ctx->pc = 0x2B6BE8u;
    // 0x2b6be8: 0x8e074018  lw          $a3, 0x4018($s0)
    ctx->pc = 0x2b6be8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16408)));
    // 0x2b6bec: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B6BECu;
    {
        const bool branch_taken_0x2b6bec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6BECu;
        // 0x2b6bf0: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6bec) {
            ctx->pc = 0x2B6C30u;
            goto label_2b6c30;
        }
    }
    ctx->pc = 0x2B6BF4u;
    // 0x2b6bf4: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x2b6bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2b6bf8: 0x96a40000  lhu         $a0, 0x0($s5)
    ctx->pc = 0x2b6bf8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2b6bfc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2b6bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2b6c00: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x2b6c00u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6c04: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2b6c04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b6c08: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2b6c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2b6c0c: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2b6c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2b6c10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b6c10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b6c14: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2b6c14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2b6c18: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2b6c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2b6c1c: 0x9e2004  sllv        $a0, $fp, $a0
    ctx->pc = 0x2b6c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), GPR_U32(ctx, 4) & 0x1F));
    // 0x2b6c20: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2b6c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2b6c24: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2b6c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2b6c28: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B6C28u;
    {
        const bool branch_taken_0x2b6c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C28u;
        // 0x2b6c2c: 0x2741021  addu        $v0, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6c28) {
            ctx->pc = 0x2B6C6Cu;
            goto label_2b6c6c;
        }
    }
    ctx->pc = 0x2B6C30u;
label_2b6c30:
    // 0x2b6c30: 0x8f8289f4  lw          $v0, -0x760C($gp)
    ctx->pc = 0x2b6c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937076)));
    // 0x2b6c34: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x2b6c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6c38: 0x8e044010  lw          $a0, 0x4010($s0)
    ctx->pc = 0x2b6c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16400)));
    // 0x2b6c3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b6c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b6c40: 0x7fa82af0  sq          $t0, 0x2AF0($sp)
    ctx->pc = 0x2b6c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10992), GPR_VEC(ctx, 8));
    // 0x2b6c44: 0x7fab2b20  sq          $t3, 0x2B20($sp)
    ctx->pc = 0x2b6c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 11040), GPR_VEC(ctx, 11));
    // 0x2b6c48: 0x7fac2b30  sq          $t4, 0x2B30($sp)
    ctx->pc = 0x2b6c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 11056), GPR_VEC(ctx, 12));
    // 0x2b6c4c: 0x7faf2b60  sq          $t7, 0x2B60($sp)
    ctx->pc = 0x2b6c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 11104), GPR_VEC(ctx, 15));
    // 0x2b6c50: 0xc0adf4a  jal         func_2B7D28
    ctx->pc = 0x2B6C50u;
    SET_GPR_U32(ctx, 31, 0x2B6C58u);
    ctx->pc = 0x2B6C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6C50u;
    // 0x2b6c54: 0xaf8289f4  sw          $v0, -0x760C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937076), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B7D28u, 0x2B6C50u, 0x2B6C58u)) {
        return;
    }
    ctx->pc = 0x2B6C58u;
label_2b6c58:
    // 0x2b6c58: 0x7baf2b60  lq          $t7, 0x2B60($sp)
    ctx->pc = 0x2b6c58u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 11104)));
    // 0x2b6c5c: 0x7bac2b30  lq          $t4, 0x2B30($sp)
    ctx->pc = 0x2b6c5cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 11056)));
    // 0x2b6c60: 0x7bab2b20  lq          $t3, 0x2B20($sp)
    ctx->pc = 0x2b6c60u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 11040)));
    // 0x2b6c64: 0x7ba82af0  lq          $t0, 0x2AF0($sp)
    ctx->pc = 0x2b6c64u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 10992)));
label_2b6c68:
    // 0x2b6c68: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x2b6c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_2b6c6c:
    // 0x2b6c6c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2b6c6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6c70: 0x1457ffb1  bne         $v0, $s7, . + 4 + (-0x4F << 2)
    ctx->pc = 0x2B6C70u;
    {
        const bool branch_taken_0x2b6c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x2B6C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C70u;
        // 0x2b6c74: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6c70) {
            ctx->pc = 0x2B6B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6b38;
        }
    }
    ctx->pc = 0x2B6C78u;
label_2b6c78:
    // 0x2b6c78: 0xc7a62ab0  lwc1        $f6, 0x2AB0($sp)
    ctx->pc = 0x2b6c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b6c7c: 0xc7a72ab4  lwc1        $f7, 0x2AB4($sp)
    ctx->pc = 0x2b6c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2b6c80: 0xc7a82ab8  lwc1        $f8, 0x2AB8($sp)
    ctx->pc = 0x2b6c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2b6c84: 0x46153242  mul.s       $f9, $f6, $f21
    ctx->pc = 0x2b6c84u;
    ctx->f[9] = FPU_MUL_S(ctx->f[6], ctx->f[21]);
    // 0x2b6c88: 0x46153a82  mul.s       $f10, $f7, $f21
    ctx->pc = 0x2b6c88u;
    ctx->f[10] = FPU_MUL_S(ctx->f[7], ctx->f[21]);
    // 0x2b6c8c: 0x461542c2  mul.s       $f11, $f8, $f21
    ctx->pc = 0x2b6c8cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[8], ctx->f[21]);
    // 0x2b6c90: 0xc7a32aa0  lwc1        $f3, 0x2AA0($sp)
    ctx->pc = 0x2b6c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b6c94: 0xc7a52aa4  lwc1        $f5, 0x2AA4($sp)
    ctx->pc = 0x2b6c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b6c98: 0x46141802  mul.s       $f0, $f3, $f20
    ctx->pc = 0x2b6c98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x2b6c9c: 0xc7a42aa8  lwc1        $f4, 0x2AA8($sp)
    ctx->pc = 0x2b6c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b6ca0: 0x46142842  mul.s       $f1, $f5, $f20
    ctx->pc = 0x2b6ca0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x2b6ca4: 0x46142082  mul.s       $f2, $f4, $f20
    ctx->pc = 0x2b6ca4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x2b6ca8: 0x46004a40  add.s       $f9, $f9, $f0
    ctx->pc = 0x2b6ca8u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x2b6cac: 0x46015280  add.s       $f10, $f10, $f1
    ctx->pc = 0x2b6cacu;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[1]);
    // 0x2b6cb0: 0x46025ac0  add.s       $f11, $f11, $f2
    ctx->pc = 0x2b6cb0u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[2]);
    // 0x2b6cb4: 0xe7a92a90  swc1        $f9, 0x2A90($sp)
    ctx->pc = 0x2b6cb4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10896), bits); }
    // 0x2b6cb8: 0xe7aa2a94  swc1        $f10, 0x2A94($sp)
    ctx->pc = 0x2b6cb8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10900), bits); }
    // 0x2b6cbc: 0xe7ab2a98  swc1        $f11, 0x2A98($sp)
    ctx->pc = 0x2b6cbcu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10904), bits); }
    // 0x2b6cc0: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x2b6cc0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x2b6cc4: 0x46152942  mul.s       $f5, $f5, $f21
    ctx->pc = 0x2b6cc4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[21]);
    // 0x2b6cc8: 0x46152102  mul.s       $f4, $f4, $f21
    ctx->pc = 0x2b6cc8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
    // 0x2b6ccc: 0x46143182  mul.s       $f6, $f6, $f20
    ctx->pc = 0x2b6cccu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[20]);
    // 0x2b6cd0: 0x461439c2  mul.s       $f7, $f7, $f20
    ctx->pc = 0x2b6cd0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[20]);
    // 0x2b6cd4: 0x46144202  mul.s       $f8, $f8, $f20
    ctx->pc = 0x2b6cd4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[20]);
    // 0x2b6cd8: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x2b6cd8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x2b6cdc: 0x46072940  add.s       $f5, $f5, $f7
    ctx->pc = 0x2b6cdcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[7]);
    // 0x2b6ce0: 0x46082100  add.s       $f4, $f4, $f8
    ctx->pc = 0x2b6ce0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[8]);
    // 0x2b6ce4: 0xe7a32a80  swc1        $f3, 0x2A80($sp)
    ctx->pc = 0x2b6ce4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10880), bits); }
    // 0x2b6ce8: 0xe7a52a84  swc1        $f5, 0x2A84($sp)
    ctx->pc = 0x2b6ce8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10884), bits); }
    // 0x2b6cec: 0xe7a42a88  swc1        $f4, 0x2A88($sp)
    ctx->pc = 0x2b6cecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10888), bits); }
    // 0x2b6cf0: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2b6cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6cf4: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2b6cf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6cf8: 0x0  nop
    ctx->pc = 0x2b6cf8u;
    // NOP
    // 0x2b6cfc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B6CFCu;
    {
        const bool branch_taken_0x2b6cfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B6D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6CFCu;
        // 0x2b6d00: 0x241500ff  addiu       $s5, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6cfc) {
            ctx->pc = 0x2B6D08u;
            goto label_2b6d08;
        }
    }
    ctx->pc = 0x2B6D04u;
    // 0x2b6d04: 0x241500aa  addiu       $s5, $zero, 0xAA
    ctx->pc = 0x2b6d04u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
label_2b6d08:
    // 0x2b6d08: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2b6d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6d0c: 0x46090034  c.lt.s      $f0, $f9
    ctx->pc = 0x2b6d0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6d10: 0x0  nop
    ctx->pc = 0x2b6d10u;
    // NOP
    // 0x2b6d14: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2B6D14u;
    {
        const bool branch_taken_0x2b6d14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6d14) {
            ctx->pc = 0x2B6D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6D14u;
            // 0x2b6d18: 0x32b50055  andi        $s5, $s5, 0x55 (Delay Slot)
            SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)85);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6D1Cu;
            goto label_2b6d1c;
        }
    }
    ctx->pc = 0x2B6D1Cu;
label_2b6d1c:
    // 0x2b6d1c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x2b6d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6d20: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2b6d20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6d24: 0x0  nop
    ctx->pc = 0x2b6d24u;
    // NOP
    // 0x2b6d28: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2B6D28u;
    {
        const bool branch_taken_0x2b6d28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6d28) {
            ctx->pc = 0x2B6D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6D28u;
            // 0x2b6d2c: 0x32b500cc  andi        $s5, $s5, 0xCC (Delay Slot)
            SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)204);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6D30u;
            goto label_2b6d30;
        }
    }
    ctx->pc = 0x2B6D30u;
label_2b6d30:
    // 0x2b6d30: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2b6d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6d34: 0x460a0034  c.lt.s      $f0, $f10
    ctx->pc = 0x2b6d34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6d38: 0x0  nop
    ctx->pc = 0x2b6d38u;
    // NOP
    // 0x2b6d3c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2B6D3Cu;
    {
        const bool branch_taken_0x2b6d3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6d3c) {
            ctx->pc = 0x2B6D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6D3Cu;
            // 0x2b6d40: 0x32b50033  andi        $s5, $s5, 0x33 (Delay Slot)
            SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)51);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6D44u;
            goto label_2b6d44;
        }
    }
    ctx->pc = 0x2B6D44u;
label_2b6d44:
    // 0x2b6d44: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2b6d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6d48: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x2b6d48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6d4c: 0x0  nop
    ctx->pc = 0x2b6d4cu;
    // NOP
    // 0x2b6d50: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2B6D50u;
    {
        const bool branch_taken_0x2b6d50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6d50) {
            ctx->pc = 0x2B6D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6D50u;
            // 0x2b6d54: 0x32b500f0  andi        $s5, $s5, 0xF0 (Delay Slot)
            SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)240);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6D58u;
            goto label_2b6d58;
        }
    }
    ctx->pc = 0x2B6D58u;
label_2b6d58:
    // 0x2b6d58: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2b6d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6d5c: 0x460b0034  c.lt.s      $f0, $f11
    ctx->pc = 0x2b6d5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6d60: 0x0  nop
    ctx->pc = 0x2b6d60u;
    // NOP
    // 0x2b6d64: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2B6D64u;
    {
        const bool branch_taken_0x2b6d64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6d64) {
            ctx->pc = 0x2B6D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6D64u;
            // 0x2b6d68: 0x32b5000f  andi        $s5, $s5, 0xF (Delay Slot)
            SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)15);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6D6Cu;
            goto label_2b6d6c;
        }
    }
    ctx->pc = 0x2B6D6Cu;
label_2b6d6c:
    // 0x2b6d6c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2b6d6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b6d70: 0x8fa32ae0  lw          $v1, 0x2AE0($sp)
    ctx->pc = 0x2b6d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10976)));
    // 0x2b6d74: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x2b6d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2b6d78: 0xf1040  sll         $v0, $t7, 1
    ctx->pc = 0x2b6d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
    // 0x2b6d7c: 0xafa42ad0  sw          $a0, 0x2AD0($sp)
    ctx->pc = 0x2b6d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10960), GPR_U32(ctx, 4));
    // 0x2b6d80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b6d80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6d84: 0x8fa42ad8  lw          $a0, 0x2AD8($sp)
    ctx->pc = 0x2b6d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10968)));
    // 0x2b6d88: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2b6d88u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6d8c: 0xafa22ad4  sw          $v0, 0x2AD4($sp)
    ctx->pc = 0x2b6d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10964), GPR_U32(ctx, 2));
    // 0x2b6d90: 0x645021  addu        $t2, $v1, $a0
    ctx->pc = 0x2b6d90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b6d94: 0x8fa22adc  lw          $v0, 0x2ADC($sp)
    ctx->pc = 0x2b6d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10972)));
    // 0x2b6d98: 0x8fa32ae4  lw          $v1, 0x2AE4($sp)
    ctx->pc = 0x2b6d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10980)));
    // 0x2b6d9c: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x2b6d9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b6da0: 0xd51007  srav        $v0, $s5, $a2
    ctx->pc = 0x2b6da0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), GPR_U32(ctx, 6) & 0x1F));
    // 0x2b6da4: 0x0  nop
    ctx->pc = 0x2b6da4u;
    // NOP
label_2b6da8:
    // 0x2b6da8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b6da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b6dac: 0x104000d6  beqz        $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x2B6DACu;
    {
        const bool branch_taken_0x2b6dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6DACu;
        // 0x2b6db0: 0x24d90001  addiu       $t9, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6dac) {
            ctx->pc = 0x2B7108u;
            goto label_2b7108;
        }
    }
    ctx->pc = 0x2B6DB4u;
    // 0x2b6db4: 0x8fa42ac4  lw          $a0, 0x2AC4($sp)
    ctx->pc = 0x2b6db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10948)));
    // 0x2b6db8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2b6db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b6dbc: 0x8fa32ad0  lw          $v1, 0x2AD0($sp)
    ctx->pc = 0x2b6dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10960)));
    // 0x2b6dc0: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x2b6dc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2b6dc4: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x2b6dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2b6dc8: 0x24641820  addiu       $a0, $v1, 0x1820
    ctx->pc = 0x2b6dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6176));
    // 0x2b6dcc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2b6dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2b6dd0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2b6dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b6dd4: 0x94470000  lhu         $a3, 0x0($v0)
    ctx->pc = 0x2b6dd4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6dd8: 0x30e38000  andi        $v1, $a3, 0x8000
    ctx->pc = 0x2b6dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
    // 0x2b6ddc: 0x1060006e  beqz        $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x2B6DDCu;
    {
        const bool branch_taken_0x2b6ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6DDCu;
        // 0x2b6de0: 0x30c2ffff  andi        $v0, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6ddc) {
            ctx->pc = 0x2B6F98u;
            goto label_2b6f98;
        }
    }
    ctx->pc = 0x2B6DE4u;
    // 0x2b6de4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2b6de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2b6de8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2b6de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2b6dec: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2b6decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b6df0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2b6df0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6df4: 0x240403ff  addiu       $a0, $zero, 0x3FF
    ctx->pc = 0x2b6df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x2b6df8: 0x306203ff  andi        $v0, $v1, 0x3FF
    ctx->pc = 0x2b6df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1023);
    // 0x2b6dfc: 0x104400c2  beq         $v0, $a0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x2B6DFCu;
    {
        const bool branch_taken_0x2b6dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B6E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6DFCu;
        // 0x2b6e00: 0x34038000  ori         $v1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6dfc) {
            ctx->pc = 0x2B7108u;
            goto label_2b7108;
        }
    }
    ctx->pc = 0x2B6E04u;
    // 0x2b6e04: 0x8fa42ad4  lw          $a0, 0x2AD4($sp)
    ctx->pc = 0x2b6e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10964)));
    // 0x2b6e08: 0x1038021  addu        $s0, $t0, $v1
    ctx->pc = 0x2b6e08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2b6e0c: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x2b6e0cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6e10: 0x26133810  addiu       $s3, $s0, 0x3810
    ctx->pc = 0x2b6e10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 14352));
    // 0x2b6e14: 0x2609081e  addiu       $t1, $s0, 0x81E
    ctx->pc = 0x2b6e14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 2078));
    // 0x2b6e18: 0x264f021  addu        $fp, $s3, $a0
    ctx->pc = 0x2b6e18u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2b6e1c: 0x26170820  addiu       $s7, $s0, 0x820
    ctx->pc = 0x2b6e1cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
    // 0x2b6e20: 0x240d03ff  addiu       $t5, $zero, 0x3FF
    ctx->pc = 0x2b6e20u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x2b6e24: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2b6e24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2b6e28:
    // 0x2b6e28: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2b6e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6e2c: 0x1251021  addu        $v0, $t1, $a1
    ctx->pc = 0x2b6e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x2b6e30: 0x8f8389f0  lw          $v1, -0x7610($gp)
    ctx->pc = 0x2b6e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937072)));
    // 0x2b6e34: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2b6e34u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6e38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b6e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b6e3c: 0x308603ff  andi        $a2, $a0, 0x3FF
    ctx->pc = 0x2b6e3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x2b6e40: 0xaf8389f0  sw          $v1, -0x7610($gp)
    ctx->pc = 0x2b6e40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937072), GPR_U32(ctx, 3));
    // 0x2b6e44: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x2b6e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x2b6e48: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2b6e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2b6e4c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2b6e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6e50: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b6e50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6e54: 0x0  nop
    ctx->pc = 0x2b6e54u;
    // NOP
    // 0x2b6e58: 0x45000049  bc1f        . + 4 + (0x49 << 2)
    ctx->pc = 0x2B6E58u;
    {
        const bool branch_taken_0x2b6e58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B6E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6E58u;
        // 0x2b6e5c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6e58) {
            ctx->pc = 0x2B6F80u;
            goto label_2b6f80;
        }
    }
    ctx->pc = 0x2B6E60u;
    // 0x2b6e60: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x2b6e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6e64: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2b6e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6e68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b6e68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6e6c: 0x0  nop
    ctx->pc = 0x2b6e6cu;
    // NOP
    // 0x2b6e70: 0x45020044  bc1fl       . + 4 + (0x44 << 2)
    ctx->pc = 0x2B6E70u;
    {
        const bool branch_taken_0x2b6e70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6e70) {
            ctx->pc = 0x2B6E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6E70u;
            // 0x2b6e74: 0x2f41021  addu        $v0, $s7, $s4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6F84u;
            goto label_2b6f84;
        }
    }
    ctx->pc = 0x2B6E78u;
    // 0x2b6e78: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2b6e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6e7c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2b6e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6e80: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b6e80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6e84: 0x0  nop
    ctx->pc = 0x2b6e84u;
    // NOP
    // 0x2b6e88: 0x4502003e  bc1fl       . + 4 + (0x3E << 2)
    ctx->pc = 0x2B6E88u;
    {
        const bool branch_taken_0x2b6e88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6e88) {
            ctx->pc = 0x2B6E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6E88u;
            // 0x2b6e8c: 0x2f41021  addu        $v0, $s7, $s4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6F84u;
            goto label_2b6f84;
        }
    }
    ctx->pc = 0x2B6E90u;
    // 0x2b6e90: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x2b6e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6e94: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b6e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6e98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b6e98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6e9c: 0x0  nop
    ctx->pc = 0x2b6e9cu;
    // NOP
    // 0x2b6ea0: 0x45020038  bc1fl       . + 4 + (0x38 << 2)
    ctx->pc = 0x2B6EA0u;
    {
        const bool branch_taken_0x2b6ea0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6ea0) {
            ctx->pc = 0x2B6EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6EA0u;
            // 0x2b6ea4: 0x2f41021  addu        $v0, $s7, $s4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6F84u;
            goto label_2b6f84;
        }
    }
    ctx->pc = 0x2B6EA8u;
    // 0x2b6ea8: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2b6ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6eac: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2b6eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6eb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b6eb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6eb4: 0x0  nop
    ctx->pc = 0x2b6eb4u;
    // NOP
    // 0x2b6eb8: 0x45020032  bc1fl       . + 4 + (0x32 << 2)
    ctx->pc = 0x2B6EB8u;
    {
        const bool branch_taken_0x2b6eb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6eb8) {
            ctx->pc = 0x2B6EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6EB8u;
            // 0x2b6ebc: 0x2f41021  addu        $v0, $s7, $s4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6F84u;
            goto label_2b6f84;
        }
    }
    ctx->pc = 0x2B6EC0u;
    // 0x2b6ec0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b6ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6ec4: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2b6ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6ec8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b6ec8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6ecc: 0x0  nop
    ctx->pc = 0x2b6eccu;
    // NOP
    // 0x2b6ed0: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x2B6ED0u;
    {
        const bool branch_taken_0x2b6ed0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B6ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6ED0u;
        // 0x2b6ed4: 0x2f41021  addu        $v0, $s7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6ed0) {
            ctx->pc = 0x2B6F84u;
            goto label_2b6f84;
        }
    }
    ctx->pc = 0x2B6ED8u;
    // 0x2b6ed8: 0x8e074018  lw          $a3, 0x4018($s0)
    ctx->pc = 0x2b6ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16408)));
    // 0x2b6edc: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B6EDCu;
    {
        const bool branch_taken_0x2b6edc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6EDCu;
        // 0x2b6ee0: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6edc) {
            ctx->pc = 0x2B6F20u;
            goto label_2b6f20;
        }
    }
    ctx->pc = 0x2B6EE4u;
    // 0x2b6ee4: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x2b6ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2b6ee8: 0x97c40000  lhu         $a0, 0x0($fp)
    ctx->pc = 0x2b6ee8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2b6eec: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2b6eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2b6ef0: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x2b6ef0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6ef4: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2b6ef4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b6ef8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2b6ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2b6efc: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2b6efcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2b6f00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b6f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b6f04: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2b6f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2b6f08: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2b6f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2b6f0c: 0x8e2004  sllv        $a0, $t6, $a0
    ctx->pc = 0x2b6f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 4) & 0x1F));
    // 0x2b6f10: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2b6f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2b6f14: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2b6f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2b6f18: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B6F18u;
    {
        const bool branch_taken_0x2b6f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F18u;
        // 0x2b6f1c: 0x2f41021  addu        $v0, $s7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f18) {
            ctx->pc = 0x2B6F84u;
            goto label_2b6f84;
        }
    }
    ctx->pc = 0x2B6F20u;
label_2b6f20:
    // 0x2b6f20: 0x8f8289f4  lw          $v0, -0x760C($gp)
    ctx->pc = 0x2b6f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937076)));
    // 0x2b6f24: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x2b6f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6f28: 0x8e044010  lw          $a0, 0x4010($s0)
    ctx->pc = 0x2b6f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16400)));
    // 0x2b6f2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b6f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b6f30: 0x7fa82af0  sq          $t0, 0x2AF0($sp)
    ctx->pc = 0x2b6f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10992), GPR_VEC(ctx, 8));
    // 0x2b6f34: 0x7fa92b00  sq          $t1, 0x2B00($sp)
    ctx->pc = 0x2b6f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 11008), GPR_VEC(ctx, 9));
    // 0x2b6f38: 0x7faa2b10  sq          $t2, 0x2B10($sp)
    ctx->pc = 0x2b6f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 11024), GPR_VEC(ctx, 10));
    // 0x2b6f3c: 0x7fab2b20  sq          $t3, 0x2B20($sp)
    ctx->pc = 0x2b6f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 11040), GPR_VEC(ctx, 11));
    // 0x2b6f40: 0x7fac2b30  sq          $t4, 0x2B30($sp)
    ctx->pc = 0x2b6f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 11056), GPR_VEC(ctx, 12));
    // 0x2b6f44: 0x7fad2b40  sq          $t5, 0x2B40($sp)
    ctx->pc = 0x2b6f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 11072), GPR_VEC(ctx, 13));
    // 0x2b6f48: 0x7fae2b50  sq          $t6, 0x2B50($sp)
    ctx->pc = 0x2b6f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 11088), GPR_VEC(ctx, 14));
    // 0x2b6f4c: 0x7faf2b60  sq          $t7, 0x2B60($sp)
    ctx->pc = 0x2b6f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 11104), GPR_VEC(ctx, 15));
    // 0x2b6f50: 0x7fb92b70  sq          $t9, 0x2B70($sp)
    ctx->pc = 0x2b6f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 11120), GPR_VEC(ctx, 25));
    // 0x2b6f54: 0xc0adf4a  jal         func_2B7D28
    ctx->pc = 0x2B6F54u;
    SET_GPR_U32(ctx, 31, 0x2B6F5Cu);
    ctx->pc = 0x2B6F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6F54u;
    // 0x2b6f58: 0xaf8289f4  sw          $v0, -0x760C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937076), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B7D28u, 0x2B6F54u, 0x2B6F5Cu)) {
        return;
    }
    ctx->pc = 0x2B6F5Cu;
label_2b6f5c:
    // 0x2b6f5c: 0x7bb92b70  lq          $t9, 0x2B70($sp)
    ctx->pc = 0x2b6f5cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 11120)));
    // 0x2b6f60: 0x7baf2b60  lq          $t7, 0x2B60($sp)
    ctx->pc = 0x2b6f60u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 11104)));
    // 0x2b6f64: 0x7bae2b50  lq          $t6, 0x2B50($sp)
    ctx->pc = 0x2b6f64u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 11088)));
    // 0x2b6f68: 0x7bad2b40  lq          $t5, 0x2B40($sp)
    ctx->pc = 0x2b6f68u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 11072)));
    // 0x2b6f6c: 0x7bac2b30  lq          $t4, 0x2B30($sp)
    ctx->pc = 0x2b6f6cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 11056)));
    // 0x2b6f70: 0x7bab2b20  lq          $t3, 0x2B20($sp)
    ctx->pc = 0x2b6f70u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 11040)));
    // 0x2b6f74: 0x7baa2b10  lq          $t2, 0x2B10($sp)
    ctx->pc = 0x2b6f74u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 11024)));
    // 0x2b6f78: 0x7ba92b00  lq          $t1, 0x2B00($sp)
    ctx->pc = 0x2b6f78u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 11008)));
    // 0x2b6f7c: 0x7ba82af0  lq          $t0, 0x2AF0($sp)
    ctx->pc = 0x2b6f7cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 10992)));
label_2b6f80:
    // 0x2b6f80: 0x2f41021  addu        $v0, $s7, $s4
    ctx->pc = 0x2b6f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
label_2b6f84:
    // 0x2b6f84: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2b6f84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6f88: 0x144dffa7  bne         $v0, $t5, . + 4 + (-0x59 << 2)
    ctx->pc = 0x2B6F88u;
    {
        const bool branch_taken_0x2b6f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 13));
        ctx->pc = 0x2B6F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F88u;
        // 0x2b6f8c: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f88) {
            ctx->pc = 0x2B6E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6e28;
        }
    }
    ctx->pc = 0x2B6F90u;
    // 0x2b6f90: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x2B6F90u;
    {
        const bool branch_taken_0x2b6f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F90u;
        // 0x2b6f94: 0x320302d  daddu       $a2, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f90) {
            ctx->pc = 0x2B710Cu;
            goto label_2b710c;
        }
    }
    ctx->pc = 0x2B6F98u;
label_2b6f98:
    // 0x2b6f98: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x2b6f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2b6f9c: 0xc7a02ab0  lwc1        $f0, 0x2AB0($sp)
    ctx->pc = 0x2b6f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6fa0: 0x2c21823  subu        $v1, $s6, $v0
    ctx->pc = 0x2b6fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2b6fa4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2b6fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b6fa8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2b6fa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2b6fac: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2b6facu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b6fb0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b6fb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b6fb4: 0xc7a12a90  lwc1        $f1, 0x2A90($sp)
    ctx->pc = 0x2b6fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6fb8: 0x30c30002  andi        $v1, $a2, 0x2
    ctx->pc = 0x2b6fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x2b6fbc: 0x30c50004  andi        $a1, $a2, 0x4
    ctx->pc = 0x2b6fbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x2b6fc0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b6fc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b6fc4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2b6fc4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2b6fc8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2b6fc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2b6fcc: 0x2c31023  subu        $v0, $s6, $v1
    ctx->pc = 0x2b6fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x2b6fd0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2b6fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b6fd4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2b6fd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2b6fd8: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x2b6fd8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x2b6fdc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2b6fdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b6fe0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b6fe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b6fe4: 0x2c51023  subu        $v0, $s6, $a1
    ctx->pc = 0x2b6fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x2b6fe8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b6fe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b6fec: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2b6fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b6ff0: 0x662023  subu        $a0, $v1, $a2
    ctx->pc = 0x2b6ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2b6ff4: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x2b6ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2b6ff8: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x2b6ff8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x2b6ffc: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x2b6ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2b7000: 0x44853000  mtc1        $a1, $f6
    ctx->pc = 0x2b7000u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2b7004: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x2b7004u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x2b7008: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2b7008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2b700c: 0x2c31023  subu        $v0, $s6, $v1
    ctx->pc = 0x2b700cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x2b7010: 0x44824000  mtc1        $v0, $f8
    ctx->pc = 0x2b7010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2b7014: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x2b7014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x2b7018: 0x258c0002  addiu       $t4, $t4, 0x2
    ctx->pc = 0x2b7018u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
    // 0x2b701c: 0xc7a02ab4  lwc1        $f0, 0x2AB4($sp)
    ctx->pc = 0x2b701cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7020: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x2b7020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x2b7024: 0xc7a12a94  lwc1        $f1, 0x2A94($sp)
    ctx->pc = 0x2b7024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7028: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2b7028u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2b702c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2b702cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2b7030: 0xa5470000  sh          $a3, 0x0($t2)
    ctx->pc = 0x2b7030u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x2b7034: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2b7034u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2b7038: 0x30840004  andi        $a0, $a0, 0x4
    ctx->pc = 0x2b7038u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x2b703c: 0x44834800  mtc1        $v1, $f9
    ctx->pc = 0x2b703cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2b7040: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x2b7040u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x2b7044: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x2b7044u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x2b7048: 0x2c21823  subu        $v1, $s6, $v0
    ctx->pc = 0x2b7048u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2b704c: 0x2c42823  subu        $a1, $s6, $a0
    ctx->pc = 0x2b704cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x2b7050: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b7050u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b7054: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x2b7054u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x2b7058: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x2b7058u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2b705c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2b705cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2b7060: 0x256b0020  addiu       $t3, $t3, 0x20
    ctx->pc = 0x2b7060u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x2b7064: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2b7064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b7068: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2b7068u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2b706c: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x2b706cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2b7070: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x2b7070u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b7074: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b7074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b7078: 0x44852800  mtc1        $a1, $f5
    ctx->pc = 0x2b7078u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2b707c: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x2b707cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x2b7080: 0xc7a02ab8  lwc1        $f0, 0x2AB8($sp)
    ctx->pc = 0x2b7080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7084: 0xc7a12a98  lwc1        $f1, 0x2A98($sp)
    ctx->pc = 0x2b7084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7088: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2b7088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2b708c: 0x8fa42ae0  lw          $a0, 0x2AE0($sp)
    ctx->pc = 0x2b708cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10976)));
    // 0x2b7090: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2b7090u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2b7094: 0x8fa22ae4  lw          $v0, 0x2AE4($sp)
    ctx->pc = 0x2b7094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10980)));
    // 0x2b7098: 0x8fa32ac0  lw          $v1, 0x2AC0($sp)
    ctx->pc = 0x2b7098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10944)));
    // 0x2b709c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x2b709cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x2b70a0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2b70a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2b70a4: 0xafa42ae0  sw          $a0, 0x2AE0($sp)
    ctx->pc = 0x2b70a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10976), GPR_U32(ctx, 4));
    // 0x2b70a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b70a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b70ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b70acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b70b0: 0xafa22ae4  sw          $v0, 0x2AE4($sp)
    ctx->pc = 0x2b70b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10980), GPR_U32(ctx, 2));
    // 0x2b70b4: 0xafa32ac0  sw          $v1, 0x2AC0($sp)
    ctx->pc = 0x2b70b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10944), GPR_U32(ctx, 3));
    // 0x2b70b8: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x2b70b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2b70bc: 0xc7a12aa0  lwc1        $f1, 0x2AA0($sp)
    ctx->pc = 0x2b70bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b70c0: 0xc7a02a80  lwc1        $f0, 0x2A80($sp)
    ctx->pc = 0x2b70c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b70c4: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x2b70c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x2b70c8: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x2b70c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x2b70cc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b70ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b70d0: 0xe641fff0  swc1        $f1, -0x10($s2)
    ctx->pc = 0x2b70d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294967280), bits); }
    // 0x2b70d4: 0xc7a02aa4  lwc1        $f0, 0x2AA4($sp)
    ctx->pc = 0x2b70d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b70d8: 0xc7a12a84  lwc1        $f1, 0x2A84($sp)
    ctx->pc = 0x2b70d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b70dc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2b70dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2b70e0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b70e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b70e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b70e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b70e8: 0xe640fff4  swc1        $f0, -0xC($s2)
    ctx->pc = 0x2b70e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294967284), bits); }
    // 0x2b70ec: 0xc7a12aa8  lwc1        $f1, 0x2AA8($sp)
    ctx->pc = 0x2b70ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b70f0: 0xc7a02a88  lwc1        $f0, 0x2A88($sp)
    ctx->pc = 0x2b70f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b70f4: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2b70f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2b70f8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2b70f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2b70fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b70fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b7100: 0xe641fff8  swc1        $f1, -0x8($s2)
    ctx->pc = 0x2b7100u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294967288), bits); }
    // 0x2b7104: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x2b7104u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_2b7108:
    // 0x2b7108: 0x320302d  daddu       $a2, $t9, $zero
    ctx->pc = 0x2b7108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_2b710c:
    // 0x2b710c: 0x28c20008  slti        $v0, $a2, 0x8
    ctx->pc = 0x2b710cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2b7110: 0x5440ff25  bnel        $v0, $zero, . + 4 + (-0xDB << 2)
    ctx->pc = 0x2B7110u;
    {
        const bool branch_taken_0x2b7110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7110) {
            ctx->pc = 0x2B7114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7110u;
            // 0x2b7114: 0xd51007  srav        $v0, $s5, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), GPR_U32(ctx, 6) & 0x1F));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6da8;
        }
    }
    ctx->pc = 0x2B7118u;
    // 0x2b7118: 0x8fa42ac0  lw          $a0, 0x2AC0($sp)
    ctx->pc = 0x2b7118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10944)));
    // 0x2b711c: 0x5c80fe64  bgtzl       $a0, . + 4 + (-0x19C << 2)
    ctx->pc = 0x2B711Cu;
    {
        const bool branch_taken_0x2b711c = (GPR_S64(ctx, 4) > 0);
        if (branch_taken_0x2b711c) {
            ctx->pc = 0x2B7120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B711Cu;
            // 0x2b7120: 0x8fa22ae0  lw          $v0, 0x2AE0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10976)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6ab0;
        }
    }
    ctx->pc = 0x2B7124u;
    // 0x2b7124: 0x7bb02c10  lq          $s0, 0x2C10($sp)
    ctx->pc = 0x2b7124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 11280)));
    // 0x2b7128: 0x7bb12c00  lq          $s1, 0x2C00($sp)
    ctx->pc = 0x2b7128u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 11264)));
    // 0x2b712c: 0x7bb22bf0  lq          $s2, 0x2BF0($sp)
    ctx->pc = 0x2b712cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 11248)));
    // 0x2b7130: 0x7bb32be0  lq          $s3, 0x2BE0($sp)
    ctx->pc = 0x2b7130u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 11232)));
    // 0x2b7134: 0x7bb42bd0  lq          $s4, 0x2BD0($sp)
    ctx->pc = 0x2b7134u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 11216)));
    // 0x2b7138: 0x7bb52bc0  lq          $s5, 0x2BC0($sp)
    ctx->pc = 0x2b7138u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 11200)));
    // 0x2b713c: 0x7bb62bb0  lq          $s6, 0x2BB0($sp)
    ctx->pc = 0x2b713cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 11184)));
    // 0x2b7140: 0x7bb72ba0  lq          $s7, 0x2BA0($sp)
    ctx->pc = 0x2b7140u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 11168)));
    // 0x2b7144: 0x7bbe2b90  lq          $fp, 0x2B90($sp)
    ctx->pc = 0x2b7144u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 11152)));
    // 0x2b7148: 0xdfbf2b80  ld          $ra, 0x2B80($sp)
    ctx->pc = 0x2b7148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 11136)));
    // 0x2b714c: 0xc7b52c28  lwc1        $f21, 0x2C28($sp)
    ctx->pc = 0x2b714cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 11304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b7150: 0xc7b42c20  lwc1        $f20, 0x2C20($sp)
    ctx->pc = 0x2b7150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 11296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b7154: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7154u;
        // 0x2b7158: 0x27bd2c30  addiu       $sp, $sp, 0x2C30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 11312));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B715Cu;
    // 0x2b715c: 0x0  nop
    ctx->pc = 0x2b715cu;
    // NOP
    ctx->pc = 0x2b7160u;
}
