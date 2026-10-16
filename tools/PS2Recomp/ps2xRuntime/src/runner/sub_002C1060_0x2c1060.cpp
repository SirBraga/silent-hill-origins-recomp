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

// Function: sub_002C1060
// Address: 0x2c1060 - 0x2c1bf0
void sub_002C1060_0x2c1060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1060_0x2c1060");
#endif

    switch (ctx->pc) {
        case 0x2c11d8u: goto label_2c11d8;
        case 0x2c1230u: goto label_2c1230;
        case 0x2c129cu: goto label_2c129c;
        case 0x2c1308u: goto label_2c1308;
        case 0x2c1374u: goto label_2c1374;
        case 0x2c13fcu: goto label_2c13fc;
        case 0x2c1468u: goto label_2c1468;
        case 0x2c14d4u: goto label_2c14d4;
        case 0x2c1540u: goto label_2c1540;
        case 0x2c16a0u: goto label_2c16a0;
        default: break;
    }

    ctx->pc = 0x2c1060u;

    // 0x2c1060: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x2c1060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x2c1064: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x2c1064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
    // 0x2c1068: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x2c1068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
    // 0x2c106c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c106cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1070: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x2c1070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
    // 0x2c1074: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x2c1074u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1078: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x2c1078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
    // 0x2c107c: 0x27b50040  addiu       $s5, $sp, 0x40
    ctx->pc = 0x2c107cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c1080: 0x7fb70110  sq          $s7, 0x110($sp)
    ctx->pc = 0x2c1080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 23));
    // 0x2c1084: 0x27b60030  addiu       $s6, $sp, 0x30
    ctx->pc = 0x2c1084u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c1088: 0x7fbe0100  sq          $fp, 0x100($sp)
    ctx->pc = 0x2c1088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 30));
    // 0x2c108c: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x2c108cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c1090: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x2c1090u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x2c1094: 0x27be0010  addiu       $fp, $sp, 0x10
    ctx->pc = 0x2c1094u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c1098: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x2c1098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x2c109c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2c109cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2c10a0: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x2c10a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
    // 0x2c10a4: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x2c10a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
    // 0x2c10a8: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x2c10a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x2c10ac: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x2c10acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x2c10b0: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x2c10b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2c10b4: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x2c10b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2c10b8: 0x6883000f  ldl         $v1, 0xF($a0)
    ctx->pc = 0x2c10b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2c10bc: 0x6c830008  ldr         $v1, 0x8($a0)
    ctx->pc = 0x2c10bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2c10c0: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2c10c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c10c4: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2c10c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c10c8: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x2c10c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c10cc: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x2c10ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c10d0: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2c10d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c10d4: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x2c10d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x2c10d8: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x2c10d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2c10dc: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x2c10dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2c10e0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2c10e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2c10e4: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x2c10e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c10e8: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x2c10e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c10ec: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c10ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c10f0: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x2c10f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2c10f4: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x2c10f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2c10f8: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2c10f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2c10fc: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x2c10fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c1100: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x2c1100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c1104: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x2c1104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x2c1108: 0x68e60007  ldl         $a2, 0x7($a3)
    ctx->pc = 0x2c1108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2c110c: 0x6ce60000  ldr         $a2, 0x0($a3)
    ctx->pc = 0x2c110cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2c1110: 0x8cec0008  lw          $t4, 0x8($a3)
    ctx->pc = 0x2c1110u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2c1114: 0xb3a60037  sdl         $a2, 0x37($sp)
    ctx->pc = 0x2c1114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c1118: 0xb7a60030  sdr         $a2, 0x30($sp)
    ctx->pc = 0x2c1118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c111c: 0xafac0038  sw          $t4, 0x38($sp)
    ctx->pc = 0x2c111cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 12));
    // 0x2c1120: 0x69030007  ldl         $v1, 0x7($t0)
    ctx->pc = 0x2c1120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2c1124: 0x6d030000  ldr         $v1, 0x0($t0)
    ctx->pc = 0x2c1124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2c1128: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x2c1128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2c112c: 0xb3a30047  sdl         $v1, 0x47($sp)
    ctx->pc = 0x2c112cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c1130: 0xb7a30040  sdr         $v1, 0x40($sp)
    ctx->pc = 0x2c1130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c1134: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x2c1134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x2c1138: 0x692c0007  ldl         $t4, 0x7($t1)
    ctx->pc = 0x2c1138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2c113c: 0x6d2c0000  ldr         $t4, 0x0($t1)
    ctx->pc = 0x2c113cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2c1140: 0x8d2d0008  lw          $t5, 0x8($t1)
    ctx->pc = 0x2c1140u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2c1144: 0xb3ac0057  sdl         $t4, 0x57($sp)
    ctx->pc = 0x2c1144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c1148: 0xb7ac0050  sdr         $t4, 0x50($sp)
    ctx->pc = 0x2c1148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c114c: 0xafad0058  sw          $t5, 0x58($sp)
    ctx->pc = 0x2c114cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 13));
    // 0x2c1150: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x2c1150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2c1154: 0x27ad0050  addiu       $t5, $sp, 0x50
    ctx->pc = 0x2c1154u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c1158: 0x69440007  ldl         $a0, 0x7($t2)
    ctx->pc = 0x2c1158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2c115c: 0x6d440000  ldr         $a0, 0x0($t2)
    ctx->pc = 0x2c115cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2c1160: 0x8d450008  lw          $a1, 0x8($t2)
    ctx->pc = 0x2c1160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x2c1164: 0xb3a40067  sdl         $a0, 0x67($sp)
    ctx->pc = 0x2c1164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c1168: 0xb7a40060  sdr         $a0, 0x60($sp)
    ctx->pc = 0x2c1168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c116c: 0xafa50068  sw          $a1, 0x68($sp)
    ctx->pc = 0x2c116cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
    // 0x2c1170: 0xafad00d0  sw          $t5, 0xD0($sp)
    ctx->pc = 0x2c1170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 13));
    // 0x2c1174: 0x27ac0060  addiu       $t4, $sp, 0x60
    ctx->pc = 0x2c1174u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c1178: 0x69630007  ldl         $v1, 0x7($t3)
    ctx->pc = 0x2c1178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2c117c: 0x6d630000  ldr         $v1, 0x0($t3)
    ctx->pc = 0x2c117cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2c1180: 0x8d640008  lw          $a0, 0x8($t3)
    ctx->pc = 0x2c1180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x2c1184: 0xb3a30077  sdl         $v1, 0x77($sp)
    ctx->pc = 0x2c1184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c1188: 0xb7a30070  sdr         $v1, 0x70($sp)
    ctx->pc = 0x2c1188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c118c: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x2c118cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x2c1190: 0xafac00d4  sw          $t4, 0xD4($sp)
    ctx->pc = 0x2c1190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 12));
    // 0x2c1194: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2c1194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c1198: 0x684d0007  ldl         $t5, 0x7($v0)
    ctx->pc = 0x2c1198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x2c119c: 0x6c4d0000  ldr         $t5, 0x0($v0)
    ctx->pc = 0x2c119cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x2c11a0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2c11a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c11a4: 0xb3ad0087  sdl         $t5, 0x87($sp)
    ctx->pc = 0x2c11a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c11a8: 0xb7ad0080  sdr         $t5, 0x80($sp)
    ctx->pc = 0x2c11a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c11ac: 0xafa30088  sw          $v1, 0x88($sp)
    ctx->pc = 0x2c11acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 3));
    // 0x2c11b0: 0xafa600dc  sw          $a2, 0xDC($sp)
    ctx->pc = 0x2c11b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 6));
    // 0x2c11b4: 0x8fac00d8  lw          $t4, 0xD8($sp)
    ctx->pc = 0x2c11b4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2c11b8: 0x8d8c0004  lw          $t4, 0x4($t4)
    ctx->pc = 0x2c11b8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x2c11bc: 0x1180027e  beqz        $t4, . + 4 + (0x27E << 2)
    ctx->pc = 0x2C11BCu;
    {
        const bool branch_taken_0x2c11bc = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C11C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C11BCu;
        // 0x2c11c0: 0xafac00e0  sw          $t4, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c11bc) {
            ctx->pc = 0x2C1BB8u;
            goto label_2c1bb8;
        }
    }
    ctx->pc = 0x2C11C4u;
    // 0x2c11c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c11c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c11c8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2c11c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2c11cc: 0x27b30090  addiu       $s3, $sp, 0x90
    ctx->pc = 0x2c11ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2c11d0: 0x70006ca9  por         $t5, $zero, $zero
    ctx->pc = 0x2c11d0u;
    SET_GPR_VEC(ctx, 13, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c11d4: 0x0  nop
    ctx->pc = 0x2c11d4u;
    // NOP
label_2c11d8:
    // 0x2c11d8: 0x111a00  sll         $v1, $s1, 8
    ctx->pc = 0x2c11d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 8));
    // 0x2c11dc: 0x7fad00b0  sq          $t5, 0xB0($sp)
    ctx->pc = 0x2c11dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 13));
    // 0x2c11e0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2c11e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c11e4: 0x7fad00c0  sq          $t5, 0xC0($sp)
    ctx->pc = 0x2c11e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 13));
    // 0x2c11e8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2c11e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c11ec: 0xafa300e4  sw          $v1, 0xE4($sp)
    ctx->pc = 0x2c11ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
    // 0x2c11f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2c11f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c11f4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2c11f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2c11f8: 0x10640072  beq         $v1, $a0, . + 4 + (0x72 << 2)
    ctx->pc = 0x2C11F8u;
    {
        const bool branch_taken_0x2c11f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2C11FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C11F8u;
        // 0x2c11fc: 0x8c54002c  lw          $s4, 0x2C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c11f8) {
            ctx->pc = 0x2C13C4u;
            goto label_2c13c4;
        }
    }
    ctx->pc = 0x2C1200u;
    // 0x2c1200: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x2c1200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2c1204: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x2c1204u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2c1208: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x2c1208u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c120c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c120cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1210: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2c1210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c1214: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c1214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1218: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2c1218u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c121c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c121cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1220: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c1220u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1224: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2c1224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1228: 0xc0b03d8  jal         func_2C0F60
    ctx->pc = 0x2C1228u;
    SET_GPR_U32(ctx, 31, 0x2C1230u);
    ctx->pc = 0x2C122Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1228u;
    // 0x2c122c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0F60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C0F60u, 0x2C1228u, 0x2C1230u)) {
        return;
    }
    ctx->pc = 0x2C1230u;
label_2c1230:
    // 0x2c1230: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2c1230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1234: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c1234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1238: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2c1238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c123c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c123cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1240: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c1240u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c1244: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x2c1244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c1248: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c1248u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c124c: 0xc7a500a0  lwc1        $f5, 0xA0($sp)
    ctx->pc = 0x2c124cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c1250: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2c1250u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2c1254: 0xc7a400a4  lwc1        $f4, 0xA4($sp)
    ctx->pc = 0x2c1254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c1258: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x2c1258u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2c125c: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x2c125cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c1260: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c1260u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c1264: 0xc7a600b0  lwc1        $f6, 0xB0($sp)
    ctx->pc = 0x2c1264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c1268: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x2c1268u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2c126c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c126cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1270: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c1270u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c1274: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2c1274u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1278: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2c1278u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2c127c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c127cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1280: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c1280u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1284: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2c1284u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2c1288: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2c1288u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2c128c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c128cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c1290: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x2c1290u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x2c1294: 0xc0b03d8  jal         func_2C0F60
    ctx->pc = 0x2C1294u;
    SET_GPR_U32(ctx, 31, 0x2C129Cu);
    ctx->pc = 0x2C1298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1294u;
    // 0x2c1298: 0xe7a600b0  swc1        $f6, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0F60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C0F60u, 0x2C1294u, 0x2C129Cu)) {
        return;
    }
    ctx->pc = 0x2C129Cu;
label_2c129c:
    // 0x2c129c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2c129cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c12a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c12a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c12a4: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2c12a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c12a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c12a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c12ac: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c12acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c12b0: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x2c12b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c12b4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c12b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c12b8: 0xc7a500a0  lwc1        $f5, 0xA0($sp)
    ctx->pc = 0x2c12b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c12bc: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2c12bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2c12c0: 0xc7a400a4  lwc1        $f4, 0xA4($sp)
    ctx->pc = 0x2c12c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c12c4: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x2c12c4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2c12c8: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x2c12c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c12cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c12ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c12d0: 0xc7a600b4  lwc1        $f6, 0xB4($sp)
    ctx->pc = 0x2c12d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c12d4: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x2c12d4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2c12d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c12d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c12dc: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c12dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c12e0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2c12e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c12e4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2c12e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2c12e8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2c12e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c12ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c12ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c12f0: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2c12f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2c12f4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2c12f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2c12f8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c12f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c12fc: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x2c12fcu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x2c1300: 0xc0b03d8  jal         func_2C0F60
    ctx->pc = 0x2C1300u;
    SET_GPR_U32(ctx, 31, 0x2C1308u);
    ctx->pc = 0x2C1304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1300u;
    // 0x2c1304: 0xe7a600b4  swc1        $f6, 0xB4($sp) (Delay Slot)
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0F60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C0F60u, 0x2C1300u, 0x2C1308u)) {
        return;
    }
    ctx->pc = 0x2C1308u;
label_2c1308:
    // 0x2c1308: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2c1308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c130c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c130cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1310: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2c1310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1314: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c1314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1318: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c1318u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c131c: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x2c131cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c1320: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c1320u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c1324: 0xc7a500a0  lwc1        $f5, 0xA0($sp)
    ctx->pc = 0x2c1324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c1328: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2c1328u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2c132c: 0xc7a400a4  lwc1        $f4, 0xA4($sp)
    ctx->pc = 0x2c132cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c1330: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x2c1330u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2c1334: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x2c1334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c1338: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c1338u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c133c: 0xc7a600b8  lwc1        $f6, 0xB8($sp)
    ctx->pc = 0x2c133cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c1340: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x2c1340u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2c1344: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c1344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1348: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c1348u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c134c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2c134cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1350: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2c1350u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2c1354: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2c1354u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c1358: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c1358u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c135c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2c135cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2c1360: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2c1360u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2c1364: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c1364u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c1368: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x2c1368u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x2c136c: 0xc0b03d8  jal         func_2C0F60
    ctx->pc = 0x2C136Cu;
    SET_GPR_U32(ctx, 31, 0x2C1374u);
    ctx->pc = 0x2C1370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C136Cu;
    // 0x2c1370: 0xe7a600b8  swc1        $f6, 0xB8($sp) (Delay Slot)
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0F60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C0F60u, 0x2C136Cu, 0x2C1374u)) {
        return;
    }
    ctx->pc = 0x2C1374u;
label_2c1374:
    // 0x2c1374: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2c1374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1378: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x2c1378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c137c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c137cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c1380: 0xc7a60098  lwc1        $f6, 0x98($sp)
    ctx->pc = 0x2c1380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c1384: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c1384u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c1388: 0xc7a400a0  lwc1        $f4, 0xA0($sp)
    ctx->pc = 0x2c1388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c138c: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x2c138cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x2c1390: 0xc7a300a4  lwc1        $f3, 0xA4($sp)
    ctx->pc = 0x2c1390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c1394: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x2c1394u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2c1398: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x2c1398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c139c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c139cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c13a0: 0xc7a500bc  lwc1        $f5, 0xBC($sp)
    ctx->pc = 0x2c13a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c13a4: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2c13a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2c13a8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c13a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c13ac: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2c13acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2c13b0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2c13b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2c13b4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2c13b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2c13b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c13b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c13bc: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2c13bcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2c13c0: 0xe7a500bc  swc1        $f5, 0xBC($sp)
    ctx->pc = 0x2c13c0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_2c13c4:
    // 0x2c13c4: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x2c13c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c13c8: 0x128c0071  beq         $s4, $t4, . + 4 + (0x71 << 2)
    ctx->pc = 0x2C13C8u;
    {
        const bool branch_taken_0x2c13c8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 12));
        ctx->pc = 0x2C13CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C13C8u;
        // 0x2c13cc: 0x240d0030  addiu       $t5, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c13c8) {
            ctx->pc = 0x2C1590u;
            goto label_2c1590;
        }
    }
    ctx->pc = 0x2C13D0u;
    // 0x2c13d0: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x2c13d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2c13d4: 0x28d1818  mult        $v1, $s4, $t5
    ctx->pc = 0x2c13d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c13d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c13d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c13dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c13dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c13e0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2c13e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c13e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c13e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c13e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c13e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c13ec: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2c13ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c13f0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2c13f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c13f4: 0xc0b03d8  jal         func_2C0F60
    ctx->pc = 0x2C13F4u;
    SET_GPR_U32(ctx, 31, 0x2C13FCu);
    ctx->pc = 0x2C13F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C13F4u;
    // 0x2c13f8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0F60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C0F60u, 0x2C13F4u, 0x2C13FCu)) {
        return;
    }
    ctx->pc = 0x2C13FCu;
label_2c13fc:
    // 0x2c13fc: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2c13fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1400: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c1400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1404: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2c1404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1408: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c1408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c140c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c140cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c1410: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x2c1410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c1414: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c1414u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c1418: 0xc7a500a0  lwc1        $f5, 0xA0($sp)
    ctx->pc = 0x2c1418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c141c: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2c141cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2c1420: 0xc7a400a4  lwc1        $f4, 0xA4($sp)
    ctx->pc = 0x2c1420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c1424: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x2c1424u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2c1428: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x2c1428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c142c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c142cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c1430: 0xc7a600b0  lwc1        $f6, 0xB0($sp)
    ctx->pc = 0x2c1430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c1434: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x2c1434u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2c1438: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c1438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c143c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c143cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c1440: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2c1440u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1444: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2c1444u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2c1448: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c1448u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c144c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2c144cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1450: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2c1450u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2c1454: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2c1454u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2c1458: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c1458u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c145c: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x2c145cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x2c1460: 0xc0b03d8  jal         func_2C0F60
    ctx->pc = 0x2C1460u;
    SET_GPR_U32(ctx, 31, 0x2C1468u);
    ctx->pc = 0x2C1464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1460u;
    // 0x2c1464: 0xe7a600b0  swc1        $f6, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0F60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C0F60u, 0x2C1460u, 0x2C1468u)) {
        return;
    }
    ctx->pc = 0x2C1468u;
label_2c1468:
    // 0x2c1468: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2c1468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c146c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c146cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1470: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2c1470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1474: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c1474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1478: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c1478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c147c: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x2c147cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c1480: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c1480u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c1484: 0xc7a500a0  lwc1        $f5, 0xA0($sp)
    ctx->pc = 0x2c1484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c1488: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2c1488u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2c148c: 0xc7a400a4  lwc1        $f4, 0xA4($sp)
    ctx->pc = 0x2c148cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c1490: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x2c1490u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2c1494: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x2c1494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c1498: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c1498u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c149c: 0xc7a600b4  lwc1        $f6, 0xB4($sp)
    ctx->pc = 0x2c149cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c14a0: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x2c14a0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2c14a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c14a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c14a8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c14a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c14ac: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2c14acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c14b0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2c14b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2c14b4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2c14b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c14b8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2c14b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c14bc: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2c14bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2c14c0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2c14c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2c14c4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c14c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c14c8: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x2c14c8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x2c14cc: 0xc0b03d8  jal         func_2C0F60
    ctx->pc = 0x2C14CCu;
    SET_GPR_U32(ctx, 31, 0x2C14D4u);
    ctx->pc = 0x2C14D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C14CCu;
    // 0x2c14d0: 0xe7a600b4  swc1        $f6, 0xB4($sp) (Delay Slot)
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0F60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C0F60u, 0x2C14CCu, 0x2C14D4u)) {
        return;
    }
    ctx->pc = 0x2C14D4u;
label_2c14d4:
    // 0x2c14d4: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2c14d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c14d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c14d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c14dc: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2c14dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c14e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c14e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c14e4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c14e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c14e8: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x2c14e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c14ec: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c14ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c14f0: 0xc7a500a0  lwc1        $f5, 0xA0($sp)
    ctx->pc = 0x2c14f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c14f4: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2c14f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2c14f8: 0xc7a400a4  lwc1        $f4, 0xA4($sp)
    ctx->pc = 0x2c14f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c14fc: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x2c14fcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2c1500: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x2c1500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c1504: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c1504u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c1508: 0xc7a600b8  lwc1        $f6, 0xB8($sp)
    ctx->pc = 0x2c1508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c150c: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x2c150cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2c1510: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c1510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1514: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c1514u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c1518: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2c1518u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c151c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2c151cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2c1520: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2c1520u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c1524: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2c1524u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1528: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2c1528u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2c152c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2c152cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2c1530: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c1530u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c1534: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x2c1534u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x2c1538: 0xc0b03d8  jal         func_2C0F60
    ctx->pc = 0x2C1538u;
    SET_GPR_U32(ctx, 31, 0x2C1540u);
    ctx->pc = 0x2C153Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1538u;
    // 0x2c153c: 0xe7a600b8  swc1        $f6, 0xB8($sp) (Delay Slot)
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0F60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C0F60u, 0x2C1538u, 0x2C1540u)) {
        return;
    }
    ctx->pc = 0x2C1540u;
label_2c1540:
    // 0x2c1540: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2c1540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1544: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x2c1544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c1548: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c1548u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c154c: 0xc7a60098  lwc1        $f6, 0x98($sp)
    ctx->pc = 0x2c154cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c1550: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c1550u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c1554: 0xc7a400a0  lwc1        $f4, 0xA0($sp)
    ctx->pc = 0x2c1554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c1558: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x2c1558u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x2c155c: 0xc7a300a4  lwc1        $f3, 0xA4($sp)
    ctx->pc = 0x2c155cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c1560: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x2c1560u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2c1564: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x2c1564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1568: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c1568u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c156c: 0xc7a500bc  lwc1        $f5, 0xBC($sp)
    ctx->pc = 0x2c156cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c1570: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2c1570u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2c1574: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c1574u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c1578: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2c1578u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2c157c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2c157cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2c1580: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2c1580u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2c1584: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c1584u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c1588: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2c1588u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2c158c: 0xe7a500bc  swc1        $f5, 0xBC($sp)
    ctx->pc = 0x2c158cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_2c1590:
    // 0x2c1590: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x2c1590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c1594: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x2c1594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2c1598: 0xc7a400b0  lwc1        $f4, 0xB0($sp)
    ctx->pc = 0x2c1598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c159c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2c159cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c15a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c15a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c15a4: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2c15a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c15a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c15a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c15ac: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x2c15acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c15b0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2c15b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c15b4: 0xc7a300bc  lwc1        $f3, 0xBC($sp)
    ctx->pc = 0x2c15b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c15b8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2c15b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2c15bc: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x2c15bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2c15c0: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2c15c0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2c15c4: 0xe7a400b0  swc1        $f4, 0xB0($sp)
    ctx->pc = 0x2c15c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2c15c8: 0x46052032  c.eq.s      $f4, $f5
    ctx->pc = 0x2c15c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c15cc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2c15ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c15d0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2c15d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2c15d4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c15d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c15d8: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x2c15d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2c15dc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c15dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c15e0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2c15e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2c15e4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2c15e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c15e8: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x2c15e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2c15ec: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2c15ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c15f0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2c15f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2c15f4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2c15f4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2c15f8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C15F8u;
    {
        const bool branch_taken_0x2c15f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C15FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C15F8u;
        // 0x2c15fc: 0xe7a300bc  swc1        $f3, 0xBC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c15f8) {
            ctx->pc = 0x2C1610u;
            goto label_2c1610;
        }
    }
    ctx->pc = 0x2C1600u;
    // 0x2c1600: 0x4604a816  rsqrt.s     $f0, $f21, $f4
    ctx->pc = 0x2c1600u;
    ctx->f[0] = FPU_RSQRT_S(ctx, ctx->f[21], ctx->f[4]);
    // 0x2c1604: 0x46002042  mul.s       $f1, $f4, $f0
    ctx->pc = 0x2c1604u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2c1608: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x2c1608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2c160c: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x2c160cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2c1610:
    // 0x2c1610: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2c1610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1614: 0x46050832  c.eq.s      $f1, $f5
    ctx->pc = 0x2c1614u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1618: 0x0  nop
    ctx->pc = 0x2c1618u;
    // NOP
    // 0x2c161c: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2C161Cu;
    {
        const bool branch_taken_0x2c161c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c161c) {
            ctx->pc = 0x2C1620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C161Cu;
            // 0x2c1620: 0xc7a100b8  lwc1        $f1, 0xB8($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1638u;
            goto label_2c1638;
        }
    }
    ctx->pc = 0x2C1624u;
    // 0x2c1624: 0x4601a816  rsqrt.s     $f0, $f21, $f1
    ctx->pc = 0x2c1624u;
    ctx->f[0] = FPU_RSQRT_S(ctx, ctx->f[21], ctx->f[1]);
    // 0x2c1628: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c1628u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c162c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x2c162cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2c1630: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x2c1630u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2c1634: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x2c1634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c1638:
    // 0x2c1638: 0x46050832  c.eq.s      $f1, $f5
    ctx->pc = 0x2c1638u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c163c: 0x0  nop
    ctx->pc = 0x2c163cu;
    // NOP
    // 0x2c1640: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2C1640u;
    {
        const bool branch_taken_0x2c1640 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1640) {
            ctx->pc = 0x2C1644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1640u;
            // 0x2c1644: 0xc7a100bc  lwc1        $f1, 0xBC($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C165Cu;
            goto label_2c165c;
        }
    }
    ctx->pc = 0x2C1648u;
    // 0x2c1648: 0x4601a816  rsqrt.s     $f0, $f21, $f1
    ctx->pc = 0x2c1648u;
    ctx->f[0] = FPU_RSQRT_S(ctx, ctx->f[21], ctx->f[1]);
    // 0x2c164c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c164cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c1650: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2c1650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2c1654: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x2c1654u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2c1658: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x2c1658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c165c:
    // 0x2c165c: 0x46050832  c.eq.s      $f1, $f5
    ctx->pc = 0x2c165cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1660: 0x0  nop
    ctx->pc = 0x2c1660u;
    // NOP
    // 0x2c1664: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2C1664u;
    {
        const bool branch_taken_0x2c1664 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1664) {
            ctx->pc = 0x2C1668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1664u;
            // 0x2c1668: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1680u;
            goto label_2c1680;
        }
    }
    ctx->pc = 0x2C166Cu;
    // 0x2c166c: 0x4601a816  rsqrt.s     $f0, $f21, $f1
    ctx->pc = 0x2c166cu;
    ctx->f[0] = FPU_RSQRT_S(ctx, ctx->f[21], ctx->f[1]);
    // 0x2c1670: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c1670u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c1674: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2c1674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2c1678: 0xe7a100cc  swc1        $f1, 0xCC($sp)
    ctx->pc = 0x2c1678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2c167c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2c167cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c1680:
    // 0x2c1680: 0x26270001  addiu       $a3, $s1, 0x1
    ctx->pc = 0x2c1680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c1684: 0x8fac00e4  lw          $t4, 0xE4($sp)
    ctx->pc = 0x2c1684u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2c1688: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2c1688u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c168c: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x2c168cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x2c1690: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x2c1690u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
    // 0x2c1694: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x2c1694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x2c1698: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2c1698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c169c: 0x0  nop
    ctx->pc = 0x2c169cu;
    // NOP
label_2c16a0:
    // 0x2c16a0: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x2c16a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c16a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c16a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c16a8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2c16a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c16ac: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2c16acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c16b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c16b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c16b4: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2c16b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c16b8: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2c16b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c16bc: 0xc4440014  lwc1        $f4, 0x14($v0)
    ctx->pc = 0x2c16bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c16c0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2c16c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c16c4: 0xc4450018  lwc1        $f5, 0x18($v0)
    ctx->pc = 0x2c16c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c16c8: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2c16c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c16cc: 0xc4460040  lwc1        $f6, 0x40($v0)
    ctx->pc = 0x2c16ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c16d0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2c16d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c16d4: 0xc4470044  lwc1        $f7, 0x44($v0)
    ctx->pc = 0x2c16d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c16d8: 0xc4480048  lwc1        $f8, 0x48($v0)
    ctx->pc = 0x2c16d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2c16dc: 0xc4490050  lwc1        $f9, 0x50($v0)
    ctx->pc = 0x2c16dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2c16e0: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2c16e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c16e4: 0xc44a0054  lwc1        $f10, 0x54($v0)
    ctx->pc = 0x2c16e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2c16e8: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2c16e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c16ec: 0xc4420058  lwc1        $f2, 0x58($v0)
    ctx->pc = 0x2c16ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c16f0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2c16f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2c16f4: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2c16f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c16f8: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2c16f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c16fc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c16fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c1700: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x2c1700u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2c1704: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2c1704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1708: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2c1708u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2c170c: 0xe4440014  swc1        $f4, 0x14($v0)
    ctx->pc = 0x2c170cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2c1710: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2c1710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1714: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2c1714u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2c1718: 0xe4450018  swc1        $f5, 0x18($v0)
    ctx->pc = 0x2c1718u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2c171c: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x2c171cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1720: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x2c1720u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2c1724: 0xe4460040  swc1        $f6, 0x40($v0)
    ctx->pc = 0x2c1724u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2c1728: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x2c1728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c172c: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x2c172cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2c1730: 0xe4470044  swc1        $f7, 0x44($v0)
    ctx->pc = 0x2c1730u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2c1734: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x2c1734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1738: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x2c1738u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x2c173c: 0xe4480048  swc1        $f8, 0x48($v0)
    ctx->pc = 0x2c173cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2c1740: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x2c1740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1744: 0x46004a42  mul.s       $f9, $f9, $f0
    ctx->pc = 0x2c1744u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x2c1748: 0xe4490050  swc1        $f9, 0x50($v0)
    ctx->pc = 0x2c1748u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2c174c: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x2c174cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1750: 0x46005282  mul.s       $f10, $f10, $f0
    ctx->pc = 0x2c1750u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x2c1754: 0xe44a0054  swc1        $f10, 0x54($v0)
    ctx->pc = 0x2c1754u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2c1758: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x2c1758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c175c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2c175cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c1760: 0xe4420058  swc1        $f2, 0x58($v0)
    ctx->pc = 0x2c1760u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2c1764: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x2c1764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1768: 0xc4400080  lwc1        $f0, 0x80($v0)
    ctx->pc = 0x2c1768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c176c: 0xc4420084  lwc1        $f2, 0x84($v0)
    ctx->pc = 0x2c176cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c1770: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c1770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c1774: 0xc4430088  lwc1        $f3, 0x88($v0)
    ctx->pc = 0x2c1774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c1778: 0xc4410090  lwc1        $f1, 0x90($v0)
    ctx->pc = 0x2c1778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c177c: 0xc4440094  lwc1        $f4, 0x94($v0)
    ctx->pc = 0x2c177cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c1780: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x2c1780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x2c1784: 0xc4450098  lwc1        $f5, 0x98($v0)
    ctx->pc = 0x2c1784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c1788: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x2c1788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c178c: 0xc44600c0  lwc1        $f6, 0xC0($v0)
    ctx->pc = 0x2c178cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c1790: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2c1790u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c1794: 0xc44700c4  lwc1        $f7, 0xC4($v0)
    ctx->pc = 0x2c1794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c1798: 0xc44800c8  lwc1        $f8, 0xC8($v0)
    ctx->pc = 0x2c1798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2c179c: 0xc44900d0  lwc1        $f9, 0xD0($v0)
    ctx->pc = 0x2c179cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2c17a0: 0xe4420084  swc1        $f2, 0x84($v0)
    ctx->pc = 0x2c17a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x2c17a4: 0xc44a00d4  lwc1        $f10, 0xD4($v0)
    ctx->pc = 0x2c17a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2c17a8: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x2c17a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c17ac: 0xc44200d8  lwc1        $f2, 0xD8($v0)
    ctx->pc = 0x2c17acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c17b0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2c17b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2c17b4: 0xe4430088  swc1        $f3, 0x88($v0)
    ctx->pc = 0x2c17b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x2c17b8: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x2c17b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c17bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c17bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c17c0: 0xe4410090  swc1        $f1, 0x90($v0)
    ctx->pc = 0x2c17c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2c17c4: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x2c17c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c17c8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2c17c8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2c17cc: 0xe4440094  swc1        $f4, 0x94($v0)
    ctx->pc = 0x2c17ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2c17d0: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x2c17d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c17d4: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2c17d4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2c17d8: 0xe4450098  swc1        $f5, 0x98($v0)
    ctx->pc = 0x2c17d8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2c17dc: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2c17dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c17e0: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x2c17e0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2c17e4: 0xe44600c0  swc1        $f6, 0xC0($v0)
    ctx->pc = 0x2c17e4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
    // 0x2c17e8: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2c17e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c17ec: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x2c17ecu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2c17f0: 0xe44700c4  swc1        $f7, 0xC4($v0)
    ctx->pc = 0x2c17f0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 196), bits); }
    // 0x2c17f4: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2c17f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c17f8: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x2c17f8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x2c17fc: 0xe44800c8  swc1        $f8, 0xC8($v0)
    ctx->pc = 0x2c17fcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 200), bits); }
    // 0x2c1800: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2c1800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1804: 0x46004a42  mul.s       $f9, $f9, $f0
    ctx->pc = 0x2c1804u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x2c1808: 0xe44900d0  swc1        $f9, 0xD0($v0)
    ctx->pc = 0x2c1808u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2c180c: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2c180cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1810: 0x46005282  mul.s       $f10, $f10, $f0
    ctx->pc = 0x2c1810u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x2c1814: 0xe44a00d4  swc1        $f10, 0xD4($v0)
    ctx->pc = 0x2c1814u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2c1818: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2c1818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c181c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2c181cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c1820: 0xe44200d8  swc1        $f2, 0xD8($v0)
    ctx->pc = 0x2c1820u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
    // 0x2c1824: 0x1464ff9e  bne         $v1, $a0, . + 4 + (-0x62 << 2)
    ctx->pc = 0x2C1824u;
    {
        const bool branch_taken_0x2c1824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C1828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1824u;
        // 0x2c1828: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1824) {
            ctx->pc = 0x2C16A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c16a0;
        }
    }
    ctx->pc = 0x2C182Cu;
    // 0x2c182c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2c182cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2c1830: 0xc4c33b10  lwc1        $f3, 0x3B10($a2)
    ctx->pc = 0x2c1830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 15120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c1834: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2c1834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c1838: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2c1838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c183c: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x2c183cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1840: 0x0  nop
    ctx->pc = 0x2c1840u;
    // NOP
    // 0x2c1844: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2C1844u;
    {
        const bool branch_taken_0x2c1844 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1844) {
            ctx->pc = 0x2C1848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1844u;
            // 0x2c1848: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C185Cu;
            goto label_2c185c;
        }
    }
    ctx->pc = 0x2C184Cu;
    // 0x2c184c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x2c184cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1850: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c1850u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c1854: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2c1854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c1858: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2c1858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2c185c:
    // 0x2c185c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2c185cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c1860: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2c1860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1864: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x2c1864u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1868: 0x0  nop
    ctx->pc = 0x2c1868u;
    // NOP
    // 0x2c186c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2C186Cu;
    {
        const bool branch_taken_0x2c186c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c186c) {
            ctx->pc = 0x2C1870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C186Cu;
            // 0x2c1870: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1884u;
            goto label_2c1884;
        }
    }
    ctx->pc = 0x2C1874u;
    // 0x2c1874: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x2c1874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1878: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c1878u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c187c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2c187cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c1880: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2c1880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2c1884:
    // 0x2c1884: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2c1884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c1888: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2c1888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c188c: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x2c188cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1890: 0x0  nop
    ctx->pc = 0x2c1890u;
    // NOP
    // 0x2c1894: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2C1894u;
    {
        const bool branch_taken_0x2c1894 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1894) {
            ctx->pc = 0x2C1898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1894u;
            // 0x2c1898: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C18ACu;
            goto label_2c18ac;
        }
    }
    ctx->pc = 0x2C189Cu;
    // 0x2c189c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2c189cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c18a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c18a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c18a4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c18a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c18a8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2c18a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2c18ac:
    // 0x2c18ac: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2c18acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c18b0: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2c18b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c18b4: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x2c18b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c18b8: 0x0  nop
    ctx->pc = 0x2c18b8u;
    // NOP
    // 0x2c18bc: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2C18BCu;
    {
        const bool branch_taken_0x2c18bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c18bc) {
            ctx->pc = 0x2C18C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C18BCu;
            // 0x2c18c0: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C18D4u;
            goto label_2c18d4;
        }
    }
    ctx->pc = 0x2C18C4u;
    // 0x2c18c4: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x2c18c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c18c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c18c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c18cc: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2c18ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2c18d0: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x2c18d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2c18d4:
    // 0x2c18d4: 0xc5023b14  lwc1        $f2, 0x3B14($t0)
    ctx->pc = 0x2c18d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 15124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c18d8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2c18d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c18dc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2c18dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c18e0: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x2c18e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c18e4: 0x0  nop
    ctx->pc = 0x2c18e4u;
    // NOP
    // 0x2c18e8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2C18E8u;
    {
        const bool branch_taken_0x2c18e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c18e8) {
            ctx->pc = 0x2C18ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C18E8u;
            // 0x2c18ec: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1900u;
            goto label_2c1900;
        }
    }
    ctx->pc = 0x2C18F0u;
    // 0x2c18f0: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x2c18f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c18f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c18f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c18f8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2c18f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c18fc: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x2c18fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2c1900:
    // 0x2c1900: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2c1900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c1904: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2c1904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1908: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x2c1908u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c190c: 0x0  nop
    ctx->pc = 0x2c190cu;
    // NOP
    // 0x2c1910: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2C1910u;
    {
        const bool branch_taken_0x2c1910 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1910) {
            ctx->pc = 0x2C1914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1910u;
            // 0x2c1914: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1928u;
            goto label_2c1928;
        }
    }
    ctx->pc = 0x2C1918u;
    // 0x2c1918: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x2c1918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c191c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c191cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c1920: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2c1920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c1924: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x2c1924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2c1928:
    // 0x2c1928: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2c1928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c192c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2c192cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1930: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x2c1930u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1934: 0x0  nop
    ctx->pc = 0x2c1934u;
    // NOP
    // 0x2c1938: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2C1938u;
    {
        const bool branch_taken_0x2c1938 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1938) {
            ctx->pc = 0x2C193Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1938u;
            // 0x2c193c: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1950u;
            goto label_2c1950;
        }
    }
    ctx->pc = 0x2C1940u;
    // 0x2c1940: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2c1940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1944: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c1944u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c1948: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c1948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c194c: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x2c194cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2c1950:
    // 0x2c1950: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2c1950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c1954: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2c1954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1958: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x2c1958u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c195c: 0x0  nop
    ctx->pc = 0x2c195cu;
    // NOP
    // 0x2c1960: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2C1960u;
    {
        const bool branch_taken_0x2c1960 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1960) {
            ctx->pc = 0x2C1964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1960u;
            // 0x2c1964: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1978u;
            goto label_2c1978;
        }
    }
    ctx->pc = 0x2C1968u;
    // 0x2c1968: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x2c1968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c196c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c196cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c1970: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2c1970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2c1974: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2c1974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2c1978:
    // 0x2c1978: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2c1978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c197c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2c197cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1980: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x2c1980u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1984: 0x0  nop
    ctx->pc = 0x2c1984u;
    // NOP
    // 0x2c1988: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2C1988u;
    {
        const bool branch_taken_0x2c1988 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1988) {
            ctx->pc = 0x2C198Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1988u;
            // 0x2c198c: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C19A0u;
            goto label_2c19a0;
        }
    }
    ctx->pc = 0x2C1990u;
    // 0x2c1990: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x2c1990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1994: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c1994u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c1998: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2c1998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c199c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2c199cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2c19a0:
    // 0x2c19a0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2c19a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c19a4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2c19a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c19a8: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x2c19a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c19ac: 0x0  nop
    ctx->pc = 0x2c19acu;
    // NOP
    // 0x2c19b0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2C19B0u;
    {
        const bool branch_taken_0x2c19b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c19b0) {
            ctx->pc = 0x2C19B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C19B0u;
            // 0x2c19b4: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C19C8u;
            goto label_2c19c8;
        }
    }
    ctx->pc = 0x2C19B8u;
    // 0x2c19b8: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x2c19b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c19bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c19bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c19c0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2c19c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c19c4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2c19c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2c19c8:
    // 0x2c19c8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2c19c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c19cc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2c19ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c19d0: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x2c19d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c19d4: 0x0  nop
    ctx->pc = 0x2c19d4u;
    // NOP
    // 0x2c19d8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2C19D8u;
    {
        const bool branch_taken_0x2c19d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c19d8) {
            ctx->pc = 0x2C19DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C19D8u;
            // 0x2c19dc: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C19F0u;
            goto label_2c19f0;
        }
    }
    ctx->pc = 0x2C19E0u;
    // 0x2c19e0: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2c19e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c19e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c19e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c19e8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c19e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c19ec: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2c19ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2c19f0:
    // 0x2c19f0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2c19f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c19f4: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2c19f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c19f8: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x2c19f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c19fc: 0x0  nop
    ctx->pc = 0x2c19fcu;
    // NOP
    // 0x2c1a00: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2C1A00u;
    {
        const bool branch_taken_0x2c1a00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1a00) {
            ctx->pc = 0x2C1A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1A00u;
            // 0x2c1a04: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1A18u;
            goto label_2c1a18;
        }
    }
    ctx->pc = 0x2C1A08u;
    // 0x2c1a08: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x2c1a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1a0c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c1a0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c1a10: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2c1a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2c1a14: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2c1a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2c1a18:
    // 0x2c1a18: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2c1a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c1a1c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2c1a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1a20: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x2c1a20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1a24: 0x0  nop
    ctx->pc = 0x2c1a24u;
    // NOP
    // 0x2c1a28: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2C1A28u;
    {
        const bool branch_taken_0x2c1a28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1a28) {
            ctx->pc = 0x2C1A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1A28u;
            // 0x2c1a2c: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1A40u;
            goto label_2c1a40;
        }
    }
    ctx->pc = 0x2C1A30u;
    // 0x2c1a30: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x2c1a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1a34: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c1a34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c1a38: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2c1a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c1a3c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2c1a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2c1a40:
    // 0x2c1a40: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2c1a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c1a44: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2c1a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1a48: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x2c1a48u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1a4c: 0x0  nop
    ctx->pc = 0x2c1a4cu;
    // NOP
    // 0x2c1a50: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2C1A50u;
    {
        const bool branch_taken_0x2c1a50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1a50) {
            ctx->pc = 0x2C1A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1A50u;
            // 0x2c1a54: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1A68u;
            goto label_2c1a68;
        }
    }
    ctx->pc = 0x2C1A58u;
    // 0x2c1a58: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x2c1a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1a5c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c1a5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c1a60: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2c1a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c1a64: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2c1a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2c1a68:
    // 0x2c1a68: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2c1a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c1a6c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2c1a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1a70: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x2c1a70u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1a74: 0x0  nop
    ctx->pc = 0x2c1a74u;
    // NOP
    // 0x2c1a78: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2C1A78u;
    {
        const bool branch_taken_0x2c1a78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1a78) {
            ctx->pc = 0x2C1A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1A78u;
            // 0x2c1a7c: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1A90u;
            goto label_2c1a90;
        }
    }
    ctx->pc = 0x2C1A80u;
    // 0x2c1a80: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2c1a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1a84: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c1a84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c1a88: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c1a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c1a8c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2c1a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2c1a90:
    // 0x2c1a90: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2c1a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c1a94: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2c1a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1a98: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x2c1a98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1a9c: 0x0  nop
    ctx->pc = 0x2c1a9cu;
    // NOP
    // 0x2c1aa0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C1AA0u;
    {
        const bool branch_taken_0x2c1aa0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C1AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1AA0u;
        // 0x2c1aa4: 0x8fad00d0  lw          $t5, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1aa0) {
            ctx->pc = 0x2C1AB8u;
            goto label_2c1ab8;
        }
    }
    ctx->pc = 0x2C1AA8u;
    // 0x2c1aa8: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x2c1aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1aac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c1aacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c1ab0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2c1ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2c1ab4: 0x8fad00d0  lw          $t5, 0xD0($sp)
    ctx->pc = 0x2c1ab4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2c1ab8:
    // 0x2c1ab8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2c1ab8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1abc: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2c1abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1ac0: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x2c1ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2c1ac4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c1ac4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c1ac8: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x2c1ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2c1acc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2c1accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c1ad0: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x2c1ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2c1ad4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2c1ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1ad8: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2c1ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c1adc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c1adcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c1ae0: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2c1ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c1ae4: 0xc444000c  lwc1        $f4, 0xC($v0)
    ctx->pc = 0x2c1ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c1ae8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c1ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c1aec: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2c1aecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c1af0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2c1af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2c1af4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2c1af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c1af8: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x2c1af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1afc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2c1afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2c1b00: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c1b00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c1b04: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2c1b04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c1b08: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2c1b08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c1b0c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x2c1b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1b10: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c1b10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c1b14: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2c1b14u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2c1b18: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2c1b18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c1b1c: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2c1b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1b20: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c1b20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c1b24: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2c1b24u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2c1b28: 0xe444000c  swc1        $f4, 0xC($v0)
    ctx->pc = 0x2c1b28u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2c1b2c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2c1b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1b30: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2c1b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1b34: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2c1b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c1b38: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c1b38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c1b3c: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x2c1b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c1b40: 0xc464000c  lwc1        $f4, 0xC($v1)
    ctx->pc = 0x2c1b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c1b44: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2c1b44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2c1b48: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x2c1b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1b4c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2c1b4cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c1b50: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x2c1b50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2c1b54: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x2c1b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1b58: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2c1b58u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2c1b5c: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x2c1b5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2c1b60: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2c1b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1b64: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2c1b64u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2c1b68: 0xe464000c  swc1        $f4, 0xC($v1)
    ctx->pc = 0x2c1b68u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2c1b6c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2c1b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1b70: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2c1b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1b74: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2c1b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c1b78: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c1b78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c1b7c: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x2c1b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c1b80: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x2c1b80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2c1b84: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x2c1b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1b88: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2c1b88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c1b8c: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x2c1b8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2c1b90: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x2c1b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1b94: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2c1b94u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2c1b98: 0xe4830008  swc1        $f3, 0x8($a0)
    ctx->pc = 0x2c1b98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2c1b9c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2c1b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1ba0: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x2c1ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1ba4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c1ba4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c1ba8: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2c1ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2c1bac: 0x8fac00e0  lw          $t4, 0xE0($sp)
    ctx->pc = 0x2c1bacu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2c1bb0: 0x162cfd89  bne         $s1, $t4, . + 4 + (-0x277 << 2)
    ctx->pc = 0x2C1BB0u;
    {
        const bool branch_taken_0x2c1bb0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 12));
        ctx->pc = 0x2C1BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1BB0u;
        // 0x2c1bb4: 0x70006ca9  por         $t5, $zero, $zero (Delay Slot)
        SET_GPR_VEC(ctx, 13, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1bb0) {
            ctx->pc = 0x2C11D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c11d8;
        }
    }
    ctx->pc = 0x2C1BB8u;
label_2c1bb8:
    // 0x2c1bb8: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x2c1bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2c1bbc: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x2c1bbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2c1bc0: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x2c1bc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2c1bc4: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x2c1bc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2c1bc8: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x2c1bc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2c1bcc: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x2c1bccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2c1bd0: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x2c1bd0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2c1bd4: 0x7bb70110  lq          $s7, 0x110($sp)
    ctx->pc = 0x2c1bd4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2c1bd8: 0x7bbe0100  lq          $fp, 0x100($sp)
    ctx->pc = 0x2c1bd8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2c1bdc: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x2c1bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2c1be0: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x2c1be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c1be4: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x2c1be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c1be8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1BE8u;
        // 0x2c1bec: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1BF0u;
}
