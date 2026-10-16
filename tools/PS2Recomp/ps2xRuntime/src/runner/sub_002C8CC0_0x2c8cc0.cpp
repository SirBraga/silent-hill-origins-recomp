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

// Function: sub_002C8CC0
// Address: 0x2c8cc0 - 0x2c8d00
void sub_002C8CC0_0x2c8cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8CC0_0x2c8cc0");
#endif

    ctx->pc = 0x2c8cc0u;

    // 0x2c8cc0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x2c8cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x2c8cc4: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x2c8cc4u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8cc8: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x2c8cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x2c8ccc: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x2c8cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x2c8cd0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c8cd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8cd4: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x2c8cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x2c8cd8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2c8cd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8cdc: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x2c8cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x2c8ce0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c8ce0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8ce4: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x2c8ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x2c8ce8: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2c8ce8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8cec: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x2c8cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x2c8cf0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2c8cf0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8cf4: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x2c8cf4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x2c8cf8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2c8cf8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8cfc: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x2c8cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    ctx->pc = 0x2c8d00u;
}
