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

// Function: sub_00155960
// Address: 0x155960 - 0x155ed8
void sub_00155960_0x155960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155960_0x155960");
#endif

    switch (ctx->pc) {
        case 0x155a04u: goto label_155a04;
        case 0x155a28u: goto label_155a28;
        case 0x155a3cu: goto label_155a3c;
        case 0x155a68u: goto label_155a68;
        case 0x155a94u: goto label_155a94;
        case 0x155ab4u: goto label_155ab4;
        case 0x155ac4u: goto label_155ac4;
        case 0x155ad8u: goto label_155ad8;
        case 0x155b2cu: goto label_155b2c;
        case 0x155b44u: goto label_155b44;
        case 0x155b54u: goto label_155b54;
        case 0x155b80u: goto label_155b80;
        case 0x155be4u: goto label_155be4;
        case 0x155c28u: goto label_155c28;
        case 0x155c8cu: goto label_155c8c;
        case 0x155cecu: goto label_155cec;
        case 0x155d48u: goto label_155d48;
        case 0x155d64u: goto label_155d64;
        case 0x155d9cu: goto label_155d9c;
        case 0x155db0u: goto label_155db0;
        case 0x155dccu: goto label_155dcc;
        case 0x155de4u: goto label_155de4;
        case 0x155dfcu: goto label_155dfc;
        case 0x155e10u: goto label_155e10;
        case 0x155e24u: goto label_155e24;
        case 0x155e88u: goto label_155e88;
        default: break;
    }

    ctx->pc = 0x155960u;

    // 0x155960: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x155960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x155964: 0x93a20170  lbu         $v0, 0x170($sp)
    ctx->pc = 0x155964u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x155968: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x155968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
    // 0x15596c: 0x7fb700e0  sq          $s7, 0xE0($sp)
    ctx->pc = 0x15596cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 23));
    // 0x155970: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x155970u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155974: 0x7fbe00d0  sq          $fp, 0xD0($sp)
    ctx->pc = 0x155974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 30));
    // 0x155978: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x155978u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15597c: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x15597cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x155980: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x155980u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155984: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x155984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x155988: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x155988u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x15598c: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x15598cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x155990: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x155990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x155994: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x155994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x155998: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x155998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x15599c: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x15599cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
    // 0x1559a0: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1559a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1559a4: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x1559a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x1559a8: 0xafa700b4  sw          $a3, 0xB4($sp)
    ctx->pc = 0x1559a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 7));
    // 0x1559ac: 0xafa900bc  sw          $t1, 0xBC($sp)
    ctx->pc = 0x1559acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 9));
    // 0x1559b0: 0x1100013b  beqz        $t0, . + 4 + (0x13B << 2)
    ctx->pc = 0x1559B0u;
    {
        const bool branch_taken_0x1559b0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1559B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1559B0u;
        // 0x1559b4: 0xafa200b8  sw          $v0, 0xB8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1559b0) {
            ctx->pc = 0x155EA0u;
            goto label_155ea0;
        }
    }
    ctx->pc = 0x1559B8u;
    // 0x1559b8: 0x8d500000  lw          $s0, 0x0($t2)
    ctx->pc = 0x1559b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1559bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1559bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1559c0: 0x5602005c  bnel        $s0, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1559C0u;
    {
        const bool branch_taken_0x1559c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1559c0) {
            ctx->pc = 0x1559C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1559C0u;
            // 0x1559c4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155B34u;
            goto label_155b34;
        }
    }
    ctx->pc = 0x1559C8u;
    // 0x1559c8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1559c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1559cc: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1559ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1559d0: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1559d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x1559d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1559d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1559d8: 0x8fa90178  lw          $t1, 0x178($sp)
    ctx->pc = 0x1559d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1559dc: 0xc46d0008  lwc1        $f13, 0x8($v1)
    ctx->pc = 0x1559dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1559e0: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1559e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1559e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1559e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1559e8: 0x8faa0180  lw          $t2, 0x180($sp)
    ctx->pc = 0x1559e8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1559ec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1559ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1559f0: 0x8fab0188  lw          $t3, 0x188($sp)
    ctx->pc = 0x1559f0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1559f4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1559f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1559f8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1559f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1559fc: 0xc0557b6  jal         func_155ED8
    ctx->pc = 0x1559FCu;
    SET_GPR_U32(ctx, 31, 0x155A04u);
    ctx->pc = 0x155A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1559FCu;
    // 0x155a00: 0x8fa700b8  lw          $a3, 0xB8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155ED8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x155ED8u, 0x1559FCu, 0x155A04u)) {
        return;
    }
    ctx->pc = 0x155A04u;
label_155a04:
    // 0x155a04: 0x16d00127  bne         $s6, $s0, . + 4 + (0x127 << 2)
    ctx->pc = 0x155A04u;
    {
        const bool branch_taken_0x155a04 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 16));
        ctx->pc = 0x155A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A04u;
        // 0x155a08: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a04) {
            ctx->pc = 0x155EA4u;
            goto label_155ea4;
        }
    }
    ctx->pc = 0x155A0Cu;
    // 0x155a0c: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x155a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x155a10: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x155a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x155a14: 0x8c459168  lw          $a1, -0x6E98($v0)
    ctx->pc = 0x155a14u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x339168u));
    // 0x155a18: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x155a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x155a1c: 0x8ca40144  lw          $a0, 0x144($a1)
    ctx->pc = 0x155a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 324)));
    // 0x155a20: 0xc085ba8  jal         func_216EA0
    ctx->pc = 0x155A20u;
    SET_GPR_U32(ctx, 31, 0x155A28u);
    ctx->pc = 0x155A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155A20u;
    // 0x155a24: 0x8c700064  lw          $s0, 0x64($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216EA0u, 0x155A20u, 0x155A28u)) {
        return;
    }
    ctx->pc = 0x155A28u;
label_155a28:
    // 0x155a28: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x155a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x155a2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155a30: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x155a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x155a34: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x155A34u;
    SET_GPR_U32(ctx, 31, 0x155A3Cu);
    ctx->pc = 0x155A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155A34u;
    // 0x155a38: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x155A34u, 0x155A3Cu)) {
        return;
    }
    ctx->pc = 0x155A3Cu;
label_155a3c:
    // 0x155a3c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x155a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x155a40: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x155a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x155a44: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x155a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x155a48: 0xa3a30012  sb          $v1, 0x12($sp)
    ctx->pc = 0x155a48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x155a4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x155a4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155a50: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x155a50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x155a54: 0xa3a30011  sb          $v1, 0x11($sp)
    ctx->pc = 0x155a54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x155a58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155a5c: 0xa3a20013  sb          $v0, 0x13($sp)
    ctx->pc = 0x155a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 2));
    // 0x155a60: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x155A60u;
    SET_GPR_U32(ctx, 31, 0x155A68u);
    ctx->pc = 0x155A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155A60u;
    // 0x155a64: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x155A60u, 0x155A68u)) {
        return;
    }
    ctx->pc = 0x155A68u;
label_155a68:
    // 0x155a68: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x155a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x155a6c: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x155a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x155a70: 0x3442423f  ori         $v0, $v0, 0x423F
    ctx->pc = 0x155a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16959);
    // 0x155a74: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x155a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155a78: 0x8c830060  lw          $v1, 0x60($a0)
    ctx->pc = 0x155a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x155a7c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x155A7Cu;
    {
        const bool branch_taken_0x155a7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x155A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A7Cu;
        // 0x155a80: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a7c) {
            ctx->pc = 0x155A9Cu;
            goto label_155a9c;
        }
    }
    ctx->pc = 0x155A84u;
    // 0x155a84: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x155a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155a88: 0x24a52958  addiu       $a1, $a1, 0x2958
    ctx->pc = 0x155a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10584));
    // 0x155a8c: 0xc0c5380  jal         func_314E00
    ctx->pc = 0x155A8Cu;
    SET_GPR_U32(ctx, 31, 0x155A94u);
    ctx->pc = 0x155A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155A8Cu;
    // 0x155a90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314E00u, 0x155A8Cu, 0x155A94u)) {
        return;
    }
    ctx->pc = 0x155A94u;
label_155a94:
    // 0x155a94: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x155A94u;
    {
        const bool branch_taken_0x155a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A94u;
        // 0x155a98: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a94) {
            ctx->pc = 0x155AC8u;
            goto label_155ac8;
        }
    }
    ctx->pc = 0x155A9Cu;
label_155a9c:
    // 0x155a9c: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x155a9cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x155aa0: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x155aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x155aa4: 0x26102960  addiu       $s0, $s0, 0x2960
    ctx->pc = 0x155aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10592));
    // 0x155aa8: 0x24842968  addiu       $a0, $a0, 0x2968
    ctx->pc = 0x155aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10600));
    // 0x155aac: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x155AACu;
    SET_GPR_U32(ctx, 31, 0x155AB4u);
    ctx->pc = 0x155AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155AACu;
    // 0x155ab0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x155AACu, 0x155AB4u)) {
        return;
    }
    ctx->pc = 0x155AB4u;
label_155ab4:
    // 0x155ab4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x155ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155ab8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x155ab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155abc: 0xc0c5380  jal         func_314E00
    ctx->pc = 0x155ABCu;
    SET_GPR_U32(ctx, 31, 0x155AC4u);
    ctx->pc = 0x155AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155ABCu;
    // 0x155ac0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314E00u, 0x155ABCu, 0x155AC4u)) {
        return;
    }
    ctx->pc = 0x155AC4u;
label_155ac4:
    // 0x155ac4: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x155ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_155ac8:
    // 0x155ac8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155acc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x155accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155ad0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x155AD0u;
    SET_GPR_U32(ctx, 31, 0x155AD8u);
    ctx->pc = 0x155AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155AD0u;
    // 0x155ad4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x155AD0u, 0x155AD8u)) {
        return;
    }
    ctx->pc = 0x155AD8u;
label_155ad8:
    // 0x155ad8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x155ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x155adc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x155adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x155ae0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x155ae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x155ae4: 0x24632a08  addiu       $v1, $v1, 0x2A08
    ctx->pc = 0x155ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10760));
    // 0x155ae8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x155ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x155aec: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x155aecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x155af0: 0xc462002c  lwc1        $f2, 0x2C($v1)
    ctx->pc = 0x155af0u;
    { uint32_t bits = FAST_READ32(0x692A34u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x155af4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x155af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155af8: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x155af8u;
    { uint32_t bits = FAST_READ32(0x692A2Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155afc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x155afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155b00: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x155b00u;
    { uint32_t bits = FAST_READ32(0x692A28u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x155b04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x155b04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155b08: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x155b08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x155b0c: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x155b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x155b10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x155b10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x155b14: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x155b14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x155b18: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x155b18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x155b1c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x155b1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x155b20: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x155b20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x155b24: 0xc085cac  jal         func_2172B0
    ctx->pc = 0x155B24u;
    SET_GPR_U32(ctx, 31, 0x155B2Cu);
    ctx->pc = 0x155B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155B24u;
    // 0x155b28: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2172B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2172B0u, 0x155B24u, 0x155B2Cu)) {
        return;
    }
    ctx->pc = 0x155B2Cu;
label_155b2c:
    // 0x155b2c: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x155B2Cu;
    {
        const bool branch_taken_0x155b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B2Cu;
        // 0x155b30: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b2c) {
            ctx->pc = 0x155EA4u;
            goto label_155ea4;
        }
    }
    ctx->pc = 0x155B34u;
label_155b34:
    // 0x155b34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155b38: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x155b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x155b3c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x155B3Cu;
    SET_GPR_U32(ctx, 31, 0x155B44u);
    ctx->pc = 0x155B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155B3Cu;
    // 0x155b40: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x155B3Cu, 0x155B44u)) {
        return;
    }
    ctx->pc = 0x155B44u;
label_155b44:
    // 0x155b44: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x155b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x155b48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155b4c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x155B4Cu;
    SET_GPR_U32(ctx, 31, 0x155B54u);
    ctx->pc = 0x155B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155B4Cu;
    // 0x155b50: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x155B4Cu, 0x155B54u)) {
        return;
    }
    ctx->pc = 0x155B54u;
label_155b54:
    // 0x155b54: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x155b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x155b58: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x155b58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x155b5c: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x155B5Cu;
    {
        const bool branch_taken_0x155b5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x155B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B5Cu;
        // 0x155b60: 0x8fa200b4  lw          $v0, 0xB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b5c) {
            ctx->pc = 0x155BF8u;
            goto label_155bf8;
        }
    }
    ctx->pc = 0x155B64u;
    // 0x155b64: 0x27b20054  addiu       $s2, $sp, 0x54
    ctx->pc = 0x155b64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x155b68: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x155b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x155b6c: 0x27b10014  addiu       $s1, $sp, 0x14
    ctx->pc = 0x155b6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x155b70: 0x24550004  addiu       $s5, $v0, 0x4
    ctx->pc = 0x155b70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x155b74: 0x24740004  addiu       $s4, $v1, 0x4
    ctx->pc = 0x155b74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x155b78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x155b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155b7c: 0x0  nop
    ctx->pc = 0x155b7cu;
    // NOP
label_155b80:
    // 0x155b80: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x155b80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155b84: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x155b84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x155b88: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x155b88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x155b8c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x155b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155b90: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x155b90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155b94: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x155b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x155b98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x155b98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155b9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x155b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155ba0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x155ba0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155ba4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x155ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x155ba8: 0xc6ad0000  lwc1        $f13, 0x0($s5)
    ctx->pc = 0x155ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x155bac: 0x8c650064  lw          $a1, 0x64($v1)
    ctx->pc = 0x155bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x155bb0: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x155bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x155bb4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x155bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155bb8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x155bb8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155bbc: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x155bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x155bc0: 0x26b5fffc  addiu       $s5, $s5, -0x4
    ctx->pc = 0x155bc0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
    // 0x155bc4: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x155bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x155bc8: 0x2694fffc  addiu       $s4, $s4, -0x4
    ctx->pc = 0x155bc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
    // 0x155bcc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x155bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x155bd0: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x155bd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x155bd4: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x155bd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x155bd8: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x155bd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x155bdc: 0xc0557b6  jal         func_155ED8
    ctx->pc = 0x155BDCu;
    SET_GPR_U32(ctx, 31, 0x155BE4u);
    ctx->pc = 0x155BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155BDCu;
    // 0x155be0: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155ED8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x155ED8u, 0x155BDCu, 0x155BE4u)) {
        return;
    }
    ctx->pc = 0x155BE4u;
label_155be4:
    // 0x155be4: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x155be4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x155be8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x155BE8u;
    {
        const bool branch_taken_0x155be8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x155BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155BE8u;
        // 0x155bec: 0x8fa200bc  lw          $v0, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155be8) {
            ctx->pc = 0x155BFCu;
            goto label_155bfc;
        }
    }
    ctx->pc = 0x155BF0u;
    // 0x155bf0: 0x661ffe3  bgez        $s3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x155BF0u;
    {
        const bool branch_taken_0x155bf0 = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x155BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155BF0u;
        // 0x155bf4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155bf0) {
            ctx->pc = 0x155B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155b80;
        }
    }
    ctx->pc = 0x155BF8u;
label_155bf8:
    // 0x155bf8: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x155bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_155bfc:
    // 0x155bfc: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x155bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x155c00: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x155C00u;
    {
        const bool branch_taken_0x155c00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x155C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C00u;
        // 0x155c04: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155c00) {
            ctx->pc = 0x155CA0u;
            goto label_155ca0;
        }
    }
    ctx->pc = 0x155C08u;
    // 0x155c08: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x155c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x155c0c: 0x27b2005c  addiu       $s2, $sp, 0x5C
    ctx->pc = 0x155c0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x155c10: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x155c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x155c14: 0x27b1001c  addiu       $s1, $sp, 0x1C
    ctx->pc = 0x155c14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x155c18: 0x2475000c  addiu       $s5, $v1, 0xC
    ctx->pc = 0x155c18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x155c1c: 0x2494000c  addiu       $s4, $a0, 0xC
    ctx->pc = 0x155c1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x155c20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155c24: 0x0  nop
    ctx->pc = 0x155c24u;
    // NOP
label_155c28:
    // 0x155c28: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x155c28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155c2c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x155c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x155c30: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x155c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155c34: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x155c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x155c38: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x155c38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x155c3c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x155c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155c40: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x155c40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155c44: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x155c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x155c48: 0xc6ad0000  lwc1        $f13, 0x0($s5)
    ctx->pc = 0x155c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x155c4c: 0x8c650064  lw          $a1, 0x64($v1)
    ctx->pc = 0x155c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x155c50: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x155c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x155c54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x155c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155c58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x155c58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155c5c: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x155c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x155c60: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x155c60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155c64: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x155c64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x155c68: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x155c68u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155c6c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x155c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x155c70: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x155c70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x155c74: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x155c74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x155c78: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x155c78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x155c7c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x155c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155c80: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x155c80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x155c84: 0xc0557b6  jal         func_155ED8
    ctx->pc = 0x155C84u;
    SET_GPR_U32(ctx, 31, 0x155C8Cu);
    ctx->pc = 0x155C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155C84u;
    // 0x155c88: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155ED8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x155ED8u, 0x155C84u, 0x155C8Cu)) {
        return;
    }
    ctx->pc = 0x155C8Cu;
label_155c8c:
    // 0x155c8c: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x155c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x155c90: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155C90u;
    {
        const bool branch_taken_0x155c90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x155C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C90u;
        // 0x155c94: 0x2a620005  slti        $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x155c90) {
            ctx->pc = 0x155CA0u;
            goto label_155ca0;
        }
    }
    ctx->pc = 0x155C98u;
    // 0x155c98: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x155C98u;
    {
        const bool branch_taken_0x155c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C98u;
        // 0x155c9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155c98) {
            ctx->pc = 0x155C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155c28;
        }
    }
    ctx->pc = 0x155CA0u;
label_155ca0:
    // 0x155ca0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x155ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x155ca4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x155ca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155ca8: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x155ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x155cac: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x155cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155cb0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x155cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x155cb4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x155cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x155cb8: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x155cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x155cbc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x155cbcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x155cc0: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x155cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x155cc4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x155cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x155cc8: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x155cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x155ccc: 0x8fa90178  lw          $t1, 0x178($sp)
    ctx->pc = 0x155cccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x155cd0: 0xc46d0008  lwc1        $f13, 0x8($v1)
    ctx->pc = 0x155cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x155cd4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x155cd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155cd8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x155cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155cdc: 0x8faa0180  lw          $t2, 0x180($sp)
    ctx->pc = 0x155cdcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x155ce0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x155ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155ce4: 0xc0557b6  jal         func_155ED8
    ctx->pc = 0x155CE4u;
    SET_GPR_U32(ctx, 31, 0x155CECu);
    ctx->pc = 0x155CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155CE4u;
    // 0x155ce8: 0x8fab0188  lw          $t3, 0x188($sp) (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155ED8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x155ED8u, 0x155CE4u, 0x155CECu)) {
        return;
    }
    ctx->pc = 0x155CECu;
label_155cec:
    // 0x155cec: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x155cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x155cf0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x155cf0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x155cf4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x155cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x155cf8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x155cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x155cfc: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x155cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x155d00: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x155d00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d04: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x155d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x155d08: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x155d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d0c: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x155d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x155d10: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x155d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x155d14: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x155d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x155d18: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x155d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x155d1c: 0x8fa90178  lw          $t1, 0x178($sp)
    ctx->pc = 0x155d1cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x155d20: 0xc46d0008  lwc1        $f13, 0x8($v1)
    ctx->pc = 0x155d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x155d24: 0x8ca30064  lw          $v1, 0x64($a1)
    ctx->pc = 0x155d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x155d28: 0x8c4c0000  lw          $t4, 0x0($v0)
    ctx->pc = 0x155d28u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155d2c: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x155d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x155d30: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x155d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x155d34: 0x8faa0180  lw          $t2, 0x180($sp)
    ctx->pc = 0x155d34u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x155d38: 0x8fab0188  lw          $t3, 0x188($sp)
    ctx->pc = 0x155d38u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x155d3c: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x155d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x155d40: 0xc0557b6  jal         func_155ED8
    ctx->pc = 0x155D40u;
    SET_GPR_U32(ctx, 31, 0x155D48u);
    ctx->pc = 0x155D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155D40u;
    // 0x155d44: 0x8d850000  lw          $a1, 0x0($t4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155ED8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x155ED8u, 0x155D40u, 0x155D48u)) {
        return;
    }
    ctx->pc = 0x155D48u;
label_155d48:
    // 0x155d48: 0x16d00056  bne         $s6, $s0, . + 4 + (0x56 << 2)
    ctx->pc = 0x155D48u;
    {
        const bool branch_taken_0x155d48 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 16));
        ctx->pc = 0x155D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D48u;
        // 0x155d4c: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155d48) {
            ctx->pc = 0x155EA4u;
            goto label_155ea4;
        }
    }
    ctx->pc = 0x155D50u;
    // 0x155d50: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x155d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x155d54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d58: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x155d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x155d5c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x155D5Cu;
    SET_GPR_U32(ctx, 31, 0x155D64u);
    ctx->pc = 0x155D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155D5Cu;
    // 0x155d60: 0x3c16000f  lui         $s6, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)15 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x155D5Cu, 0x155D64u)) {
        return;
    }
    ctx->pc = 0x155D64u;
label_155d64:
    // 0x155d64: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x155d64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d68: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x155d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x155d6c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x155d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x155d70: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x155d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x155d74: 0xa3a20072  sb          $v0, 0x72($sp)
    ctx->pc = 0x155d74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 114), (uint8_t)GPR_U32(ctx, 2));
    // 0x155d78: 0xa3a40073  sb          $a0, 0x73($sp)
    ctx->pc = 0x155d78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 115), (uint8_t)GPR_U32(ctx, 4));
    // 0x155d7c: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x155d7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x155d80: 0x8c659168  lw          $a1, -0x6E98($v1)
    ctx->pc = 0x155d80u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x339168u));
    // 0x155d84: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x155d84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x155d88: 0xa3a20070  sb          $v0, 0x70($sp)
    ctx->pc = 0x155d88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 2));
    // 0x155d8c: 0x36d6423f  ori         $s6, $s6, 0x423F
    ctx->pc = 0x155d8cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)16959);
    // 0x155d90: 0xa3a20071  sb          $v0, 0x71($sp)
    ctx->pc = 0x155d90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 113), (uint8_t)GPR_U32(ctx, 2));
    // 0x155d94: 0xc085ba8  jal         func_216EA0
    ctx->pc = 0x155D94u;
    SET_GPR_U32(ctx, 31, 0x155D9Cu);
    ctx->pc = 0x155D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155D94u;
    // 0x155d98: 0x8ca40144  lw          $a0, 0x144($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 324)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216EA0u, 0x155D94u, 0x155D9Cu)) {
        return;
    }
    ctx->pc = 0x155D9Cu;
label_155d9c:
    // 0x155d9c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x155d9cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155da0: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x155da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x155da4: 0x24572a08  addiu       $s7, $v0, 0x2A08
    ctx->pc = 0x155da4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 10760));
    // 0x155da8: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x155da8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155dac: 0x0  nop
    ctx->pc = 0x155dacu;
    // NOP
label_155db0:
    // 0x155db0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x155db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x155db4: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x155DB4u;
    {
        const bool branch_taken_0x155db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155DB4u;
        // 0x155db8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155db4) {
            ctx->pc = 0x155E88u;
            goto label_155e88;
        }
    }
    ctx->pc = 0x155DBCu;
    // 0x155dbc: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x155dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x155dc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155dc4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x155DC4u;
    SET_GPR_U32(ctx, 31, 0x155DCCu);
    ctx->pc = 0x155DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155DC4u;
    // 0x155dc8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x155DC4u, 0x155DCCu)) {
        return;
    }
    ctx->pc = 0x155DCCu;
label_155dcc:
    // 0x155dcc: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x155dccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x155dd0: 0x10d60006  beq         $a2, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x155DD0u;
    {
        const bool branch_taken_0x155dd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 22));
        ctx->pc = 0x155DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155DD0u;
        // 0x155dd4: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155dd0) {
            ctx->pc = 0x155DECu;
            goto label_155dec;
        }
    }
    ctx->pc = 0x155DD8u;
    // 0x155dd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x155dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155ddc: 0xc0c5380  jal         func_314E00
    ctx->pc = 0x155DDCu;
    SET_GPR_U32(ctx, 31, 0x155DE4u);
    ctx->pc = 0x155DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155DDCu;
    // 0x155de0: 0x24452958  addiu       $a1, $v0, 0x2958 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314E00u, 0x155DDCu, 0x155DE4u)) {
        return;
    }
    ctx->pc = 0x155DE4u;
label_155de4:
    // 0x155de4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x155DE4u;
    {
        const bool branch_taken_0x155de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155DE4u;
        // 0x155de8: 0x27b000a0  addiu       $s0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155de4) {
            ctx->pc = 0x155E14u;
            goto label_155e14;
        }
    }
    ctx->pc = 0x155DECu;
label_155dec:
    // 0x155dec: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x155decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x155df0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155df4: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x155DF4u;
    SET_GPR_U32(ctx, 31, 0x155DFCu);
    ctx->pc = 0x155DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155DF4u;
    // 0x155df8: 0x24642968  addiu       $a0, $v1, 0x2968 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x155DF4u, 0x155DFCu)) {
        return;
    }
    ctx->pc = 0x155DFCu;
label_155dfc:
    // 0x155dfc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x155dfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155e00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x155e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155e04: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x155e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x155e08: 0xc0c5380  jal         func_314E00
    ctx->pc = 0x155E08u;
    SET_GPR_U32(ctx, 31, 0x155E10u);
    ctx->pc = 0x155E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155E08u;
    // 0x155e0c: 0x24452960  addiu       $a1, $v0, 0x2960 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314E00u, 0x155E08u, 0x155E10u)) {
        return;
    }
    ctx->pc = 0x155E10u;
label_155e10:
    // 0x155e10: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x155e10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_155e14:
    // 0x155e14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155e18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x155e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155e1c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x155E1Cu;
    SET_GPR_U32(ctx, 31, 0x155E24u);
    ctx->pc = 0x155E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155E1Cu;
    // 0x155e20: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x155E1Cu, 0x155E24u)) {
        return;
    }
    ctx->pc = 0x155E24u;
label_155e24:
    // 0x155e24: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x155e24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x155e28: 0xc644000c  lwc1        $f4, 0xC($s2)
    ctx->pc = 0x155e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x155e2c: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x155e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x155e30: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x155e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x155e34: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x155e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155e38: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x155e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x155e3c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x155e3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x155e40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x155e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x155e44: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x155e44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x155e48: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x155e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x155e4c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x155e4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x155e50: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x155e50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x155e54: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x155e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x155e58: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x155e58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x155e5c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x155e5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x155e60: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x155e60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x155e64: 0x16630003  bne         $s3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x155E64u;
    {
        const bool branch_taken_0x155e64 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x155E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E64u;
        // 0x155e68: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x155e64) {
            ctx->pc = 0x155E74u;
            goto label_155e74;
        }
    }
    ctx->pc = 0x155E6Cu;
    // 0x155e6c: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x155e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x155e70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x155e70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_155e74:
    // 0x155e74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x155e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155e78: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x155e78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155e7c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x155e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155e80: 0xc085cac  jal         func_2172B0
    ctx->pc = 0x155E80u;
    SET_GPR_U32(ctx, 31, 0x155E88u);
    ctx->pc = 0x155E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155E80u;
    // 0x155e84: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2172B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2172B0u, 0x155E80u, 0x155E88u)) {
        return;
    }
    ctx->pc = 0x155E88u;
label_155e88:
    // 0x155e88: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x155e88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x155e8c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x155e8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x155e90: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x155e90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x155e94: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x155e94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x155e98: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x155E98u;
    {
        const bool branch_taken_0x155e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E98u;
        // 0x155e9c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155e98) {
            ctx->pc = 0x155DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155db0;
        }
    }
    ctx->pc = 0x155EA0u;
label_155ea0:
    // 0x155ea0: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x155ea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_155ea4:
    // 0x155ea4: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x155ea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x155ea8: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x155ea8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x155eac: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x155eacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x155eb0: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x155eb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x155eb4: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x155eb4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x155eb8: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x155eb8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x155ebc: 0x7bb700e0  lq          $s7, 0xE0($sp)
    ctx->pc = 0x155ebcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x155ec0: 0x7bbe00d0  lq          $fp, 0xD0($sp)
    ctx->pc = 0x155ec0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x155ec4: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x155ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x155ec8: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x155ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x155ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x155ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155ECCu;
        // 0x155ed0: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155ED4u;
    // 0x155ed4: 0x0  nop
    ctx->pc = 0x155ed4u;
    // NOP
    ctx->pc = 0x155ed8u;
}
