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

// Function: sub_00277978
// Address: 0x277978 - 0x277d58
void sub_00277978_0x277978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277978_0x277978");
#endif

    switch (ctx->pc) {
        case 0x277978u: goto label_277978;
        case 0x27797cu: goto label_27797c;
        case 0x277980u: goto label_277980;
        case 0x277984u: goto label_277984;
        case 0x277988u: goto label_277988;
        case 0x27798cu: goto label_27798c;
        case 0x277990u: goto label_277990;
        case 0x277994u: goto label_277994;
        case 0x277998u: goto label_277998;
        case 0x27799cu: goto label_27799c;
        case 0x2779a0u: goto label_2779a0;
        case 0x2779a4u: goto label_2779a4;
        case 0x2779a8u: goto label_2779a8;
        case 0x2779acu: goto label_2779ac;
        case 0x2779b0u: goto label_2779b0;
        case 0x2779b4u: goto label_2779b4;
        case 0x2779b8u: goto label_2779b8;
        case 0x2779bcu: goto label_2779bc;
        case 0x2779c0u: goto label_2779c0;
        case 0x2779c4u: goto label_2779c4;
        case 0x2779c8u: goto label_2779c8;
        case 0x2779ccu: goto label_2779cc;
        case 0x2779d0u: goto label_2779d0;
        case 0x2779d4u: goto label_2779d4;
        case 0x2779d8u: goto label_2779d8;
        case 0x2779dcu: goto label_2779dc;
        case 0x2779e0u: goto label_2779e0;
        case 0x2779e4u: goto label_2779e4;
        case 0x2779e8u: goto label_2779e8;
        case 0x2779ecu: goto label_2779ec;
        case 0x2779f0u: goto label_2779f0;
        case 0x2779f4u: goto label_2779f4;
        case 0x2779f8u: goto label_2779f8;
        case 0x2779fcu: goto label_2779fc;
        case 0x277a00u: goto label_277a00;
        case 0x277a04u: goto label_277a04;
        case 0x277a08u: goto label_277a08;
        case 0x277a0cu: goto label_277a0c;
        case 0x277a10u: goto label_277a10;
        case 0x277a14u: goto label_277a14;
        case 0x277a18u: goto label_277a18;
        case 0x277a1cu: goto label_277a1c;
        case 0x277a20u: goto label_277a20;
        case 0x277a24u: goto label_277a24;
        case 0x277a28u: goto label_277a28;
        case 0x277a2cu: goto label_277a2c;
        case 0x277a30u: goto label_277a30;
        case 0x277a34u: goto label_277a34;
        case 0x277a38u: goto label_277a38;
        case 0x277a3cu: goto label_277a3c;
        case 0x277a40u: goto label_277a40;
        case 0x277a44u: goto label_277a44;
        case 0x277a48u: goto label_277a48;
        case 0x277a4cu: goto label_277a4c;
        case 0x277a50u: goto label_277a50;
        case 0x277a54u: goto label_277a54;
        case 0x277a58u: goto label_277a58;
        case 0x277a5cu: goto label_277a5c;
        case 0x277a60u: goto label_277a60;
        case 0x277a64u: goto label_277a64;
        case 0x277a68u: goto label_277a68;
        case 0x277a6cu: goto label_277a6c;
        case 0x277a70u: goto label_277a70;
        case 0x277a74u: goto label_277a74;
        case 0x277a78u: goto label_277a78;
        case 0x277a7cu: goto label_277a7c;
        case 0x277a80u: goto label_277a80;
        case 0x277a84u: goto label_277a84;
        case 0x277a88u: goto label_277a88;
        case 0x277a8cu: goto label_277a8c;
        case 0x277a90u: goto label_277a90;
        case 0x277a94u: goto label_277a94;
        case 0x277a98u: goto label_277a98;
        case 0x277a9cu: goto label_277a9c;
        case 0x277aa0u: goto label_277aa0;
        case 0x277aa4u: goto label_277aa4;
        case 0x277aa8u: goto label_277aa8;
        case 0x277aacu: goto label_277aac;
        case 0x277ab0u: goto label_277ab0;
        case 0x277ab4u: goto label_277ab4;
        case 0x277ab8u: goto label_277ab8;
        case 0x277abcu: goto label_277abc;
        case 0x277ac0u: goto label_277ac0;
        case 0x277ac4u: goto label_277ac4;
        case 0x277ac8u: goto label_277ac8;
        case 0x277accu: goto label_277acc;
        case 0x277ad0u: goto label_277ad0;
        case 0x277ad4u: goto label_277ad4;
        case 0x277ad8u: goto label_277ad8;
        case 0x277adcu: goto label_277adc;
        case 0x277ae0u: goto label_277ae0;
        case 0x277ae4u: goto label_277ae4;
        case 0x277ae8u: goto label_277ae8;
        case 0x277aecu: goto label_277aec;
        case 0x277af0u: goto label_277af0;
        case 0x277af4u: goto label_277af4;
        case 0x277af8u: goto label_277af8;
        case 0x277afcu: goto label_277afc;
        case 0x277b00u: goto label_277b00;
        case 0x277b04u: goto label_277b04;
        case 0x277b08u: goto label_277b08;
        case 0x277b0cu: goto label_277b0c;
        case 0x277b10u: goto label_277b10;
        case 0x277b14u: goto label_277b14;
        case 0x277b18u: goto label_277b18;
        case 0x277b1cu: goto label_277b1c;
        case 0x277b20u: goto label_277b20;
        case 0x277b24u: goto label_277b24;
        case 0x277b28u: goto label_277b28;
        case 0x277b2cu: goto label_277b2c;
        case 0x277b30u: goto label_277b30;
        case 0x277b34u: goto label_277b34;
        case 0x277b38u: goto label_277b38;
        case 0x277b3cu: goto label_277b3c;
        case 0x277b40u: goto label_277b40;
        case 0x277b44u: goto label_277b44;
        case 0x277b48u: goto label_277b48;
        case 0x277b4cu: goto label_277b4c;
        case 0x277b50u: goto label_277b50;
        case 0x277b54u: goto label_277b54;
        case 0x277b58u: goto label_277b58;
        case 0x277b5cu: goto label_277b5c;
        case 0x277b60u: goto label_277b60;
        case 0x277b64u: goto label_277b64;
        case 0x277b68u: goto label_277b68;
        case 0x277b6cu: goto label_277b6c;
        case 0x277b70u: goto label_277b70;
        case 0x277b74u: goto label_277b74;
        case 0x277b78u: goto label_277b78;
        case 0x277b7cu: goto label_277b7c;
        case 0x277b80u: goto label_277b80;
        case 0x277b84u: goto label_277b84;
        case 0x277b88u: goto label_277b88;
        case 0x277b8cu: goto label_277b8c;
        case 0x277b90u: goto label_277b90;
        case 0x277b94u: goto label_277b94;
        case 0x277b98u: goto label_277b98;
        case 0x277b9cu: goto label_277b9c;
        case 0x277ba0u: goto label_277ba0;
        case 0x277ba4u: goto label_277ba4;
        case 0x277ba8u: goto label_277ba8;
        case 0x277bacu: goto label_277bac;
        case 0x277bb0u: goto label_277bb0;
        case 0x277bb4u: goto label_277bb4;
        case 0x277bb8u: goto label_277bb8;
        case 0x277bbcu: goto label_277bbc;
        case 0x277bc0u: goto label_277bc0;
        case 0x277bc4u: goto label_277bc4;
        case 0x277bc8u: goto label_277bc8;
        case 0x277bccu: goto label_277bcc;
        case 0x277bd0u: goto label_277bd0;
        case 0x277bd4u: goto label_277bd4;
        case 0x277bd8u: goto label_277bd8;
        case 0x277bdcu: goto label_277bdc;
        case 0x277be0u: goto label_277be0;
        case 0x277be4u: goto label_277be4;
        case 0x277be8u: goto label_277be8;
        case 0x277becu: goto label_277bec;
        case 0x277bf0u: goto label_277bf0;
        case 0x277bf4u: goto label_277bf4;
        case 0x277bf8u: goto label_277bf8;
        case 0x277bfcu: goto label_277bfc;
        case 0x277c00u: goto label_277c00;
        case 0x277c04u: goto label_277c04;
        case 0x277c08u: goto label_277c08;
        case 0x277c0cu: goto label_277c0c;
        case 0x277c10u: goto label_277c10;
        case 0x277c14u: goto label_277c14;
        case 0x277c18u: goto label_277c18;
        case 0x277c1cu: goto label_277c1c;
        case 0x277c20u: goto label_277c20;
        case 0x277c24u: goto label_277c24;
        case 0x277c28u: goto label_277c28;
        case 0x277c2cu: goto label_277c2c;
        case 0x277c30u: goto label_277c30;
        case 0x277c34u: goto label_277c34;
        case 0x277c38u: goto label_277c38;
        case 0x277c3cu: goto label_277c3c;
        case 0x277c40u: goto label_277c40;
        case 0x277c44u: goto label_277c44;
        case 0x277c48u: goto label_277c48;
        case 0x277c4cu: goto label_277c4c;
        case 0x277c50u: goto label_277c50;
        case 0x277c54u: goto label_277c54;
        case 0x277c58u: goto label_277c58;
        case 0x277c5cu: goto label_277c5c;
        case 0x277c60u: goto label_277c60;
        case 0x277c64u: goto label_277c64;
        case 0x277c68u: goto label_277c68;
        case 0x277c6cu: goto label_277c6c;
        case 0x277c70u: goto label_277c70;
        case 0x277c74u: goto label_277c74;
        case 0x277c78u: goto label_277c78;
        case 0x277c7cu: goto label_277c7c;
        case 0x277c80u: goto label_277c80;
        case 0x277c84u: goto label_277c84;
        case 0x277c88u: goto label_277c88;
        case 0x277c8cu: goto label_277c8c;
        case 0x277c90u: goto label_277c90;
        case 0x277c94u: goto label_277c94;
        case 0x277c98u: goto label_277c98;
        case 0x277c9cu: goto label_277c9c;
        case 0x277ca0u: goto label_277ca0;
        case 0x277ca4u: goto label_277ca4;
        case 0x277ca8u: goto label_277ca8;
        case 0x277cacu: goto label_277cac;
        case 0x277cb0u: goto label_277cb0;
        case 0x277cb4u: goto label_277cb4;
        case 0x277cb8u: goto label_277cb8;
        case 0x277cbcu: goto label_277cbc;
        case 0x277cc0u: goto label_277cc0;
        case 0x277cc4u: goto label_277cc4;
        case 0x277cc8u: goto label_277cc8;
        case 0x277cccu: goto label_277ccc;
        case 0x277cd0u: goto label_277cd0;
        case 0x277cd4u: goto label_277cd4;
        case 0x277cd8u: goto label_277cd8;
        case 0x277cdcu: goto label_277cdc;
        case 0x277ce0u: goto label_277ce0;
        case 0x277ce4u: goto label_277ce4;
        case 0x277ce8u: goto label_277ce8;
        case 0x277cecu: goto label_277cec;
        case 0x277cf0u: goto label_277cf0;
        case 0x277cf4u: goto label_277cf4;
        case 0x277cf8u: goto label_277cf8;
        case 0x277cfcu: goto label_277cfc;
        case 0x277d00u: goto label_277d00;
        case 0x277d04u: goto label_277d04;
        case 0x277d08u: goto label_277d08;
        case 0x277d0cu: goto label_277d0c;
        case 0x277d10u: goto label_277d10;
        case 0x277d14u: goto label_277d14;
        case 0x277d18u: goto label_277d18;
        case 0x277d1cu: goto label_277d1c;
        case 0x277d20u: goto label_277d20;
        case 0x277d24u: goto label_277d24;
        case 0x277d28u: goto label_277d28;
        case 0x277d2cu: goto label_277d2c;
        case 0x277d30u: goto label_277d30;
        case 0x277d34u: goto label_277d34;
        case 0x277d38u: goto label_277d38;
        case 0x277d3cu: goto label_277d3c;
        case 0x277d40u: goto label_277d40;
        case 0x277d44u: goto label_277d44;
        case 0x277d48u: goto label_277d48;
        case 0x277d4cu: goto label_277d4c;
        case 0x277d50u: goto label_277d50;
        case 0x277d54u: goto label_277d54;
        default: break;
    }

    ctx->pc = 0x277978u;

label_277978:
    // 0x277978: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x277978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
label_27797c:
    // 0x27797c: 0x7fb401b0  sq          $s4, 0x1B0($sp)
    ctx->pc = 0x27797cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 20));
label_277980:
    // 0x277980: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x277980u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_277984:
    // 0x277984: 0x7fb101e0  sq          $s1, 0x1E0($sp)
    ctx->pc = 0x277984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 17));
label_277988:
    // 0x277988: 0x7fb501a0  sq          $s5, 0x1A0($sp)
    ctx->pc = 0x277988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 21));
label_27798c:
    // 0x27798c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x27798cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_277990:
    // 0x277990: 0x7fb60190  sq          $s6, 0x190($sp)
    ctx->pc = 0x277990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 22));
label_277994:
    // 0x277994: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x277994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_277998:
    // 0x277998: 0x7fb001f0  sq          $s0, 0x1F0($sp)
    ctx->pc = 0x277998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 16));
label_27799c:
    // 0x27799c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x27799cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2779a0:
    // 0x2779a0: 0x7fb201d0  sq          $s2, 0x1D0($sp)
    ctx->pc = 0x2779a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 18));
label_2779a4:
    // 0x2779a4: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2779a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2779a8:
    // 0x2779a8: 0x7fb301c0  sq          $s3, 0x1C0($sp)
    ctx->pc = 0x2779a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 19));
label_2779ac:
    // 0x2779ac: 0x7fb70180  sq          $s7, 0x180($sp)
    ctx->pc = 0x2779acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 23));
label_2779b0:
    // 0x2779b0: 0x7fbe0170  sq          $fp, 0x170($sp)
    ctx->pc = 0x2779b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 30));
label_2779b4:
    // 0x2779b4: 0xffbf0160  sd          $ra, 0x160($sp)
    ctx->pc = 0x2779b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
label_2779b8:
    // 0x2779b8: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x2779b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2779bc:
    // 0x2779bc: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x2779bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2779c0:
    // 0x2779c0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2779c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2779c4:
    // 0x2779c4: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2779c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2779c8:
    // 0x2779c8: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2779c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2779cc:
    // 0x2779cc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2779ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_2779d0:
    // 0x2779d0: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2779d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2779d4:
    // 0x2779d4: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2779d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2779d8:
    // 0x2779d8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2779d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2779dc:
    // 0x2779dc: 0xb3a20013  sdl         $v0, 0x13($sp)
    ctx->pc = 0x2779dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2779e0:
    // 0x2779e0: 0xb7a2000c  sdr         $v0, 0xC($sp)
    ctx->pc = 0x2779e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2779e4:
    // 0x2779e4: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x2779e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_2779e8:
    // 0x2779e8: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2779e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2779ec:
    // 0x2779ec: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x2779ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2779f0:
    // 0x2779f0: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x2779f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2779f4:
    // 0x2779f4: 0xc7a60014  lwc1        $f6, 0x14($sp)
    ctx->pc = 0x2779f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2779f8:
    // 0x2779f8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2779f8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_2779fc:
    // 0x2779fc: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x2779fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_277a00:
    // 0x277a00: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x277a00u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_277a04:
    // 0x277a04: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x277a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_277a08:
    // 0x277a08: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x277a08u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_277a0c:
    // 0x277a0c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x277a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277a10:
    // 0x277a10: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x277a10u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_277a14:
    // 0x277a14: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x277a14u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_277a18:
    // 0x277a18: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x277a18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_277a1c:
    // 0x277a1c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x277a1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_277a20:
    // 0x277a20: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x277a20u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_277a24:
    // 0x277a24: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x277a24u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_277a28:
    // 0x277a28: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x277a28u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_277a2c:
    // 0x277a2c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x277a2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_277a30:
    // 0x277a30: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x277a30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_277a34:
    // 0x277a34: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x277a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_277a38:
    // 0x277a38: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x277a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_277a3c:
    // 0x277a3c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_277a40:
    if (ctx->pc == 0x277A40u) {
        ctx->pc = 0x277A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277A3Cu;
        // 0x277a40: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277A44u;
        goto label_277a44;
    }
    ctx->pc = 0x277A3Cu;
    {
        const bool branch_taken_0x277a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x277A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277A3Cu;
        // 0x277a40: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277a3c) {
            ctx->pc = 0x277A48u;
            goto label_277a48;
        }
    }
    ctx->pc = 0x277A44u;
label_277a44:
    // 0x277a44: 0x8e970000  lw          $s7, 0x0($s4)
    ctx->pc = 0x277a44u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_277a48:
    // 0x277a48: 0x8f8487cc  lw          $a0, -0x7834($gp)
    ctx->pc = 0x277a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936524)));
label_277a4c:
    // 0x277a4c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x277a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_277a50:
    // 0x277a50: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x277a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_277a54:
    // 0x277a54: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x277a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_277a58:
    // 0x277a58: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x277a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_277a5c:
    // 0x277a5c: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x277a5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_277a60:
    // 0x277a60: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x277a60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
label_277a64:
    // 0x277a64: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x277a64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_277a68:
    // 0x277a68: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x277a68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_277a6c:
    // 0x277a6c: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x277a6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_277a70:
    // 0x277a70: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x277a70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_277a74:
    // 0x277a74: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x277a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_277a78:
    // 0x277a78: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x277a78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_277a7c:
    // 0x277a7c: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x277a7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_277a80:
    // 0x277a80: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x277a80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_277a84:
    // 0x277a84: 0xb3a3002f  sdl         $v1, 0x2F($sp)
    ctx->pc = 0x277a84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_277a88:
    // 0x277a88: 0xb7a30028  sdr         $v1, 0x28($sp)
    ctx->pc = 0x277a88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_277a8c:
    // 0x277a8c: 0xb3a40037  sdl         $a0, 0x37($sp)
    ctx->pc = 0x277a8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_277a90:
    // 0x277a90: 0xb7a40030  sdr         $a0, 0x30($sp)
    ctx->pc = 0x277a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_277a94:
    // 0x277a94: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x277a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_277a98:
    // 0x277a98: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x277a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_277a9c:
    // 0x277a9c: 0xafa3013c  sw          $v1, 0x13C($sp)
    ctx->pc = 0x277a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 3));
label_277aa0:
    // 0x277aa0: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x277aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_277aa4:
    // 0x277aa4: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x277aa4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_277aa8:
    // 0x277aa8: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x277aa8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_277aac:
    // 0x277aac: 0x1080009e  beqz        $a0, . + 4 + (0x9E << 2)
label_277ab0:
    if (ctx->pc == 0x277AB0u) {
        ctx->pc = 0x277AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277AACu;
        // 0x277ab0: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277AB4u;
        goto label_277ab4;
    }
    ctx->pc = 0x277AACu;
    {
        const bool branch_taken_0x277aac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x277AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277AACu;
        // 0x277ab0: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277aac) {
            ctx->pc = 0x277D28u;
            goto label_277d28;
        }
    }
    ctx->pc = 0x277AB4u;
label_277ab4:
    // 0x277ab4: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x277ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_277ab8:
    // 0x277ab8: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x277ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_277abc:
    // 0x277abc: 0xafa3013c  sw          $v1, 0x13C($sp)
    ctx->pc = 0x277abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 3));
label_277ac0:
    // 0x277ac0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x277ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_277ac4:
    // 0x277ac4: 0x4800021  bltz        $a0, . + 4 + (0x21 << 2)
label_277ac8:
    if (ctx->pc == 0x277AC8u) {
        ctx->pc = 0x277AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277AC4u;
        // 0x277ac8: 0x8fa2013c  lw          $v0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277ACCu;
        goto label_277acc;
    }
    ctx->pc = 0x277AC4u;
    {
        const bool branch_taken_0x277ac4 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x277AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277AC4u;
        // 0x277ac8: 0x8fa2013c  lw          $v0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277ac4) {
            ctx->pc = 0x277B4Cu;
            goto label_277b4c;
        }
    }
    ctx->pc = 0x277ACCu;
label_277acc:
    // 0x277acc: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x277accu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_277ad0:
    // 0x277ad0: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x277ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_277ad4:
    // 0x277ad4: 0x8fa5013c  lw          $a1, 0x13C($sp)
    ctx->pc = 0x277ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_277ad8:
    // 0x277ad8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x277ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_277adc:
    // 0x277adc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x277adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_277ae0:
    // 0x277ae0: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x277ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_277ae4:
    // 0x277ae4: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x277ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277ae8:
    // 0x277ae8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x277ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277aec:
    // 0x277aec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x277aecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277af0:
    // 0x277af0: 0x0  nop
    ctx->pc = 0x277af0u;
    // NOP
label_277af4:
    // 0x277af4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_277af8:
    if (ctx->pc == 0x277AF8u) {
        ctx->pc = 0x277AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277AF4u;
        // 0x277af8: 0xc31021  addu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277AFCu;
        goto label_277afc;
    }
    ctx->pc = 0x277AF4u;
    {
        const bool branch_taken_0x277af4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x277AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277AF4u;
        // 0x277af8: 0xc31021  addu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277af4) {
            ctx->pc = 0x277B08u;
            goto label_277b08;
        }
    }
    ctx->pc = 0x277AFCu;
label_277afc:
    // 0x277afc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x277afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_277b00:
    // 0x277b00: 0x1000000c  b           . + 4 + (0xC << 2)
label_277b04:
    if (ctx->pc == 0x277B04u) {
        ctx->pc = 0x277B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B00u;
        // 0x277b04: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277B08u;
        goto label_277b08;
    }
    ctx->pc = 0x277B00u;
    {
        const bool branch_taken_0x277b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B00u;
        // 0x277b04: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277b00) {
            ctx->pc = 0x277B34u;
            goto label_277b34;
        }
    }
    ctx->pc = 0x277B08u;
label_277b08:
    // 0x277b08: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x277b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277b0c:
    // 0x277b0c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x277b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277b10:
    // 0x277b10: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x277b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_277b14:
    // 0x277b14: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x277b14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277b18:
    // 0x277b18: 0x0  nop
    ctx->pc = 0x277b18u;
    // NOP
label_277b1c:
    // 0x277b1c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_277b20:
    if (ctx->pc == 0x277B20u) {
        ctx->pc = 0x277B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B1Cu;
        // 0x277b20: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277B24u;
        goto label_277b24;
    }
    ctx->pc = 0x277B1Cu;
    {
        const bool branch_taken_0x277b1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x277B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B1Cu;
        // 0x277b20: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277b1c) {
            ctx->pc = 0x277B34u;
            goto label_277b34;
        }
    }
    ctx->pc = 0x277B24u;
label_277b24:
    // 0x277b24: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x277b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_277b28:
    // 0x277b28: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x277b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_277b2c:
    // 0x277b2c: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x277b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
label_277b30:
    // 0x277b30: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x277b30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_277b34:
    // 0x277b34: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x277b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_277b38:
    // 0x277b38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x277b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_277b3c:
    // 0x277b3c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x277b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_277b40:
    // 0x277b40: 0x481ffe5  bgez        $a0, . + 4 + (-0x1B << 2)
label_277b44:
    if (ctx->pc == 0x277B44u) {
        ctx->pc = 0x277B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B40u;
        // 0x277b44: 0x8fa5013c  lw          $a1, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277B48u;
        goto label_277b48;
    }
    ctx->pc = 0x277B40u;
    {
        const bool branch_taken_0x277b40 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x277B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B40u;
        // 0x277b44: 0x8fa5013c  lw          $a1, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277b40) {
            ctx->pc = 0x277AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277ad8;
        }
    }
    ctx->pc = 0x277B48u;
label_277b48:
    // 0x277b48: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x277b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_277b4c:
    // 0x277b4c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x277b4cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_277b50:
    // 0x277b50: 0x26420048  addiu       $v0, $s2, 0x48
    ctx->pc = 0x277b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
label_277b54:
    // 0x277b54: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x277b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_277b58:
    // 0x277b58: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x277b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277b5c:
    // 0x277b5c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x277b5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277b60:
    // 0x277b60: 0x0  nop
    ctx->pc = 0x277b60u;
    // NOP
label_277b64:
    // 0x277b64: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_277b68:
    if (ctx->pc == 0x277B68u) {
        ctx->pc = 0x277B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B64u;
        // 0x277b68: 0xc6410048  lwc1        $f1, 0x48($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x277B6Cu;
        goto label_277b6c;
    }
    ctx->pc = 0x277B64u;
    {
        const bool branch_taken_0x277b64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x277b64) {
            ctx->pc = 0x277B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277B64u;
            // 0x277b68: 0xc6410048  lwc1        $f1, 0x48($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x277B78u;
            goto label_277b78;
        }
    }
    ctx->pc = 0x277B6Cu;
label_277b6c:
    // 0x277b6c: 0x10000007  b           . + 4 + (0x7 << 2)
label_277b70:
    if (ctx->pc == 0x277B70u) {
        ctx->pc = 0x277B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B6Cu;
        // 0x277b70: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x277B74u;
        goto label_277b74;
    }
    ctx->pc = 0x277B6Cu;
    {
        const bool branch_taken_0x277b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B6Cu;
        // 0x277b70: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x277b6c) {
            ctx->pc = 0x277B8Cu;
            goto label_277b8c;
        }
    }
    ctx->pc = 0x277B74u;
label_277b74:
    // 0x277b74: 0x0  nop
    ctx->pc = 0x277b74u;
    // NOP
label_277b78:
    // 0x277b78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277b78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277b7c:
    // 0x277b7c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x277b7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277b80:
    // 0x277b80: 0x0  nop
    ctx->pc = 0x277b80u;
    // NOP
label_277b84:
    // 0x277b84: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_277b88:
    if (ctx->pc == 0x277B88u) {
        ctx->pc = 0x277B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B84u;
        // 0x277b88: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x277B8Cu;
        goto label_277b8c;
    }
    ctx->pc = 0x277B84u;
    {
        const bool branch_taken_0x277b84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x277b84) {
            ctx->pc = 0x277B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277B84u;
            // 0x277b88: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x277B8Cu;
            goto label_277b8c;
        }
    }
    ctx->pc = 0x277B8Cu;
label_277b8c:
    // 0x277b8c: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x277b8cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_277b90:
    // 0x277b90: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x277b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_277b94:
    // 0x277b94: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x277b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277b98:
    // 0x277b98: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x277b98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277b9c:
    // 0x277b9c: 0x0  nop
    ctx->pc = 0x277b9cu;
    // NOP
label_277ba0:
    // 0x277ba0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_277ba4:
    if (ctx->pc == 0x277BA4u) {
        ctx->pc = 0x277BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277BA0u;
        // 0x277ba4: 0xc4420004  lwc1        $f2, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x277BA8u;
        goto label_277ba8;
    }
    ctx->pc = 0x277BA0u;
    {
        const bool branch_taken_0x277ba0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x277ba0) {
            ctx->pc = 0x277BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277BA0u;
            // 0x277ba4: 0xc4420004  lwc1        $f2, 0x4($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x277BB0u;
            goto label_277bb0;
        }
    }
    ctx->pc = 0x277BA8u;
label_277ba8:
    // 0x277ba8: 0x10000006  b           . + 4 + (0x6 << 2)
label_277bac:
    if (ctx->pc == 0x277BACu) {
        ctx->pc = 0x277BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277BA8u;
        // 0x277bac: 0x46030001  sub.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x277BB0u;
        goto label_277bb0;
    }
    ctx->pc = 0x277BA8u;
    {
        const bool branch_taken_0x277ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277BA8u;
        // 0x277bac: 0x46030001  sub.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x277ba8) {
            ctx->pc = 0x277BC4u;
            goto label_277bc4;
        }
    }
    ctx->pc = 0x277BB0u;
label_277bb0:
    // 0x277bb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277bb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277bb4:
    // 0x277bb4: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x277bb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277bb8:
    // 0x277bb8: 0x0  nop
    ctx->pc = 0x277bb8u;
    // NOP
label_277bbc:
    // 0x277bbc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_277bc0:
    if (ctx->pc == 0x277BC0u) {
        ctx->pc = 0x277BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277BBCu;
        // 0x277bc0: 0x46021801  sub.s       $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x277BC4u;
        goto label_277bc4;
    }
    ctx->pc = 0x277BBCu;
    {
        const bool branch_taken_0x277bbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x277bbc) {
            ctx->pc = 0x277BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277BBCu;
            // 0x277bc0: 0x46021801  sub.s       $f0, $f3, $f2 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x277BC4u;
            goto label_277bc4;
        }
    }
    ctx->pc = 0x277BC4u;
label_277bc4:
    // 0x277bc4: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x277bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_277bc8:
    // 0x277bc8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x277bc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_277bcc:
    // 0x277bcc: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x277bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277bd0:
    // 0x277bd0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x277bd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277bd4:
    // 0x277bd4: 0x0  nop
    ctx->pc = 0x277bd4u;
    // NOP
label_277bd8:
    // 0x277bd8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_277bdc:
    if (ctx->pc == 0x277BDCu) {
        ctx->pc = 0x277BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277BD8u;
        // 0x277bdc: 0x460020c0  add.s       $f3, $f4, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x277BE0u;
        goto label_277be0;
    }
    ctx->pc = 0x277BD8u;
    {
        const bool branch_taken_0x277bd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x277BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277BD8u;
        // 0x277bdc: 0x460020c0  add.s       $f3, $f4, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x277bd8) {
            ctx->pc = 0x277BE8u;
            goto label_277be8;
        }
    }
    ctx->pc = 0x277BE0u;
label_277be0:
    // 0x277be0: 0x10000007  b           . + 4 + (0x7 << 2)
label_277be4:
    if (ctx->pc == 0x277BE4u) {
        ctx->pc = 0x277BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277BE0u;
        // 0x277be4: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x277BE8u;
        goto label_277be8;
    }
    ctx->pc = 0x277BE0u;
    {
        const bool branch_taken_0x277be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277BE0u;
        // 0x277be4: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x277be0) {
            ctx->pc = 0x277C00u;
            goto label_277c00;
        }
    }
    ctx->pc = 0x277BE8u;
label_277be8:
    // 0x277be8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x277be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277bec:
    // 0x277bec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277becu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277bf0:
    // 0x277bf0: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x277bf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277bf4:
    // 0x277bf4: 0x0  nop
    ctx->pc = 0x277bf4u;
    // NOP
label_277bf8:
    // 0x277bf8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_277bfc:
    if (ctx->pc == 0x277BFCu) {
        ctx->pc = 0x277BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277BF8u;
        // 0x277bfc: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x277C00u;
        goto label_277c00;
    }
    ctx->pc = 0x277BF8u;
    {
        const bool branch_taken_0x277bf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x277bf8) {
            ctx->pc = 0x277BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277BF8u;
            // 0x277bfc: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x277C00u;
            goto label_277c00;
        }
    }
    ctx->pc = 0x277C00u;
label_277c00:
    // 0x277c00: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x277c00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_277c04:
    // 0x277c04: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x277c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277c08:
    // 0x277c08: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x277c08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_277c0c:
    // 0x277c0c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x277c0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_277c10:
    // 0x277c10: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x277c10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277c14:
    // 0x277c14: 0x0  nop
    ctx->pc = 0x277c14u;
    // NOP
label_277c18:
    // 0x277c18: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_277c1c:
    if (ctx->pc == 0x277C1Cu) {
        ctx->pc = 0x277C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C18u;
        // 0x277c1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277C20u;
        goto label_277c20;
    }
    ctx->pc = 0x277C18u;
    {
        const bool branch_taken_0x277c18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x277C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C18u;
        // 0x277c1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277c18) {
            ctx->pc = 0x277C24u;
            goto label_277c24;
        }
    }
    ctx->pc = 0x277C20u;
label_277c20:
    // 0x277c20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x277c20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_277c24:
    // 0x277c24: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_277c28:
    if (ctx->pc == 0x277C28u) {
        ctx->pc = 0x277C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C24u;
        // 0x277c28: 0x26430038  addiu       $v1, $s2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277C2Cu;
        goto label_277c2c;
    }
    ctx->pc = 0x277C24u;
    {
        const bool branch_taken_0x277c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C24u;
        // 0x277c28: 0x26430038  addiu       $v1, $s2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277c24) {
            ctx->pc = 0x277D18u;
            goto label_277d18;
        }
    }
    ctx->pc = 0x277C2Cu;
label_277c2c:
    // 0x277c2c: 0xafa30144  sw          $v1, 0x144($sp)
    ctx->pc = 0x277c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 3));
label_277c30:
    // 0x277c30: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x277c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_277c34:
    // 0x277c34: 0x10430038  beq         $v0, $v1, . + 4 + (0x38 << 2)
label_277c38:
    if (ctx->pc == 0x277C38u) {
        ctx->pc = 0x277C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C34u;
        // 0x277c38: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277C3Cu;
        goto label_277c3c;
    }
    ctx->pc = 0x277C34u;
    {
        const bool branch_taken_0x277c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x277C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C34u;
        // 0x277c38: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277c34) {
            ctx->pc = 0x277D18u;
            goto label_277d18;
        }
    }
    ctx->pc = 0x277C3Cu;
label_277c3c:
    // 0x277c3c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x277c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_277c40:
    // 0x277c40: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x277c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_277c44:
    // 0x277c44: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x277c44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_277c48:
    // 0x277c48: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
label_277c4c:
    if (ctx->pc == 0x277C4Cu) {
        ctx->pc = 0x277C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C48u;
        // 0x277c4c: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277C50u;
        goto label_277c50;
    }
    ctx->pc = 0x277C48u;
    {
        const bool branch_taken_0x277c48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x277C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C48u;
        // 0x277c4c: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277c48) {
            ctx->pc = 0x277D08u;
            goto label_277d08;
        }
    }
    ctx->pc = 0x277C50u;
label_277c50:
    // 0x277c50: 0x1217002d  beq         $s0, $s7, . + 4 + (0x2D << 2)
label_277c54:
    if (ctx->pc == 0x277C54u) {
        ctx->pc = 0x277C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C50u;
        // 0x277c54: 0x8f8287d0  lw          $v0, -0x7830($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936528)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277C58u;
        goto label_277c58;
    }
    ctx->pc = 0x277C50u;
    {
        const bool branch_taken_0x277c50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 23));
        ctx->pc = 0x277C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C50u;
        // 0x277c54: 0x8f8287d0  lw          $v0, -0x7830($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277c50) {
            ctx->pc = 0x277D08u;
            goto label_277d08;
        }
    }
    ctx->pc = 0x277C58u;
label_277c58:
    // 0x277c58: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x277c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_277c5c:
    // 0x277c5c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x277c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_277c60:
    // 0x277c60: 0x1073002a  beq         $v1, $s3, . + 4 + (0x2A << 2)
label_277c64:
    if (ctx->pc == 0x277C64u) {
        ctx->pc = 0x277C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C60u;
        // 0x277c64: 0x8fa30140  lw          $v1, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277C68u;
        goto label_277c68;
    }
    ctx->pc = 0x277C60u;
    {
        const bool branch_taken_0x277c60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x277C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C60u;
        // 0x277c64: 0x8fa30140  lw          $v1, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277c60) {
            ctx->pc = 0x277D0Cu;
            goto label_277d0c;
        }
    }
    ctx->pc = 0x277C68u;
label_277c68:
    // 0x277c68: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x277c68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_277c6c:
    // 0x277c6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x277c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_277c70:
    // 0x277c70: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_277c74:
    if (ctx->pc == 0x277C74u) {
        ctx->pc = 0x277C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C70u;
        // 0x277c74: 0x8fa20144  lw          $v0, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277C78u;
        goto label_277c78;
    }
    ctx->pc = 0x277C70u;
    {
        const bool branch_taken_0x277c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C70u;
        // 0x277c74: 0x8fa20144  lw          $v0, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277c70) {
            ctx->pc = 0x277D10u;
            goto label_277d10;
        }
    }
    ctx->pc = 0x277C78u;
label_277c78:
    // 0x277c78: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x277c78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
label_277c7c:
    // 0x277c7c: 0xc09533c  jal         func_254CF0
label_277c80:
    if (ctx->pc == 0x277C80u) {
        ctx->pc = 0x277C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C7Cu;
        // 0x277c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277C84u;
        goto label_277c84;
    }
    ctx->pc = 0x277C7Cu;
    SET_GPR_U32(ctx, 31, 0x277C84u);
    ctx->pc = 0x277C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277C7Cu;
    // 0x277c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254CF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x254CF0u, 0x277C7Cu, 0x277C84u)) {
        return;
    }
    ctx->pc = 0x277C84u;
label_277c84:
    // 0x277c84: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x277c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277c88:
    // 0x277c88: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x277c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277c8c:
    // 0x277c8c: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x277c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_277c90:
    // 0x277c90: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x277c90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_277c94:
    // 0x277c94: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x277c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_277c98:
    // 0x277c98: 0xe7a10150  swc1        $f1, 0x150($sp)
    ctx->pc = 0x277c98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_277c9c:
    // 0x277c9c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x277c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277ca0:
    // 0x277ca0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x277ca0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_277ca4:
    // 0x277ca4: 0xe7a20154  swc1        $f2, 0x154($sp)
    ctx->pc = 0x277ca4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_277ca8:
    // 0x277ca8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x277ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277cac:
    // 0x277cac: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x277cacu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_277cb0:
    // 0x277cb0: 0xe7a30158  swc1        $f3, 0x158($sp)
    ctx->pc = 0x277cb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_277cb4:
    // 0x277cb4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x277cb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_277cb8:
    // 0x277cb8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x277cb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_277cbc:
    // 0x277cbc: 0xc444000c  lwc1        $f4, 0xC($v0)
    ctx->pc = 0x277cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_277cc0:
    // 0x277cc0: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x277cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277cc4:
    // 0x277cc4: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x277cc4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_277cc8:
    // 0x277cc8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x277cc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_277ccc:
    // 0x277ccc: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x277cccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_277cd0:
    // 0x277cd0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x277cd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_277cd4:
    // 0x277cd4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x277cd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_277cd8:
    // 0x277cd8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x277cd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277cdc:
    // 0x277cdc: 0x0  nop
    ctx->pc = 0x277cdcu;
    // NOP
label_277ce0:
    // 0x277ce0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_277ce4:
    if (ctx->pc == 0x277CE4u) {
        ctx->pc = 0x277CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277CE0u;
        // 0x277ce4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277CE8u;
        goto label_277ce8;
    }
    ctx->pc = 0x277CE0u;
    {
        const bool branch_taken_0x277ce0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x277CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277CE0u;
        // 0x277ce4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277ce0) {
            ctx->pc = 0x277D08u;
            goto label_277d08;
        }
    }
    ctx->pc = 0x277CE8u;
label_277ce8:
    // 0x277ce8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x277ce8u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
label_277cec:
    // 0x277cec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x277cecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_277cf0:
    // 0x277cf0: 0x460c0304  c1          0xC0304
    ctx->pc = 0x277cf0u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[12]);
label_277cf4:
    // 0x277cf4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x277cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_277cf8:
    // 0x277cf8: 0x2c0f809  jalr        $s6
label_277cfc:
    if (ctx->pc == 0x277CFCu) {
        ctx->pc = 0x277CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277CF8u;
        // 0x277cfc: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277D00u;
        goto label_277d00;
    }
    ctx->pc = 0x277CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x277D00u);
        ctx->pc = 0x277CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277CF8u;
        // 0x277cfc: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277CF8u, 0x277D00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x277D00u;
label_277d00:
    // 0x277d00: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_277d04:
    if (ctx->pc == 0x277D04u) {
        ctx->pc = 0x277D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277D00u;
        // 0x277d04: 0x7bb001f0  lq          $s0, 0x1F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277D08u;
        goto label_277d08;
    }
    ctx->pc = 0x277D00u;
    {
        const bool branch_taken_0x277d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277D00u;
        // 0x277d04: 0x7bb001f0  lq          $s0, 0x1F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277d00) {
            ctx->pc = 0x277D2Cu;
            goto label_277d2c;
        }
    }
    ctx->pc = 0x277D08u;
label_277d08:
    // 0x277d08: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x277d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_277d0c:
    // 0x277d0c: 0x8fa20144  lw          $v0, 0x144($sp)
    ctx->pc = 0x277d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_277d10:
    // 0x277d10: 0x1462ffcb  bne         $v1, $v0, . + 4 + (-0x35 << 2)
label_277d14:
    if (ctx->pc == 0x277D14u) {
        ctx->pc = 0x277D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277D10u;
        // 0x277d14: 0x8fa30140  lw          $v1, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277D18u;
        goto label_277d18;
    }
    ctx->pc = 0x277D10u;
    {
        const bool branch_taken_0x277d10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x277D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277D10u;
        // 0x277d14: 0x8fa30140  lw          $v1, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277d10) {
            ctx->pc = 0x277C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277c40;
        }
    }
    ctx->pc = 0x277D18u;
label_277d18:
    // 0x277d18: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x277d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_277d1c:
    // 0x277d1c: 0x3c3102b  sltu        $v0, $fp, $v1
    ctx->pc = 0x277d1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_277d20:
    // 0x277d20: 0x5440ff65  bnel        $v0, $zero, . + 4 + (-0x9B << 2)
label_277d24:
    if (ctx->pc == 0x277D24u) {
        ctx->pc = 0x277D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277D20u;
        // 0x277d24: 0x8c62fffc  lw          $v0, -0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277D28u;
        goto label_277d28;
    }
    ctx->pc = 0x277D20u;
    {
        const bool branch_taken_0x277d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x277d20) {
            ctx->pc = 0x277D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277D20u;
            // 0x277d24: 0x8c62fffc  lw          $v0, -0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x277AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277ab8;
        }
    }
    ctx->pc = 0x277D28u;
label_277d28:
    // 0x277d28: 0x7bb001f0  lq          $s0, 0x1F0($sp)
    ctx->pc = 0x277d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_277d2c:
    // 0x277d2c: 0x7bb101e0  lq          $s1, 0x1E0($sp)
    ctx->pc = 0x277d2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_277d30:
    // 0x277d30: 0x7bb201d0  lq          $s2, 0x1D0($sp)
    ctx->pc = 0x277d30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_277d34:
    // 0x277d34: 0x7bb301c0  lq          $s3, 0x1C0($sp)
    ctx->pc = 0x277d34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_277d38:
    // 0x277d38: 0x7bb401b0  lq          $s4, 0x1B0($sp)
    ctx->pc = 0x277d38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_277d3c:
    // 0x277d3c: 0x7bb501a0  lq          $s5, 0x1A0($sp)
    ctx->pc = 0x277d3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_277d40:
    // 0x277d40: 0x7bb60190  lq          $s6, 0x190($sp)
    ctx->pc = 0x277d40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_277d44:
    // 0x277d44: 0x7bb70180  lq          $s7, 0x180($sp)
    ctx->pc = 0x277d44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_277d48:
    // 0x277d48: 0x7bbe0170  lq          $fp, 0x170($sp)
    ctx->pc = 0x277d48u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_277d4c:
    // 0x277d4c: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x277d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_277d50:
    // 0x277d50: 0x3e00008  jr          $ra
label_277d54:
    if (ctx->pc == 0x277D54u) {
        ctx->pc = 0x277D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277D50u;
        // 0x277d54: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277D58u;
        goto label_fallthrough_0x277d50;
    }
    ctx->pc = 0x277D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277D50u;
        // 0x277d54: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x277d50:
    ctx->pc = 0x277D58u;
}
