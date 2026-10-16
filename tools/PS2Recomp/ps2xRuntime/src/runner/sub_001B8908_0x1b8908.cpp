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

// Function: sub_001B8908
// Address: 0x1b8908 - 0x1b8bc0
void sub_001B8908_0x1b8908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8908_0x1b8908");
#endif

    switch (ctx->pc) {
        case 0x1b8908u: goto label_1b8908;
        case 0x1b890cu: goto label_1b890c;
        case 0x1b8910u: goto label_1b8910;
        case 0x1b8914u: goto label_1b8914;
        case 0x1b8918u: goto label_1b8918;
        case 0x1b891cu: goto label_1b891c;
        case 0x1b8920u: goto label_1b8920;
        case 0x1b8924u: goto label_1b8924;
        case 0x1b8928u: goto label_1b8928;
        case 0x1b892cu: goto label_1b892c;
        case 0x1b8930u: goto label_1b8930;
        case 0x1b8934u: goto label_1b8934;
        case 0x1b8938u: goto label_1b8938;
        case 0x1b893cu: goto label_1b893c;
        case 0x1b8940u: goto label_1b8940;
        case 0x1b8944u: goto label_1b8944;
        case 0x1b8948u: goto label_1b8948;
        case 0x1b894cu: goto label_1b894c;
        case 0x1b8950u: goto label_1b8950;
        case 0x1b8954u: goto label_1b8954;
        case 0x1b8958u: goto label_1b8958;
        case 0x1b895cu: goto label_1b895c;
        case 0x1b8960u: goto label_1b8960;
        case 0x1b8964u: goto label_1b8964;
        case 0x1b8968u: goto label_1b8968;
        case 0x1b896cu: goto label_1b896c;
        case 0x1b8970u: goto label_1b8970;
        case 0x1b8974u: goto label_1b8974;
        case 0x1b8978u: goto label_1b8978;
        case 0x1b897cu: goto label_1b897c;
        case 0x1b8980u: goto label_1b8980;
        case 0x1b8984u: goto label_1b8984;
        case 0x1b8988u: goto label_1b8988;
        case 0x1b898cu: goto label_1b898c;
        case 0x1b8990u: goto label_1b8990;
        case 0x1b8994u: goto label_1b8994;
        case 0x1b8998u: goto label_1b8998;
        case 0x1b899cu: goto label_1b899c;
        case 0x1b89a0u: goto label_1b89a0;
        case 0x1b89a4u: goto label_1b89a4;
        case 0x1b89a8u: goto label_1b89a8;
        case 0x1b89acu: goto label_1b89ac;
        case 0x1b89b0u: goto label_1b89b0;
        case 0x1b89b4u: goto label_1b89b4;
        case 0x1b89b8u: goto label_1b89b8;
        case 0x1b89bcu: goto label_1b89bc;
        case 0x1b89c0u: goto label_1b89c0;
        case 0x1b89c4u: goto label_1b89c4;
        case 0x1b89c8u: goto label_1b89c8;
        case 0x1b89ccu: goto label_1b89cc;
        case 0x1b89d0u: goto label_1b89d0;
        case 0x1b89d4u: goto label_1b89d4;
        case 0x1b89d8u: goto label_1b89d8;
        case 0x1b89dcu: goto label_1b89dc;
        case 0x1b89e0u: goto label_1b89e0;
        case 0x1b89e4u: goto label_1b89e4;
        case 0x1b89e8u: goto label_1b89e8;
        case 0x1b89ecu: goto label_1b89ec;
        case 0x1b89f0u: goto label_1b89f0;
        case 0x1b89f4u: goto label_1b89f4;
        case 0x1b89f8u: goto label_1b89f8;
        case 0x1b89fcu: goto label_1b89fc;
        case 0x1b8a00u: goto label_1b8a00;
        case 0x1b8a04u: goto label_1b8a04;
        case 0x1b8a08u: goto label_1b8a08;
        case 0x1b8a0cu: goto label_1b8a0c;
        case 0x1b8a10u: goto label_1b8a10;
        case 0x1b8a14u: goto label_1b8a14;
        case 0x1b8a18u: goto label_1b8a18;
        case 0x1b8a1cu: goto label_1b8a1c;
        case 0x1b8a20u: goto label_1b8a20;
        case 0x1b8a24u: goto label_1b8a24;
        case 0x1b8a28u: goto label_1b8a28;
        case 0x1b8a2cu: goto label_1b8a2c;
        case 0x1b8a30u: goto label_1b8a30;
        case 0x1b8a34u: goto label_1b8a34;
        case 0x1b8a38u: goto label_1b8a38;
        case 0x1b8a3cu: goto label_1b8a3c;
        case 0x1b8a40u: goto label_1b8a40;
        case 0x1b8a44u: goto label_1b8a44;
        case 0x1b8a48u: goto label_1b8a48;
        case 0x1b8a4cu: goto label_1b8a4c;
        case 0x1b8a50u: goto label_1b8a50;
        case 0x1b8a54u: goto label_1b8a54;
        case 0x1b8a58u: goto label_1b8a58;
        case 0x1b8a5cu: goto label_1b8a5c;
        case 0x1b8a60u: goto label_1b8a60;
        case 0x1b8a64u: goto label_1b8a64;
        case 0x1b8a68u: goto label_1b8a68;
        case 0x1b8a6cu: goto label_1b8a6c;
        case 0x1b8a70u: goto label_1b8a70;
        case 0x1b8a74u: goto label_1b8a74;
        case 0x1b8a78u: goto label_1b8a78;
        case 0x1b8a7cu: goto label_1b8a7c;
        case 0x1b8a80u: goto label_1b8a80;
        case 0x1b8a84u: goto label_1b8a84;
        case 0x1b8a88u: goto label_1b8a88;
        case 0x1b8a8cu: goto label_1b8a8c;
        case 0x1b8a90u: goto label_1b8a90;
        case 0x1b8a94u: goto label_1b8a94;
        case 0x1b8a98u: goto label_1b8a98;
        case 0x1b8a9cu: goto label_1b8a9c;
        case 0x1b8aa0u: goto label_1b8aa0;
        case 0x1b8aa4u: goto label_1b8aa4;
        case 0x1b8aa8u: goto label_1b8aa8;
        case 0x1b8aacu: goto label_1b8aac;
        case 0x1b8ab0u: goto label_1b8ab0;
        case 0x1b8ab4u: goto label_1b8ab4;
        case 0x1b8ab8u: goto label_1b8ab8;
        case 0x1b8abcu: goto label_1b8abc;
        case 0x1b8ac0u: goto label_1b8ac0;
        case 0x1b8ac4u: goto label_1b8ac4;
        case 0x1b8ac8u: goto label_1b8ac8;
        case 0x1b8accu: goto label_1b8acc;
        case 0x1b8ad0u: goto label_1b8ad0;
        case 0x1b8ad4u: goto label_1b8ad4;
        case 0x1b8ad8u: goto label_1b8ad8;
        case 0x1b8adcu: goto label_1b8adc;
        case 0x1b8ae0u: goto label_1b8ae0;
        case 0x1b8ae4u: goto label_1b8ae4;
        case 0x1b8ae8u: goto label_1b8ae8;
        case 0x1b8aecu: goto label_1b8aec;
        case 0x1b8af0u: goto label_1b8af0;
        case 0x1b8af4u: goto label_1b8af4;
        case 0x1b8af8u: goto label_1b8af8;
        case 0x1b8afcu: goto label_1b8afc;
        case 0x1b8b00u: goto label_1b8b00;
        case 0x1b8b04u: goto label_1b8b04;
        case 0x1b8b08u: goto label_1b8b08;
        case 0x1b8b0cu: goto label_1b8b0c;
        case 0x1b8b10u: goto label_1b8b10;
        case 0x1b8b14u: goto label_1b8b14;
        case 0x1b8b18u: goto label_1b8b18;
        case 0x1b8b1cu: goto label_1b8b1c;
        case 0x1b8b20u: goto label_1b8b20;
        case 0x1b8b24u: goto label_1b8b24;
        case 0x1b8b28u: goto label_1b8b28;
        case 0x1b8b2cu: goto label_1b8b2c;
        case 0x1b8b30u: goto label_1b8b30;
        case 0x1b8b34u: goto label_1b8b34;
        case 0x1b8b38u: goto label_1b8b38;
        case 0x1b8b3cu: goto label_1b8b3c;
        case 0x1b8b40u: goto label_1b8b40;
        case 0x1b8b44u: goto label_1b8b44;
        case 0x1b8b48u: goto label_1b8b48;
        case 0x1b8b4cu: goto label_1b8b4c;
        case 0x1b8b50u: goto label_1b8b50;
        case 0x1b8b54u: goto label_1b8b54;
        case 0x1b8b58u: goto label_1b8b58;
        case 0x1b8b5cu: goto label_1b8b5c;
        case 0x1b8b60u: goto label_1b8b60;
        case 0x1b8b64u: goto label_1b8b64;
        case 0x1b8b68u: goto label_1b8b68;
        case 0x1b8b6cu: goto label_1b8b6c;
        case 0x1b8b70u: goto label_1b8b70;
        case 0x1b8b74u: goto label_1b8b74;
        case 0x1b8b78u: goto label_1b8b78;
        case 0x1b8b7cu: goto label_1b8b7c;
        case 0x1b8b80u: goto label_1b8b80;
        case 0x1b8b84u: goto label_1b8b84;
        case 0x1b8b88u: goto label_1b8b88;
        case 0x1b8b8cu: goto label_1b8b8c;
        case 0x1b8b90u: goto label_1b8b90;
        case 0x1b8b94u: goto label_1b8b94;
        case 0x1b8b98u: goto label_1b8b98;
        case 0x1b8b9cu: goto label_1b8b9c;
        case 0x1b8ba0u: goto label_1b8ba0;
        case 0x1b8ba4u: goto label_1b8ba4;
        case 0x1b8ba8u: goto label_1b8ba8;
        case 0x1b8bacu: goto label_1b8bac;
        case 0x1b8bb0u: goto label_1b8bb0;
        case 0x1b8bb4u: goto label_1b8bb4;
        case 0x1b8bb8u: goto label_1b8bb8;
        case 0x1b8bbcu: goto label_1b8bbc;
        default: break;
    }

    ctx->pc = 0x1b8908u;

label_1b8908:
    // 0x1b8908: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b8908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1b890c:
    // 0x1b890c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b890cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1b8910:
    // 0x1b8910: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b8910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b8914:
    // 0x1b8914: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b8914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b8918:
    // 0x1b8918: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x1b8918u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1b891c:
    // 0x1b891c: 0xc06bc10  jal         func_1AF040
label_1b8920:
    if (ctx->pc == 0x1B8920u) {
        ctx->pc = 0x1B8920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B891Cu;
        // 0x1b8920: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8924u;
        goto label_1b8924;
    }
    ctx->pc = 0x1B891Cu;
    SET_GPR_U32(ctx, 31, 0x1B8924u);
    ctx->pc = 0x1B8920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B891Cu;
    // 0x1b8920: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF040u, 0x1B891Cu, 0x1B8924u)) {
        return;
    }
    ctx->pc = 0x1B8924u;
label_1b8924:
    // 0x1b8924: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b8924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b8928:
    // 0x1b8928: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b892c:
    // 0x1b892c: 0xc0c493d  jal         func_3124F4
label_1b8930:
    if (ctx->pc == 0x1B8930u) {
        ctx->pc = 0x1B8930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B892Cu;
        // 0x1b8930: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8934u;
        goto label_1b8934;
    }
    ctx->pc = 0x1B892Cu;
    SET_GPR_U32(ctx, 31, 0x1B8934u);
    ctx->pc = 0x1B8930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B892Cu;
    // 0x1b8930: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B892Cu, 0x1B8934u)) {
        return;
    }
    ctx->pc = 0x1B8934u;
label_1b8934:
    // 0x1b8934: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x1b8934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b8938:
    // 0x1b8938: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b8938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b893c:
    // 0x1b893c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1b893cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b8940:
    // 0x1b8940: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x1b8940u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_1b8944:
    // 0x1b8944: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1b8944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8948:
    // 0x1b8948: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x1b8948u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_1b894c:
    // 0x1b894c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1b894cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8950:
    // 0x1b8950: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1b8950u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1b8954:
    // 0x1b8954: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x1b8954u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1b8958:
    // 0x1b8958: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1b8958u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1b895c:
    // 0x1b895c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1b895cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1b8960:
    // 0x1b8960: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1b8960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1b8964:
    // 0x1b8964: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1b8964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1b8968:
    // 0x1b8968: 0x6ba3001f  ldl         $v1, 0x1F($sp)
    ctx->pc = 0x1b8968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1b896c:
    // 0x1b896c: 0x6fa30018  ldr         $v1, 0x18($sp)
    ctx->pc = 0x1b896cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1b8970:
    // 0x1b8970: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1b8970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b8974:
    // 0x1b8974: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1b8974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b8978:
    // 0x1b8978: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x1b8978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b897c:
    // 0x1b897c: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x1b897cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b8980:
    // 0x1b8980: 0xc06cda0  jal         func_1B3680
label_1b8984:
    if (ctx->pc == 0x1B8984u) {
        ctx->pc = 0x1B8984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8980u;
        // 0x1b8984: 0x37a7000c  ori         $a3, $sp, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8988u;
        goto label_1b8988;
    }
    ctx->pc = 0x1B8980u;
    SET_GPR_U32(ctx, 31, 0x1B8988u);
    ctx->pc = 0x1B8984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8980u;
    // 0x1b8984: 0x37a7000c  ori         $a3, $sp, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3680u, 0x1B8980u, 0x1B8988u)) {
        return;
    }
    ctx->pc = 0x1B8988u;
label_1b8988:
    // 0x1b8988: 0x8e020268  lw          $v0, 0x268($s0)
    ctx->pc = 0x1b8988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
label_1b898c:
    // 0x1b898c: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
label_1b8990:
    if (ctx->pc == 0x1B8990u) {
        ctx->pc = 0x1B8990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B898Cu;
        // 0x1b8990: 0x8e020258  lw          $v0, 0x258($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8994u;
        goto label_1b8994;
    }
    ctx->pc = 0x1B898Cu;
    {
        const bool branch_taken_0x1b898c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b898c) {
            ctx->pc = 0x1B8990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B898Cu;
            // 0x1b8990: 0x8e020258  lw          $v0, 0x258($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8A08u;
            goto label_1b8a08;
        }
    }
    ctx->pc = 0x1B8994u;
label_1b8994:
    // 0x1b8994: 0x8e030328  lw          $v1, 0x328($s0)
    ctx->pc = 0x1b8994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
label_1b8998:
    // 0x1b8998: 0x2862000b  slti        $v0, $v1, 0xB
    ctx->pc = 0x1b8998u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
label_1b899c:
    // 0x1b899c: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_1b89a0:
    if (ctx->pc == 0x1B89A0u) {
        ctx->pc = 0x1B89A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B899Cu;
        // 0x1b89a0: 0x8e020258  lw          $v0, 0x258($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B89A4u;
        goto label_1b89a4;
    }
    ctx->pc = 0x1B899Cu;
    {
        const bool branch_taken_0x1b899c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b899c) {
            ctx->pc = 0x1B89A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B899Cu;
            // 0x1b89a0: 0x8e020258  lw          $v0, 0x258($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8A08u;
            goto label_1b8a08;
        }
    }
    ctx->pc = 0x1B89A4u;
label_1b89a4:
    // 0x1b89a4: 0x8e02032c  lw          $v0, 0x32C($s0)
    ctx->pc = 0x1b89a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
label_1b89a8:
    // 0x1b89a8: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x1b89a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b89ac:
    // 0x1b89ac: 0x2883000b  slti        $v1, $a0, 0xB
    ctx->pc = 0x1b89acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)11) ? 1 : 0);
label_1b89b0:
    // 0x1b89b0: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_1b89b4:
    if (ctx->pc == 0x1B89B4u) {
        ctx->pc = 0x1B89B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B89B0u;
        // 0x1b89b4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B89B8u;
        goto label_1b89b8;
    }
    ctx->pc = 0x1B89B0u;
    {
        const bool branch_taken_0x1b89b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B89B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B89B0u;
        // 0x1b89b4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b89b0) {
            ctx->pc = 0x1B8A04u;
            goto label_1b8a04;
        }
    }
    ctx->pc = 0x1B89B8u;
label_1b89b8:
    // 0x1b89b8: 0x8e050258  lw          $a1, 0x258($s0)
    ctx->pc = 0x1b89b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
label_1b89bc:
    // 0x1b89bc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1b89bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1b89c0:
    // 0x1b89c0: 0x84a40108  lh          $a0, 0x108($a1)
    ctx->pc = 0x1b89c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 264)));
label_1b89c4:
    // 0x1b89c4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1b89c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1b89c8:
    // 0x1b89c8: 0x0  nop
    ctx->pc = 0x1b89c8u;
    // NOP
label_1b89cc:
    // 0x1b89cc: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1b89ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_1b89d0:
    // 0x1b89d0: 0x8ca3010c  lw          $v1, 0x10C($a1)
    ctx->pc = 0x1b89d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 268)));
label_1b89d4:
    // 0x1b89d4: 0x60f809  jalr        $v1
label_1b89d8:
    if (ctx->pc == 0x1B89D8u) {
        ctx->pc = 0x1B89D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B89D4u;
        // 0x1b89d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B89DCu;
        goto label_1b89dc;
    }
    ctx->pc = 0x1B89D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B89DCu);
        ctx->pc = 0x1B89D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B89D4u;
        // 0x1b89d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B89D4u, 0x1B89DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B89DCu;
label_1b89dc:
    // 0x1b89dc: 0xc085bc2  jal         func_216F08
label_1b89e0:
    if (ctx->pc == 0x1B89E0u) {
        ctx->pc = 0x1B89E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B89DCu;
        // 0x1b89e0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B89E4u;
        goto label_1b89e4;
    }
    ctx->pc = 0x1B89DCu;
    SET_GPR_U32(ctx, 31, 0x1B89E4u);
    ctx->pc = 0x1B89E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B89DCu;
    // 0x1b89e0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x216F08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216F08u, 0x1B89DCu, 0x1B89E4u)) {
        return;
    }
    ctx->pc = 0x1B89E4u;
label_1b89e4:
    // 0x1b89e4: 0x4615a502  mul.s       $f20, $f20, $f21
    ctx->pc = 0x1b89e4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
label_1b89e8:
    // 0x1b89e8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b89e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1b89ec:
    // 0x1b89ec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b89ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b89f0:
    // 0x1b89f0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1b89f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b89f4:
    // 0x1b89f4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1b89f4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1b89f8:
    // 0x1b89f8: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x1b89f8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_1b89fc:
    // 0x1b89fc: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x1b89fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_1b8a00:
    // 0x1b8a00: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1b8a00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1b8a04:
    // 0x1b8a04: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x1b8a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
label_1b8a08:
    // 0x1b8a08: 0x84440108  lh          $a0, 0x108($v0)
    ctx->pc = 0x1b8a08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 264)));
label_1b8a0c:
    // 0x1b8a0c: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x1b8a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_1b8a10:
    // 0x1b8a10: 0x60f809  jalr        $v1
label_1b8a14:
    if (ctx->pc == 0x1B8A14u) {
        ctx->pc = 0x1B8A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A10u;
        // 0x1b8a14: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8A18u;
        goto label_1b8a18;
    }
    ctx->pc = 0x1B8A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B8A18u);
        ctx->pc = 0x1B8A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A10u;
        // 0x1b8a14: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8A10u, 0x1B8A18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8A18u;
label_1b8a18:
    // 0x1b8a18: 0x8e080268  lw          $t0, 0x268($s0)
    ctx->pc = 0x1b8a18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
label_1b8a1c:
    // 0x1b8a1c: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x1b8a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
label_1b8a20:
    // 0x1b8a20: 0x8e040330  lw          $a0, 0x330($s0)
    ctx->pc = 0x1b8a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
label_1b8a24:
    // 0x1b8a24: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1b8a24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1b8a28:
    // 0x1b8a28: 0x8e05026c  lw          $a1, 0x26C($s0)
    ctx->pc = 0x1b8a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
label_1b8a2c:
    // 0x1b8a2c: 0x24e7cfb8  addiu       $a3, $a3, -0x3048
    ctx->pc = 0x1b8a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954936));
label_1b8a30:
    // 0x1b8a30: 0x8402b  sltu        $t0, $zero, $t0
    ctx->pc = 0x1b8a30u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1b8a34:
    // 0x1b8a34: 0xc085cec  jal         func_2173B0
label_1b8a38:
    if (ctx->pc == 0x1B8A38u) {
        ctx->pc = 0x1B8A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A34u;
        // 0x1b8a38: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8A3Cu;
        goto label_1b8a3c;
    }
    ctx->pc = 0x1B8A34u;
    SET_GPR_U32(ctx, 31, 0x1B8A3Cu);
    ctx->pc = 0x1B8A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8A34u;
    // 0x1b8a38: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2173B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2173B0u, 0x1B8A34u, 0x1B8A3Cu)) {
        return;
    }
    ctx->pc = 0x1B8A3Cu;
label_1b8a3c:
    // 0x1b8a3c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1b8a40:
    if (ctx->pc == 0x1B8A40u) {
        ctx->pc = 0x1B8A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A3Cu;
        // 0x1b8a40: 0xae020314  sw          $v0, 0x314($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 788), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8A44u;
        goto label_1b8a44;
    }
    ctx->pc = 0x1B8A3Cu;
    {
        const bool branch_taken_0x1b8a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A3Cu;
        // 0x1b8a40: 0xae020314  sw          $v0, 0x314($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 788), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a3c) {
            ctx->pc = 0x1B8A68u;
            goto label_1b8a68;
        }
    }
    ctx->pc = 0x1B8A44u;
label_1b8a44:
    // 0x1b8a44: 0x8e060290  lw          $a2, 0x290($s0)
    ctx->pc = 0x1b8a44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
label_1b8a48:
    // 0x1b8a48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b8a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8a4c:
    // 0x1b8a4c: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b8a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b8a50:
    // 0x1b8a50: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1b8a50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1b8a54:
    // 0x1b8a54: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1b8a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1b8a58:
    // 0x1b8a58: 0x60f809  jalr        $v1
label_1b8a5c:
    if (ctx->pc == 0x1B8A5Cu) {
        ctx->pc = 0x1B8A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A58u;
        // 0x1b8a5c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8A60u;
        goto label_1b8a60;
    }
    ctx->pc = 0x1B8A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B8A60u);
        ctx->pc = 0x1B8A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A58u;
        // 0x1b8a5c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8A58u, 0x1B8A60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8A60u;
label_1b8a60:
    // 0x1b8a60: 0x1000000e  b           . + 4 + (0xE << 2)
label_1b8a64:
    if (ctx->pc == 0x1B8A64u) {
        ctx->pc = 0x1B8A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A60u;
        // 0x1b8a64: 0x8e020318  lw          $v0, 0x318($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 792)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8A68u;
        goto label_1b8a68;
    }
    ctx->pc = 0x1B8A60u;
    {
        const bool branch_taken_0x1b8a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A60u;
        // 0x1b8a64: 0x8e020318  lw          $v0, 0x318($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 792)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a60) {
            ctx->pc = 0x1B8A9Cu;
            goto label_1b8a9c;
        }
    }
    ctx->pc = 0x1B8A68u;
label_1b8a68:
    // 0x1b8a68: 0x8e060290  lw          $a2, 0x290($s0)
    ctx->pc = 0x1b8a68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
label_1b8a6c:
    // 0x1b8a6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8a70:
    // 0x1b8a70: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b8a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b8a74:
    // 0x1b8a74: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1b8a74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1b8a78:
    // 0x1b8a78: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1b8a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1b8a7c:
    // 0x1b8a7c: 0x60f809  jalr        $v1
label_1b8a80:
    if (ctx->pc == 0x1B8A80u) {
        ctx->pc = 0x1B8A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A7Cu;
        // 0x1b8a80: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8A84u;
        goto label_1b8a84;
    }
    ctx->pc = 0x1B8A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B8A84u);
        ctx->pc = 0x1B8A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A7Cu;
        // 0x1b8a80: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8A7Cu, 0x1B8A84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8A84u;
label_1b8a84:
    // 0x1b8a84: 0x8e020290  lw          $v0, 0x290($s0)
    ctx->pc = 0x1b8a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
label_1b8a88:
    // 0x1b8a88: 0xc60002e4  lwc1        $f0, 0x2E4($s0)
    ctx->pc = 0x1b8a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8a8c:
    // 0x1b8a8c: 0xae0002d8  sw          $zero, 0x2D8($s0)
    ctx->pc = 0x1b8a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 0));
label_1b8a90:
    // 0x1b8a90: 0xae0002dc  sw          $zero, 0x2DC($s0)
    ctx->pc = 0x1b8a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 0));
label_1b8a94:
    // 0x1b8a94: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1b8a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1b8a98:
    // 0x1b8a98: 0x8e020318  lw          $v0, 0x318($s0)
    ctx->pc = 0x1b8a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 792)));
label_1b8a9c:
    // 0x1b8a9c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1b8aa0:
    if (ctx->pc == 0x1B8AA0u) {
        ctx->pc = 0x1B8AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A9Cu;
        // 0x1b8aa0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8AA4u;
        goto label_1b8aa4;
    }
    ctx->pc = 0x1B8A9Cu;
    {
        const bool branch_taken_0x1b8a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A9Cu;
        // 0x1b8aa0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a9c) {
            ctx->pc = 0x1B8AC4u;
            goto label_1b8ac4;
        }
    }
    ctx->pc = 0x1B8AA4u;
label_1b8aa4:
    // 0x1b8aa4: 0x8e06028c  lw          $a2, 0x28C($s0)
    ctx->pc = 0x1b8aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
label_1b8aa8:
    // 0x1b8aa8: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b8aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b8aac:
    // 0x1b8aac: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1b8aacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1b8ab0:
    // 0x1b8ab0: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1b8ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1b8ab4:
    // 0x1b8ab4: 0x60f809  jalr        $v1
label_1b8ab8:
    if (ctx->pc == 0x1B8AB8u) {
        ctx->pc = 0x1B8AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8AB4u;
        // 0x1b8ab8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8ABCu;
        goto label_1b8abc;
    }
    ctx->pc = 0x1B8AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B8ABCu);
        ctx->pc = 0x1B8AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8AB4u;
        // 0x1b8ab8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8AB4u, 0x1B8ABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8ABCu;
label_1b8abc:
    // 0x1b8abc: 0x1000000e  b           . + 4 + (0xE << 2)
label_1b8ac0:
    if (ctx->pc == 0x1B8AC0u) {
        ctx->pc = 0x1B8AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8ABCu;
        // 0x1b8ac0: 0x8e030264  lw          $v1, 0x264($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8AC4u;
        goto label_1b8ac4;
    }
    ctx->pc = 0x1B8ABCu;
    {
        const bool branch_taken_0x1b8abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8ABCu;
        // 0x1b8ac0: 0x8e030264  lw          $v1, 0x264($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8abc) {
            ctx->pc = 0x1B8AF8u;
            goto label_1b8af8;
        }
    }
    ctx->pc = 0x1B8AC4u;
label_1b8ac4:
    // 0x1b8ac4: 0x8e06028c  lw          $a2, 0x28C($s0)
    ctx->pc = 0x1b8ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
label_1b8ac8:
    // 0x1b8ac8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8acc:
    // 0x1b8acc: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b8accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b8ad0:
    // 0x1b8ad0: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1b8ad0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1b8ad4:
    // 0x1b8ad4: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1b8ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1b8ad8:
    // 0x1b8ad8: 0x60f809  jalr        $v1
label_1b8adc:
    if (ctx->pc == 0x1B8ADCu) {
        ctx->pc = 0x1B8ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8AD8u;
        // 0x1b8adc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8AE0u;
        goto label_1b8ae0;
    }
    ctx->pc = 0x1B8AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B8AE0u);
        ctx->pc = 0x1B8ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8AD8u;
        // 0x1b8adc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8AD8u, 0x1B8AE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8AE0u;
label_1b8ae0:
    // 0x1b8ae0: 0x8e02028c  lw          $v0, 0x28C($s0)
    ctx->pc = 0x1b8ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
label_1b8ae4:
    // 0x1b8ae4: 0xc60002d0  lwc1        $f0, 0x2D0($s0)
    ctx->pc = 0x1b8ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8ae8:
    // 0x1b8ae8: 0xae0002c4  sw          $zero, 0x2C4($s0)
    ctx->pc = 0x1b8ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 0));
label_1b8aec:
    // 0x1b8aec: 0xae0002c8  sw          $zero, 0x2C8($s0)
    ctx->pc = 0x1b8aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 0));
label_1b8af0:
    // 0x1b8af0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1b8af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1b8af4:
    // 0x1b8af4: 0x8e030264  lw          $v1, 0x264($s0)
    ctx->pc = 0x1b8af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1b8af8:
    // 0x1b8af8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b8af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8afc:
    // 0x1b8afc: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_1b8b00:
    if (ctx->pc == 0x1B8B00u) {
        ctx->pc = 0x1B8B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8AFCu;
        // 0x1b8b00: 0x8e060294  lw          $a2, 0x294($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8B04u;
        goto label_1b8b04;
    }
    ctx->pc = 0x1B8AFCu;
    {
        const bool branch_taken_0x1b8afc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B8B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8AFCu;
        // 0x1b8b00: 0x8e060294  lw          $a2, 0x294($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8afc) {
            ctx->pc = 0x1B8B34u;
            goto label_1b8b34;
        }
    }
    ctx->pc = 0x1B8B04u;
label_1b8b04:
    // 0x1b8b04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8b08:
    // 0x1b8b08: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b8b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b8b0c:
    // 0x1b8b0c: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1b8b0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1b8b10:
    // 0x1b8b10: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1b8b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1b8b14:
    // 0x1b8b14: 0x60f809  jalr        $v1
label_1b8b18:
    if (ctx->pc == 0x1B8B18u) {
        ctx->pc = 0x1B8B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B14u;
        // 0x1b8b18: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8B1Cu;
        goto label_1b8b1c;
    }
    ctx->pc = 0x1B8B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B8B1Cu);
        ctx->pc = 0x1B8B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B14u;
        // 0x1b8b18: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8B14u, 0x1B8B1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8B1Cu;
label_1b8b1c:
    // 0x1b8b1c: 0x8e020294  lw          $v0, 0x294($s0)
    ctx->pc = 0x1b8b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 660)));
label_1b8b20:
    // 0x1b8b20: 0xc60002f8  lwc1        $f0, 0x2F8($s0)
    ctx->pc = 0x1b8b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8b24:
    // 0x1b8b24: 0xae0002ec  sw          $zero, 0x2EC($s0)
    ctx->pc = 0x1b8b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 748), GPR_U32(ctx, 0));
label_1b8b28:
    // 0x1b8b28: 0xae0002f0  sw          $zero, 0x2F0($s0)
    ctx->pc = 0x1b8b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 0));
label_1b8b2c:
    // 0x1b8b2c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1b8b30:
    if (ctx->pc == 0x1B8B30u) {
        ctx->pc = 0x1B8B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B2Cu;
        // 0x1b8b30: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8B34u;
        goto label_1b8b34;
    }
    ctx->pc = 0x1B8B2Cu;
    {
        const bool branch_taken_0x1b8b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B2Cu;
        // 0x1b8b30: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8b2c) {
            ctx->pc = 0x1B8B4Cu;
            goto label_1b8b4c;
        }
    }
    ctx->pc = 0x1B8B34u;
label_1b8b34:
    // 0x1b8b34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b8b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8b38:
    // 0x1b8b38: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b8b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b8b3c:
    // 0x1b8b3c: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1b8b3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1b8b40:
    // 0x1b8b40: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1b8b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1b8b44:
    // 0x1b8b44: 0x60f809  jalr        $v1
label_1b8b48:
    if (ctx->pc == 0x1B8B48u) {
        ctx->pc = 0x1B8B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B44u;
        // 0x1b8b48: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8B4Cu;
        goto label_1b8b4c;
    }
    ctx->pc = 0x1B8B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B8B4Cu);
        ctx->pc = 0x1B8B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B44u;
        // 0x1b8b48: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8B44u, 0x1B8B4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8B4Cu;
label_1b8b4c:
    // 0x1b8b4c: 0x8e030264  lw          $v1, 0x264($s0)
    ctx->pc = 0x1b8b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1b8b50:
    // 0x1b8b50: 0x8e020260  lw          $v0, 0x260($s0)
    ctx->pc = 0x1b8b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1b8b54:
    // 0x1b8b54: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_1b8b58:
    if (ctx->pc == 0x1B8B58u) {
        ctx->pc = 0x1B8B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B54u;
        // 0x1b8b58: 0x8e060298  lw          $a2, 0x298($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8B5Cu;
        goto label_1b8b5c;
    }
    ctx->pc = 0x1B8B54u;
    {
        const bool branch_taken_0x1b8b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B8B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B54u;
        // 0x1b8b58: 0x8e060298  lw          $a2, 0x298($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8b54) {
            ctx->pc = 0x1B8B8Cu;
            goto label_1b8b8c;
        }
    }
    ctx->pc = 0x1B8B5Cu;
label_1b8b5c:
    // 0x1b8b5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8b60:
    // 0x1b8b60: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b8b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b8b64:
    // 0x1b8b64: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1b8b64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1b8b68:
    // 0x1b8b68: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1b8b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1b8b6c:
    // 0x1b8b6c: 0x60f809  jalr        $v1
label_1b8b70:
    if (ctx->pc == 0x1B8B70u) {
        ctx->pc = 0x1B8B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B6Cu;
        // 0x1b8b70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8B74u;
        goto label_1b8b74;
    }
    ctx->pc = 0x1B8B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B8B74u);
        ctx->pc = 0x1B8B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B6Cu;
        // 0x1b8b70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8B6Cu, 0x1B8B74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8B74u;
label_1b8b74:
    // 0x1b8b74: 0xc600030c  lwc1        $f0, 0x30C($s0)
    ctx->pc = 0x1b8b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8b78:
    // 0x1b8b78: 0x8e020298  lw          $v0, 0x298($s0)
    ctx->pc = 0x1b8b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
label_1b8b7c:
    // 0x1b8b7c: 0xae000300  sw          $zero, 0x300($s0)
    ctx->pc = 0x1b8b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 0));
label_1b8b80:
    // 0x1b8b80: 0xae000304  sw          $zero, 0x304($s0)
    ctx->pc = 0x1b8b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 0));
label_1b8b84:
    // 0x1b8b84: 0x10000007  b           . + 4 + (0x7 << 2)
label_1b8b88:
    if (ctx->pc == 0x1B8B88u) {
        ctx->pc = 0x1B8B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B84u;
        // 0x1b8b88: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8B8Cu;
        goto label_1b8b8c;
    }
    ctx->pc = 0x1B8B84u;
    {
        const bool branch_taken_0x1b8b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B84u;
        // 0x1b8b88: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8b84) {
            ctx->pc = 0x1B8BA4u;
            goto label_1b8ba4;
        }
    }
    ctx->pc = 0x1B8B8Cu;
label_1b8b8c:
    // 0x1b8b8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b8b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8b90:
    // 0x1b8b90: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b8b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b8b94:
    // 0x1b8b94: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1b8b94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1b8b98:
    // 0x1b8b98: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1b8b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1b8b9c:
    // 0x1b8b9c: 0x60f809  jalr        $v1
label_1b8ba0:
    if (ctx->pc == 0x1B8BA0u) {
        ctx->pc = 0x1B8BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B9Cu;
        // 0x1b8ba0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8BA4u;
        goto label_1b8ba4;
    }
    ctx->pc = 0x1B8B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B8BA4u);
        ctx->pc = 0x1B8BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B9Cu;
        // 0x1b8ba0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8B9Cu, 0x1B8BA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8BA4u;
label_1b8ba4:
    // 0x1b8ba4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b8ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b8ba8:
    // 0x1b8ba8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b8ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b8bac:
    // 0x1b8bac: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1b8bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1b8bb0:
    // 0x1b8bb0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1b8bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b8bb4:
    // 0x1b8bb4: 0x3e00008  jr          $ra
label_1b8bb8:
    if (ctx->pc == 0x1B8BB8u) {
        ctx->pc = 0x1B8BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8BB4u;
        // 0x1b8bb8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8BBCu;
        goto label_1b8bbc;
    }
    ctx->pc = 0x1B8BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8BB4u;
        // 0x1b8bb8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8BBCu;
label_1b8bbc:
    // 0x1b8bbc: 0x0  nop
    ctx->pc = 0x1b8bbcu;
    // NOP
    ctx->pc = 0x1b8bc0u;
}
