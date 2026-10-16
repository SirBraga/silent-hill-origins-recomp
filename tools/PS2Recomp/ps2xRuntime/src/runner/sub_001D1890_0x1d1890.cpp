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

// Function: sub_001D1890
// Address: 0x1d1890 - 0x1d1ac8
void sub_001D1890_0x1d1890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1890_0x1d1890");
#endif

    switch (ctx->pc) {
        case 0x1d18f8u: goto label_1d18f8;
        case 0x1d1908u: goto label_1d1908;
        case 0x1d196cu: goto label_1d196c;
        case 0x1d1978u: goto label_1d1978;
        case 0x1d198cu: goto label_1d198c;
        case 0x1d1998u: goto label_1d1998;
        case 0x1d1a04u: goto label_1d1a04;
        case 0x1d1a60u: goto label_1d1a60;
        case 0x1d1a84u: goto label_1d1a84;
        case 0x1d1aa4u: goto label_1d1aa4;
        default: break;
    }

    ctx->pc = 0x1d1890u;

    // 0x1d1890: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d1890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d1894: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d1894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d1898: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d1898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d189c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1d189cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1d18a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d18a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d18a4: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1d18a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1d18a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d18a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d18ac: 0x8c439b18  lw          $v1, -0x64E8($v0)
    ctx->pc = 0x1d18acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x339B18u));
    // 0x1d18b0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1d18b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1d18b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d18b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1d18b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d18b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d18bc: 0x10600079  beqz        $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x1D18BCu;
    {
        const bool branch_taken_0x1d18bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D18C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D18BCu;
        // 0x1d18c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d18bc) {
            ctx->pc = 0x1D1AA4u;
            goto label_1d1aa4;
        }
    }
    ctx->pc = 0x1D18C4u;
    // 0x1d18c4: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x1d18c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x1d18c8: 0x8e029a68  lw          $v0, -0x6598($s0)
    ctx->pc = 0x1d18c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x339A68u));
    // 0x1d18cc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D18CCu;
    {
        const bool branch_taken_0x1d18cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D18D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D18CCu;
        // 0x1d18d0: 0x3c120034  lui         $s2, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d18cc) {
            ctx->pc = 0x1D1908u;
            goto label_1d1908;
        }
    }
    ctx->pc = 0x1D18D4u;
    // 0x1d18d4: 0xc6419a64  lwc1        $f1, -0x659C($s2)
    ctx->pc = 0x1d18d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294941284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d18d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d18d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d18dc: 0x0  nop
    ctx->pc = 0x1d18dcu;
    // NOP
    // 0x1d18e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d18e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d18e4: 0x0  nop
    ctx->pc = 0x1d18e4u;
    // NOP
    // 0x1d18e8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1D18E8u;
    {
        const bool branch_taken_0x1d18e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D18ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D18E8u;
        // 0x1d18ec: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d18e8) {
            ctx->pc = 0x1D190Cu;
            goto label_1d190c;
        }
    }
    ctx->pc = 0x1D18F0u;
    // 0x1d18f0: 0xc0603e4  jal         func_180F90
    ctx->pc = 0x1D18F0u;
    SET_GPR_U32(ctx, 31, 0x1D18F8u);
    ctx->pc = 0x180F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180F90u, 0x1D18F0u, 0x1D18F8u)) {
        return;
    }
    ctx->pc = 0x1D18F8u;
label_1d18f8:
    // 0x1d18f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D18F8u;
    {
        const bool branch_taken_0x1d18f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D18FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D18F8u;
        // 0x1d18fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d18f8) {
            ctx->pc = 0x1D1908u;
            goto label_1d1908;
        }
    }
    ctx->pc = 0x1D1900u;
    // 0x1d1900: 0xc06039c  jal         func_180E70
    ctx->pc = 0x1D1900u;
    SET_GPR_U32(ctx, 31, 0x1D1908u);
    ctx->pc = 0x1D1904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1900u;
    // 0x1d1904: 0xae029a68  sw          $v0, -0x6598($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294941288), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180E70u, 0x1D1900u, 0x1D1908u)) {
        return;
    }
    ctx->pc = 0x1D1908u;
label_1d1908:
    // 0x1d1908: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d1908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d190c:
    // 0x1d190c: 0xc6429a64  lwc1        $f2, -0x659C($s2)
    ctx->pc = 0x1d190cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294941284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d1910: 0xc4409a5c  lwc1        $f0, -0x65A4($v0)
    ctx->pc = 0x1d1910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1914: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d1914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d1918: 0xc4619a60  lwc1        $f1, -0x65A0($v1)
    ctx->pc = 0x1d1918u;
    { uint32_t bits = FAST_READ32(0x339A60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d191c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1d191cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1d1920: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d1920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d1924: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1d1924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d1928: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1d1928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1d192c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d192cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d1930: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1d1930u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d1934: 0x0  nop
    ctx->pc = 0x1d1934u;
    // NOP
    // 0x1d1938: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x1D1938u;
    {
        const bool branch_taken_0x1d1938 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1938u;
        // 0x1d193c: 0xe4609a60  swc1        $f0, -0x65A0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294941280), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1938) {
            ctx->pc = 0x1D19A0u;
            goto label_1d19a0;
        }
    }
    ctx->pc = 0x1D1940u;
    // 0x1d1940: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d1940u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d1944: 0x0  nop
    ctx->pc = 0x1d1944u;
    // NOP
    // 0x1d1948: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d1948u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d194c: 0x0  nop
    ctx->pc = 0x1d194cu;
    // NOP
    // 0x1d1950: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x1D1950u;
    {
        const bool branch_taken_0x1d1950 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D1954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1950u;
        // 0x1d1954: 0x8e629b18  lw          $v0, -0x64E8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294941464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1950) {
            ctx->pc = 0x1D19A8u;
            goto label_1d19a8;
        }
    }
    ctx->pc = 0x1D1958u;
    // 0x1d1958: 0xe6419a64  swc1        $f1, -0x659C($s2)
    ctx->pc = 0x1d1958u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294941284), bits); }
    // 0x1d195c: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1D195Cu;
    {
        const bool branch_taken_0x1d195c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D195Cu;
        // 0x1d1960: 0xe4619a60  swc1        $f1, -0x65A0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294941280), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d195c) {
            ctx->pc = 0x1D1AA4u;
            goto label_1d1aa4;
        }
    }
    ctx->pc = 0x1D1964u;
    // 0x1d1964: 0xc074444  jal         func_1D1110
    ctx->pc = 0x1D1964u;
    SET_GPR_U32(ctx, 31, 0x1D196Cu);
    ctx->pc = 0x1D1968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1964u;
    // 0x1d1968: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1110u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D1110u, 0x1D1964u, 0x1D196Cu)) {
        return;
    }
    ctx->pc = 0x1D196Cu;
label_1d196c:
    // 0x1d196c: 0x8e649b18  lw          $a0, -0x64E8($s3)
    ctx->pc = 0x1d196cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294941464)));
    // 0x1d1970: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1D1970u;
    SET_GPR_U32(ctx, 31, 0x1D1978u);
    ctx->pc = 0x1D1974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1970u;
    // 0x1d1974: 0x3c110034  lui         $s1, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1D1970u, 0x1D1978u)) {
        return;
    }
    ctx->pc = 0x1D1978u;
label_1d1978:
    // 0x1d1978: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d1978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d197c: 0x8e049b20  lw          $a0, -0x64E0($s0)
    ctx->pc = 0x1d197cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941472)));
    // 0x1d1980: 0xac409b1c  sw          $zero, -0x64E4($v0)
    ctx->pc = 0x1d1980u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x339B1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x339B1Cu, _value); } while (0);
    // 0x1d1984: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1D1984u;
    SET_GPR_U32(ctx, 31, 0x1D198Cu);
    ctx->pc = 0x1D1988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1984u;
    // 0x1d1988: 0xae609b18  sw          $zero, -0x64E8($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294941464), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1D1984u, 0x1D198Cu)) {
        return;
    }
    ctx->pc = 0x1D198Cu;
label_1d198c:
    // 0x1d198c: 0x8e249b10  lw          $a0, -0x64F0($s1)
    ctx->pc = 0x1d198cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941456)));
    // 0x1d1990: 0xc08a0e2  jal         func_228388
    ctx->pc = 0x1D1990u;
    SET_GPR_U32(ctx, 31, 0x1D1998u);
    ctx->pc = 0x1D1994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1990u;
    // 0x1d1994: 0xae009b20  sw          $zero, -0x64E0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294941472), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228388u, 0x1D1990u, 0x1D1998u)) {
        return;
    }
    ctx->pc = 0x1D1998u;
label_1d1998:
    // 0x1d1998: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1D1998u;
    {
        const bool branch_taken_0x1d1998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1998u;
        // 0x1d199c: 0xae209b10  sw          $zero, -0x64F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294941456), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1998) {
            ctx->pc = 0x1D1AA4u;
            goto label_1d1aa4;
        }
    }
    ctx->pc = 0x1D19A0u;
label_1d19a0:
    // 0x1d19a0: 0xe4639a60  swc1        $f3, -0x65A0($v1)
    ctx->pc = 0x1d19a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294941280), bits); }
    // 0x1d19a4: 0xae409a64  sw          $zero, -0x659C($s2)
    ctx->pc = 0x1d19a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294941284), GPR_U32(ctx, 0));
label_1d19a8:
    // 0x1d19a8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1d19a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1d19ac: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D19ACu;
    {
        const bool branch_taken_0x1d19ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D19B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19ACu;
        // 0x1d19b0: 0x3c070034  lui         $a3, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19ac) {
            ctx->pc = 0x1D1A04u;
            goto label_1d1a04;
        }
    }
    ctx->pc = 0x1D19B4u;
    // 0x1d19b4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1d19b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d19b8: 0x8ce29b34  lw          $v0, -0x64CC($a3)
    ctx->pc = 0x1d19b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294941492)));
    // 0x1d19bc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D19BCu;
    {
        const bool branch_taken_0x1d19bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d19bc) {
            ctx->pc = 0x1D19C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D19BCu;
            // 0x1d19c0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D19C4u;
            goto label_1d19c4;
        }
    }
    ctx->pc = 0x1D19C4u;
label_1d19c4:
    // 0x1d19c4: 0x3c080034  lui         $t0, 0x34
    ctx->pc = 0x1d19c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)52 << 16));
    // 0x1d19c8: 0x2409012c  addiu       $t1, $zero, 0x12C
    ctx->pc = 0x1d19c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1d19cc: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x1d19ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x1d19d0: 0x8d069b20  lw          $a2, -0x64E0($t0)
    ctx->pc = 0x1d19d0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x339B20u));
    // 0x1d19d4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1d19d4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d19d8: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d19d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d19dc: 0x24a50cb0  addiu       $a1, $a1, 0xCB0
    ctx->pc = 0x1d19dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3248));
    // 0x1d19e0: 0x2010  mfhi        $a0
    ctx->pc = 0x1d19e0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1d19e4: 0xace49b34  sw          $a0, -0x64CC($a3)
    ctx->pc = 0x1d19e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294941492), GPR_U32(ctx, 4));
    // 0x1d19e8: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x1d19e8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d19ec: 0x8ce69b34  lw          $a2, -0x64CC($a3)
    ctx->pc = 0x1d19ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294941492)));
    // 0x1d19f0: 0x8e629b18  lw          $v0, -0x64E8($s3)
    ctx->pc = 0x1d19f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294941464)));
    // 0x1d19f4: 0xc93018  mult        $a2, $a2, $t1
    ctx->pc = 0x1d19f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1d19f8: 0x8d049b20  lw          $a0, -0x64E0($t0)
    ctx->pc = 0x1d19f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294941472)));
    // 0x1d19fc: 0xc0c5380  jal         func_314E00
    ctx->pc = 0x1D19FCu;
    SET_GPR_U32(ctx, 31, 0x1D1A04u);
    ctx->pc = 0x1D1A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19FCu;
    // 0x1d1a00: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314E00u, 0x1D19FCu, 0x1D1A04u)) {
        return;
    }
    ctx->pc = 0x1D1A04u;
label_1d1a04:
    // 0x1d1a04: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x1d1a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x1d1a08: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D1A08u;
    {
        const bool branch_taken_0x1d1a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A08u;
        // 0x1d1a0c: 0x3c070034  lui         $a3, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a08) {
            ctx->pc = 0x1D1A60u;
            goto label_1d1a60;
        }
    }
    ctx->pc = 0x1D1A10u;
    // 0x1d1a10: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1d1a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d1a14: 0x8ce29b34  lw          $v0, -0x64CC($a3)
    ctx->pc = 0x1d1a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294941492)));
    // 0x1d1a18: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D1A18u;
    {
        const bool branch_taken_0x1d1a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1a18) {
            ctx->pc = 0x1D1A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1A18u;
            // 0x1d1a1c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1A20u;
            goto label_1d1a20;
        }
    }
    ctx->pc = 0x1D1A20u;
label_1d1a20:
    // 0x1d1a20: 0x3c080034  lui         $t0, 0x34
    ctx->pc = 0x1d1a20u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)52 << 16));
    // 0x1d1a24: 0x2409012c  addiu       $t1, $zero, 0x12C
    ctx->pc = 0x1d1a24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1d1a28: 0x2442000b  addiu       $v0, $v0, 0xB
    ctx->pc = 0x1d1a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
    // 0x1d1a2c: 0x8d069b20  lw          $a2, -0x64E0($t0)
    ctx->pc = 0x1d1a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x339B20u));
    // 0x1d1a30: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1d1a30u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d1a34: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d1a34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d1a38: 0x24a50cb0  addiu       $a1, $a1, 0xCB0
    ctx->pc = 0x1d1a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3248));
    // 0x1d1a3c: 0x2010  mfhi        $a0
    ctx->pc = 0x1d1a3cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1d1a40: 0xace49b34  sw          $a0, -0x64CC($a3)
    ctx->pc = 0x1d1a40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294941492), GPR_U32(ctx, 4));
    // 0x1d1a44: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x1d1a44u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d1a48: 0x8ce69b34  lw          $a2, -0x64CC($a3)
    ctx->pc = 0x1d1a48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294941492)));
    // 0x1d1a4c: 0x8e629b18  lw          $v0, -0x64E8($s3)
    ctx->pc = 0x1d1a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294941464)));
    // 0x1d1a50: 0xc93018  mult        $a2, $a2, $t1
    ctx->pc = 0x1d1a50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1d1a54: 0x8d049b20  lw          $a0, -0x64E0($t0)
    ctx->pc = 0x1d1a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294941472)));
    // 0x1d1a58: 0xc0c5380  jal         func_314E00
    ctx->pc = 0x1D1A58u;
    SET_GPR_U32(ctx, 31, 0x1D1A60u);
    ctx->pc = 0x1D1A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A58u;
    // 0x1d1a5c: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314E00u, 0x1D1A58u, 0x1D1A60u)) {
        return;
    }
    ctx->pc = 0x1D1A60u;
label_1d1a60:
    // 0x1d1a60: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x1d1a60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x1d1a64: 0x8e029b48  lw          $v0, -0x64B8($s0)
    ctx->pc = 0x1d1a64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x339B48u));
    // 0x1d1a68: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1D1A68u;
    {
        const bool branch_taken_0x1d1a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1a68) {
            ctx->pc = 0x1D1A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1A68u;
            // 0x1d1a6c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1AA8u;
            goto label_1d1aa8;
        }
    }
    ctx->pc = 0x1D1A70u;
    // 0x1d1a70: 0x32220020  andi        $v0, $s1, 0x20
    ctx->pc = 0x1d1a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
    // 0x1d1a74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1A74u;
    {
        const bool branch_taken_0x1d1a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A74u;
        // 0x1d1a78: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a74) {
            ctx->pc = 0x1D1A84u;
            goto label_1d1a84;
        }
    }
    ctx->pc = 0x1D1A7Cu;
    // 0x1d1a7c: 0xc074472  jal         func_1D11C8
    ctx->pc = 0x1D1A7Cu;
    SET_GPR_U32(ctx, 31, 0x1D1A84u);
    ctx->pc = 0x1D1A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A7Cu;
    // 0x1d1a80: 0x8c449b34  lw          $a0, -0x64CC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941492)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D11C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D11C8u, 0x1D1A7Cu, 0x1D1A84u)) {
        return;
    }
    ctx->pc = 0x1D1A84u;
label_1d1a84:
    // 0x1d1a84: 0x8e029b48  lw          $v0, -0x64B8($s0)
    ctx->pc = 0x1d1a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941512)));
    // 0x1d1a88: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1A88u;
    {
        const bool branch_taken_0x1d1a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A88u;
        // 0x1d1a8c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a88) {
            ctx->pc = 0x1D1AA8u;
            goto label_1d1aa8;
        }
    }
    ctx->pc = 0x1D1A90u;
    // 0x1d1a90: 0x32220080  andi        $v0, $s1, 0x80
    ctx->pc = 0x1d1a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
    // 0x1d1a94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1A94u;
    {
        const bool branch_taken_0x1d1a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A94u;
        // 0x1d1a98: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a94) {
            ctx->pc = 0x1D1AACu;
            goto label_1d1aac;
        }
    }
    ctx->pc = 0x1D1A9Cu;
    // 0x1d1a9c: 0xc0745dc  jal         func_1D1770
    ctx->pc = 0x1D1A9Cu;
    SET_GPR_U32(ctx, 31, 0x1D1AA4u);
    ctx->pc = 0x1D1AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A9Cu;
    // 0x1d1aa0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1770u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D1770u, 0x1D1A9Cu, 0x1D1AA4u)) {
        return;
    }
    ctx->pc = 0x1D1AA4u;
label_1d1aa4:
    // 0x1d1aa4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d1aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d1aa8:
    // 0x1d1aa8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d1aa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d1aac:
    // 0x1d1aac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d1aacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1ab0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1d1ab0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1ab4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1ab8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1d1ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d1abc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1ABCu;
        // 0x1d1ac0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1AC4u;
    // 0x1d1ac4: 0x0  nop
    ctx->pc = 0x1d1ac4u;
    // NOP
    ctx->pc = 0x1d1ac8u;
}
